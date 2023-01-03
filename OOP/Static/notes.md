# What static means in C++

has 2 meaning depending on context

1. static outside the class : linkage of the symbol that you defined as static is only available in the compilation unit. can be a function or variable. 
2. static inside the class / struct : that variable will share memory with all instances of that class. of all instances that you create from this class, there will be only one instance of that static variable. similar applied to the static method of the class



when do you use static method?

when the function deals with only static variables and independent of instance variables
