#include "inc/IMateriaSource.hpp"

IMateriaSource::~IMateriaSource() {}

IMateriaSource::IMateriaSource(): qty(0)
{
    for (int i = 0; i < 100; i++)
        Source[i] = NULL;
}
