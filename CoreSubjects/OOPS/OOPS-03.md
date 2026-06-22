# Topic: Constructor

A constructor is a special member function that is automatically called when an object is created and is used to initialize objects.

1) Characteristics of Constructors
    ~ The name of the constructor is the same as its class name.
    ~ Constructors are mostly declared as public member of the class though they can be declared as private.
    ~ Constructors do not return values, hence they do not have a return type.
    ~ A constructor gets called automatically when we create the object of the class.
    ~ Multiple constructors can be declared in a single class (it is even recommended - Rule Of Three, The Rule of Five).
    ~ In case of multiple constructors, the one with matching function signature will be called.

There are 4 type of constructor in c++
    Default Constructor
    Parameterized Constructor
    Copy Constructor
    Move Constructor