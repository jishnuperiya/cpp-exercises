# Default and delete

default and delete are applicable for special member functions- constructor, destructor and other special member fucntios which will be discussed in the coming chapters

the special syntax = delete ; is used, the function is defined as deleted.


Default constructor = A default constructor is a constructor which can be called with no arguments (either defined with an empty parameter list, or with default arguments provided for every parameter)



rule:

when the class variables have no memory management. that means
the class members are types of c++ standard library,
compiler can do all the required thing for the special member functions.
compiler can do all the job.

in that case, you dont necessarily need a destructor.
 
you can even delete the destructor. but it creates confusion for the code readers. because that create an open question- did the developer forgot to write the destructor or does he meant the compiler to generate the code for destructor? open quesitons are not good.

therefore better option is using the keyword default.

with the keyword default, we tell the compiler to generate the code for destructor itself, i dont have interest to write it.

this is helps the compiler to know that it should generte the code for destructor and also the code readers have a clear idea now.

delete = deleted function
so that the reader of the code understand that it is a deleted function

# Override and final

these both keywords are used in virtual fnctions and used derived classes.

the overrided method of derived class can be appended with either of these keywords

final - when you know this is going to be last derived class and this method is the last class

override - when you are unsure if this is the last class and it can be that further derived classes can be derived from the base class
