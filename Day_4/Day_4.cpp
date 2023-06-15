#include <iostream>
#include <string>

using namespace std;

class Person{
private:
    string _name;
    int _age;
public:
    // Constructor 
    Person(){
        _name = "No Name";
        _age = 0;
    }

    // Constructor with parameters
    Person(string name, int age){
        _name = name;
        _age = age;
    }

    ~Person(){
        cout << "Destructor called" << endl;
        // Do something
    }

    // Access methods (getters and setters)
    string getName(){
        return _name;
    }
    void setName(string newName){
        _name = newName;
    }

    void eat(){
        cout << _name << " is eating" << endl;
    }

    void sleep(){
        cout << _name << " is sleeping" << endl;
    }

    void walk(){
        cout << _name << " is walking" << endl;
    }

    void talk(){
        cout << _name << " is talking" << endl;
    }

};

int main(){
    Person p1; // Object
    Person *p2 = new Person("John", 20); // Pointer

    p1.setName("Bob");

    p1.eat();

    p2->eat();

    return 0;
}