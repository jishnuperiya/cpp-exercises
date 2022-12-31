/*

suppose intially 10 blocks of memory is allocated for the vector.
and we use 5 of them.
now vector_size =5 and vector_capacity=10

if you fill the capacity and try to add one more element, vector capacity will not become
11, it will become for eg 15 or 20. becuase, if the vector expands every time, the memory
needs to be allocated every time (new command) which cost computaion.

by instantly changing the capacity from 10 to 20, it saves the time for 9 extra memory
allocation sacrificing the size which may not be used.

*/
