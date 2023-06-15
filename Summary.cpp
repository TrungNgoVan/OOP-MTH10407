#include <iostream>

using namespace std;

class A{
public:
    A(){
        cout << "A" << endl;
    }

    void doSomething(){
        cout << "A::doSomething" << endl;
    }
};

class B: public A{
public:
    void doSomething(){
        cout << "B::doSomething" << endl;
    }

    void test(){
        cout << "B::test" << endl;
    }
};

int main(){
    A* a = new B();
    B* b = new B();

    a->doSomething();
    b->doSomething();
}

