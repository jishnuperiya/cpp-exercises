there are 3 different areas of memory

source: https://craftofcoding.wordpress.com/2015/12/07/memory-in-c-the-stack-the-heap-and-static/

1) static : global variable storage, permanent for the entire run of the program.
2) stack : local variable storage (automatic, continuous memory).
3) heap : dynamic storage (large pool of memory, not allocated in contiguous order).

static: A static variable is basically a global variable
.There is only one copy for the entire program. No matter how many times you go into a function call (or class) the variable is referring to the same memory location.

