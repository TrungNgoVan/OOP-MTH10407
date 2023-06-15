/*
 * @file Day_5.cpp
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-04-04
 *
 * @copyright Copyright (c) 2023
 *
 */

// inheritance

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string _name;
    int _age;

public:
    Person()
    {
        this->setName("Default name");
        this->setAge(0);
    }

    Person(string name, int age)
    {
        this->setName(name);
        this->setAge(age);
    }

    void setName(string name)
    {
        this->_name = name;
    }

    void setAge(int age)
    {
        this->_age = age;
    }

    void display(){
        cout << "Name: " << this->_name << endl;
        cout << "Age: " << this->_age << endl;
    };
};

// class Student extends class Person
class Student : public Person
{
private:
    string _studentID;

public:
    Student() : Person()
    {
        this->setStudentID("Default ID");
    }

    Student(string name, int age, string studentID) : Person(name, age)
    {
        this->setStudentID(studentID);
    }

    void setStudentID(string studentID)
    {
        this->_studentID = studentID;
    }

    void display()
    {
        Person::display();
        cout << "Student ID: " << this->_studentID << endl;
    }

};

int main()
{
    Student B("Trung", 20, "21110423");
    B.display();
    return 0;
}
