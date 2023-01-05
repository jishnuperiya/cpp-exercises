special methods in class

Till now a constructor can have a constrcutor with empty parameter list and and with a parameter list.

also we can give another object to initialize an object.

eg:

in the string class


    std::string name = "Jishnu";

    std::string name2 = name;

    std::string name3(name);

## Rule of 5

1. Destructor
2. Copy constructuor
3. copy assignment operator
4. move constructor
5. move assignment operator

3 and 5 are operators and 2 and 4 are special constructors.

## Important

the methods in the rule of 5 should be implemented ONLY WHEN we have our own memory management in the heap. means when have new and delete keywords in our class. 

When we have no new and delete (our own memory in heap), we dont have to implement these, it will be an overhead for the compiler and compiler can itself manage these things.


### Destructor:
When we have member variables that lies in the stack, that case you dont need to write a destructor.

### Copy:
copy constructor: data from another instance take and copy to another instance.

## copy assignment operator: 


DynamicArray<int> a1 {1, 2};
DynamicArray<int> a2 {1, 2};

DynamicArray<int> a3 = a2; // copy constructor
// best way to do :
DynamicArray<int> a3{a2}; // copy constructor

//copy constructor when lhs has new instance 

a1 = a2; // copy assignment operator
// copy assignment when in lhs is an already existing instance

 
## move

when we deal with move, we always deal with r value

recap: lvalue - have a memory adrress

rvalue : temperoray object
