#!/bin/bash

mkdir -p tester

# Function to run and compare test
run_test() {
    test_name=$1
    unsorted_numbers="$2"
    expect_error=$3

    if [ "$expect_error" = true ]; then
        my_result=$(./PmergeMe $unsorted_numbers 2>&1 | grep "Error")
        echo "$my_result" > ./tester/my_result.txt

        result=$(cat ./tester/my_result.txt | grep "Error" | wc -l)

        if [ $result != 0 ]; then
            echo -e "\033[32m$test_name PASSED!\033[0m"
        else
            echo -e "\033[31m$test_name FAILED!\033[0m"
        fi
    else
        my_result=$(./PmergeMe $unsorted_numbers | grep "After:" | sed 's/After:\s*//')
        echo "$my_result" > ./tester/my_result.txt

        sort_result=$(echo "$unsorted_numbers" | tr " " "\n" | sort -n | tr "\n" " ")
        echo "$sort_result" > ./tester/sort_result.txt

        comparation_result=$(diff ./tester/sort_result.txt ./tester/my_result.txt | wc -l)

        if [ $comparation_result -eq 0 ]; then
            echo -e "\033[32m$test_name PASSED!\033[0m"
        else
            echo -e "\033[31m$test_name FAILED!\033[0m"
        fi

        if [ "$my_result" != "$sort_result" ]; then
            diff <(echo "$my_result") <(echo "$sort_result")
        fi
    fi
}

# TEST CASES
run_test "TEST 5 UNSORTED NUMBERS" "3 5 9 7 4" false
run_test "TEST 500 RANDOM NUMBERS (jot)" "$(jot -r 500 1 100000 | paste -sd' ')" false
run_test "TEST 500 RANDOM NUMBERS (shuf)" "$(shuf -i 1-100000 -n 500 | paste -sd' ')" false
run_test "TEST 1000 RANDOM NUMBERS (jot)" "$(jot -r 1000 1 100000 | paste -sd' ')" false
run_test "TEST 1000 RANDOM NUMBERS (shuf)" "$(shuf -i 1-100000 -n 1000 | paste -sd' ')" false
run_test "TEST 3000 RANDOM NUMBERS (jot)" "$(jot -r 3000 1 100000 | paste -sd' ')" false
run_test "TEST 3000 RANDOM NUMBERS (shuf)" "$(shuf -i 1-100000 -n 3000 | paste -sd' ')" false
run_test "TEST SUBJECT RANGE (3000 numbers 1-1000)" "$(jot -r 3000 1 1000 | paste -sd' ')" false
run_test "TEST OVERFLOW" "2147483648 3 2 1" true
run_test "TEST RIDICULOUS BIG NUMBER" "3452345234523453253245390458239058902348509234850923845098234509823094583204958023948509238509238450923850923845098230594832095482304852039458230945802348502385402384502348592304582309485023945830492582309582349058234095832904582340958320945832094583420958230945832409583240958324095832094582430958230945823094582340958209345823409584209358320958230958230958423095842309582340958230958324058230458423095823049580295820934850423854093285029438509238454902358234098509234582340958230958423058324058320583429058342058324509328503428528934502345092348502348592453245423532453253245832958239058234095809324850923485092348509823509823450982309582390458092384509328509328509845095823490582390458932458239485923845092385098234905832094582034580932850932452147483647 3 2 1" true
run_test "TEST NEGATIVE NUMBER" "-123 3 2 1" true
run_test "TEST NON-NUMERIC CHAR" "33 234 4 54353453 3 a j" true
run_test "TEST NO INPUT" "" true

# numbers=$(seq 0 999)

# read -r -a arr <<< "$numbers"

# for ((i=1; i<=1000; i++))
# do
#     test_nums="${arr[@]:0:i}"
#     test_str=$(echo "${test_nums[@]}")

#     run_test "TEST FIRST $i NUMBERS" "$test_str" false
# done

rm -rf tester
