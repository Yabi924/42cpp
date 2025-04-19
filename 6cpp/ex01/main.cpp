#include "Serialization.hpp"

void aaa()
{
    int n = 65;

    char *s = reinterpret_cast<char *>(&n);

    char c_n = n;
    cout << c_n << endl;
    cout << *s << endl;
}

void test()
{
        
    Data *data = new Data;

    data->s = "Hello";

    cout << "------serialize------" << endl;
    uintptr_t ptr = Serialization::serialize(data);

    cout << data << endl;
    cout << data->s << endl;

    cout << "------deserialize----" << endl;
    Data *new_data = Serialization::deserialize(ptr);

    cout << new_data << endl;
    cout << new_data->s << endl;

    //can use either
    // delete new_data;
    // delete data;
}

int main()
{
    if (MYFLAG == 1)
        test();
    else if (MYFLAG == 2)
        aaa();
    return (0);
}
