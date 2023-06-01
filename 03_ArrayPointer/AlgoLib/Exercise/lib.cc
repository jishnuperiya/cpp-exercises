#include <cstddef>
#include <cstdint>
#include <iostream>

#include "lib.h"

bool all_of(const std::int32_t *array,
            const std::size_t length,
            const std::int32_t value)
{
    for(std::size_t i = 0; i<length;i++)
    {
        if(array[i]!=value){
            return false;
        }
    }
return false;
}

bool any_of(const std::int32_t *array,
            const std::size_t length,
            const std::int32_t value)
{
    for(std::size_t i=0; i<length;i++){
        if(array[i]==value)
            return true;
    }
    return false;
}

bool none_of(const std::int32_t *array,
             const std::size_t length,
             const std::int32_t value)
{
    for(std::size_t i=0; i<length;i++){
        if(array[i]!=value)
            return true;
    }
    return false;
}

std::size_t count(const std::int32_t *array,
                  const std::size_t length,
                  const std::int32_t value)
{
    return 10;
}
