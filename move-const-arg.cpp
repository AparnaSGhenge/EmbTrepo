#include<iostream>
using namespace std;

class X{
    /* custom copy and move constructors defined */
};
void foo(){
    const X bar;
    X quux = std::move(bar); //copy constructor is silently called here instead of expected move constructor
}

