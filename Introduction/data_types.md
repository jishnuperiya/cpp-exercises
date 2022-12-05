# Fundamental types

https://en.cppreference.com/w/cpp/language/types

### why there are many types of integers data types?

c++ is for performance.
suppose there is a variable age, which takes age of humans.
max_limit = 200
how much bit we need = 8 bit or 4 byte.
if i use int, my 3 bytes is wasted. 
Therefore we can use a char. it is 1 byte. save the rest 3 bytes.
but remember to take unsigned char (normal char doesnt go more than 200 - go till 128)
unsigned char = [0 256] - best for age
1-1 million? - take int
int - 4 bytes
short int - 2 bytes
char - 1 byte.

unsiged doesnt change the size but regualted the numbers that get filled in this size.

## Predefined Int types

https://en.cppreference.com/w/cpp/types/integer

Defined in header **cstdint**

most important are:

* int8_t
* int16_t
* int32_t
* int64_t

signed integer type with width of exactly 8, 16, 32 and 64 bits respectively
with no padding bits.

Also the unsigned version of above mentioned.

## char

ascii table
utf-8 table - new and better (have umlauts for example)