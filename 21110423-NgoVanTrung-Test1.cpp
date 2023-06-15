// 21110423
// Ngo Van Trung
// 21TTH2

#include <iostream>
#include <vector>

using namespace std;

class Student;
class Course;

class Student
{
private:
    string name;
    string major;
    vector<Course *> courses;

public:
    // Constructor
    Student(string name, string major);

    // Getter and Setter
    string getName();
    void setName(string name);
    string getMajor();
    void setMajor(string major);
    vector<Course *> getCourses();

    // Method

    void display();
    void enroll(Course *course);
    void displayCourses();
};

class Course
{
private:
    string name;
    vector<Student *> students;

public:
    // Constructor
    Course(string name);

    // Getter and Setter
    string getName();
    void setName(string name);
    vector<Student *> getStudents();

    // Method
    void display();
    void enroll(Student *student);
    void displayStudents();
};

Student::Student(string name, string major)
{
    this->name = name;
    this->major = major;
}

// Getter and Setter
string Student::getName()
{
    return name;
}

void Student::setName(string name)
{
    this->name = name;
}

string Student::getMajor()
{
    return major;
}

void Student::setMajor(string major)
{
    this->major = major;
}

vector<Course *> Student::getCourses()
{
    return courses;
}

// Method

void Student::display()
{
    cout << "Name: " << name << endl;
    cout << "Major: " << major << endl;
}

void Student::enroll(Course *course)
{
    courses.push_back(course);
    course->enroll(this);
}

void Student::displayCourses()
{
    cout << "Courses enrolled by " << name << ":" << endl;
    for (int i = 0; i < courses.size(); i++)
    {
        cout << courses[i]->getName() << endl;
    }
}

// Constructor
Course::Course(string name)
{
    this->name = name;
}

// Getter and Setter
string Course::getName()
{
    return name;
}

void Course::setName(string name)
{
    this->name = name;
}

vector<Student *> Course::getStudents()
{
    return students;
}

// Method
void Course::display()
{
    cout << "Name: " << name << endl;
}

void Course::enroll(Student *student)
{
    students.push_back(student);
}

void Course::displayStudents()
{
    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i]->getName() << endl;
    }
}

int main()
{
    Student *student1 = new Student("Ngo Van Trung", "Toan Tin");
    Course *course1 = new Course("Object Oriented Programming");
    Course *course2 = new Course("Data Structures and Algorithms");
    student1->display();
    course1->display();

    student1->enroll(course1);
    student1->enroll(course2);
    student1->displayCourses();
    course1->displayStudents();

    return 0;
}
