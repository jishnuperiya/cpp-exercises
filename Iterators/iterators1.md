# what is an iterator?

Iterators are a way of traversing a collection of objects. Typically, they allow you to access an STL (Standard Template Library) container sequentially in ways similar to accessing a classical C array with a pointer. To access an object through an iterator, you dereference it like a C pointer. To access the next object in a collection, you use the increment (++) operator. Some containers have multiple kinds of iterators that allow you to traverse the collection in different ways.


# there are different types of iterators

## forward iterator - start to end . not bakcwards

has only ++ operator not --

## bidirectional iterator - start to end and bakcwards

list has bidirectiónal iterator 

map - bidirectional

operations for bidiretional operators : ++ (go forward)  and -- (go back)

## random access iterator - in vector and array. 

have many operators

i+=n or i-=n : jump n memory locations back or forward (not just one memory)


## important

to know which iterator a datastructure has, go to cpp reference

eg search list
then in the page where features of list written, in the member types, look for iterators.
