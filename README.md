# Homework 5

## Instructions
In a previous lecture, I created a generic single linked list class. For this assignment, you will convert my linked list class into a generic doubly linked list class. Fortunately, I've done about 1/3 of the work for you. I updated some the single linked list to become a doubly linked list. I updated the private data as well as these methods:

    Constructors
    Destructors
    Getters
    
Your job now is to update the following methods:

    add_front
    add_back
    rm_front
    rm_back
    empty
    print

Right now the methods above work for a single linked list, you must convert it to work with a doubly linked list. Take into account the `_front` and `_back` members of the doubly linked list structure.

You are also going to overload the `=` operator to copy one generic list to another generic list.

    List &operator=(const List &x)
    
Using `x` as the input variable, you must create a loop that iterates from `x._front` until the `nullptr`, calling `push_back` in the body of you code. Remember, `x._front` is a doubly linked list that should be moving forward, keep that in mind as you step through the loop. Also, I recommend using `auto` as the datatype for your iterator.

You'll be provided with a file `main.cpp` that will test your class, as well as `GeneralList.hpp`. You will need to finishing implementing the `List` class in `GeneralList.hpp`. You **will not have to create a new cpp file**, in fact, **you are discouraged to create a new cpp file**. This is because for templates, everything must be writing in a header file (this should make creating a makefile much easier \*hint\*\*hint\*).

## Extra credit
Extra credit will be provided if you are able to overload the == and != operators. For this, you must compare the data for `List` with another. For example, if `a` and `b` are List variables and I compare them with either the == opreator or != operator I must compare from `_front` to `_back` of both `a` and `b`. A hint is that if two Lists are not the same size, they are not equal.

## Rubric

| Requirement                                  | Score |
| :---:                                        | :---: |
|----------------------------------------------|-------|
| Executable runs with no errors               | 20%   |
| Implementation of methods in GeneralList.hpp | 30%   |
| Operator overload                            | 10%   |
| Creation of Makefile                         | 20%   |
| Clean code                                   | 20%   |
| Extra credit                                 | 20%   |
|----------------------------------------------|-------|
| Total:                                       | 120%  |