specific type of virtual function called pure virtual function.

pure virtual function is same as an abstract method or interface in other languages such as java or c#

pure virtual functions allow us to define a virtual function in base class
that does not have an implementation and force subclasses to actually implement that function.

use case ?:


suppose the base class is called weapon and there is a virtual function called 
method of attack.
sub classes are gun and knife. it make sense to implment method of attack function in knife class ( knife attack by stabbing) and in gun funtion (gun attack by shooting). But in the weapon class, it does not make sense to implment the method function but it make sure that, all the classees which inherits from the weapon class should have a method called method of attack.


A class containing (or inheriting without overridding) a pure virtual function is an abstract base class. An abstract base class defines an interface for subsequent classes to override. We cannot (directly) create objects of a type that is an abstract base class.
