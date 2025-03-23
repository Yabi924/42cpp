#include "inc/IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
    while (--qty > 0)
        delete Source[qty];
}

IMateriaSource::IMateriaSource(): qty(0)
{
    for (int i = 0; i < 100; i++)
        Source[i] = NULL;
}
