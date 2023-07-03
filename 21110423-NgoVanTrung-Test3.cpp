#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Person
{
private:
    string _id;
    string _name;
    int _date;

public:
    Person(string id, string name, int date) : _id(id), _name(name), _date(date) {}
    string getID() { return _id; }
    string getName() { return _name; }
    int getDate() { return _date; }
};

class Vaccine
{
private:
    string _id;
    int _date;

public:
    Vaccine(string id, int date) : _id(id), _date(date) {}
    string getID() { return _id; }
    int getDate() { return _date; }
    virtual string getName() = 0;
};

class Pfizer : public Vaccine
{
private:
    string _name;

public:
    Pfizer(string id, int date) : Vaccine(id, date)
    {
        _name = "Pfizer";
    }
    string getName() { return _name; }
};

class Moderna : public Vaccine
{
private:
    string _name;

public:
    Moderna(string id, int date) : Vaccine(id, date)
    {
        _name = "Moderna";
    }
    string getName() { return _name; }
};

class Immunization
{
private:
    int _dose;
    int _date;
    Vaccine *_vaccine;

public:
    Immunization(int dose, int date, Vaccine *vaccine) : _dose(dose), _date(date), _vaccine(vaccine) {}
    int getDose() { return _dose; }
    int getDate() { return _date; }
    Vaccine *getVaccine() { return _vaccine; }
};

class Certificate
{
private:
    Person *_person;
    vector<Immunization *> _immunizations;

public:
    Certificate(Person *person) : _person(person) {}
    void addImmunization(Immunization *immunization)
    {
        _immunizations.push_back(immunization);
    }
    void print()
    {
        cout << "--------------------------------" << endl;
        cout << "Certificate of Immunization" << endl;
        cout << "Name: " << _person->getName() << endl;
        cout << "ID: " << _person->getID() << endl;
        cout << "Date of Birth: " << _person->getDate() << endl;
        cout << "Immunizations:" << endl;
        for (int i = 0; i < _immunizations.size(); i++)
        {
            Immunization *immunization = _immunizations[i];
            time_t t = immunization->getDate(); // convert time_t to struct tm
            tm *tm = localtime(&t);             // convert time_t to struct tm
            cout << "Dose " << immunization->getDose() << ": "
                 << immunization->getVaccine()->getName() << " ("
                 << put_time(tm, "%d/%m/%Y") << ")" << endl;
        }
        cout << "--------------------------------" << endl;
    }
};

int main()
{
    // Create two persons with ID, name and date of birth.
    Person *person1 = new Person("111111111", "Ngo Van Trung", 2003);
    Person *person2 = new Person("222222222", "Bui Thi Thanh Ngan", 2003);

    // Create two vaccines with ID and date of creation.
    Pfizer *pfizer1 = new Pfizer("PFIZER1", 2020);
    Moderna *moderna1 = new Moderna("MODERNA1", 2021);

    // Create two immunizations with dose, date and vaccine.
    Certificate *certificate1 = new Certificate(person1);      // Create a certificate for person1.
    Immunization *i1a = new Immunization(1, time(0), pfizer1); // use time(0) returns the current time.
    certificate1->addImmunization(i1a);
    Immunization *i1b = new Immunization(2, time(0), pfizer1);
    certificate1->addImmunization(i1b);

    Certificate *certificate2 = new Certificate(person2);       // Create a certificate for person2.
    Immunization *i2a = new Immunization(1, time(0), moderna1); // use time(0) returns the current time.
    certificate2->addImmunization(i2a);
    Immunization *i2b = new Immunization(2, time(0), pfizer1);
    certificate2->addImmunization(i2b);

    // Print the certificates.
    certificate1->print();
    certificate2->print();

    // Delete all objects.
    delete person1;
    delete person2;
    delete pfizer1;
    delete moderna1;
    delete i1a;
    delete i1b;
    delete certificate1;
    delete i2a;
    delete i2b;
    delete certificate2;
    return 0;
}
