#include <iostream>
#include <map>
#include <string>

using namespace std;

class Book{
private:
    string _title;
    string _author;
    int _numberID;
    Borrower _theBorrower;
public:
    // Constructor & Destructor
    Book(){
        cout << "Book is created" << endl;
        _title = "Default title";
        _author = "Default author";
        _numberID = 0;
        _theBorrower = Borrower();
    }

    Book(string title, string author, int numberID, Borrower theBorrower){
        this->_title = title;
        this->_author = author;
        this->_numberID = numberID;
        this->_theBorrower = theBorrower;
    }

    ~Book(){
        cout << "Book is destroyed" << endl;
    }

    // Getters & Setters
    string getTitle(){
        return _title;
    }
    void setTitle(string title){
        this->_title = title;
    }

    string getAuthor(){
        return _author;
    }
    void setAuthor(string author){
        this->_author = author;
    }

    int getNumberID(){
        return _numberID;
    }
    void setNumberID(int numberID){
        this->_numberID = numberID;
    }

    Borrower getTheBorrower(){
        return _theBorrower;
    }
    void setTheBorrower(Borrower theBorrower){
        this->_theBorrower = theBorrower;
    }

    // Other methods

};

class Borrower{
private:
    string _name;
    map<string, Book*> _theBorrowedBooks;
public:
    // Constructor & Destructor
    Borrower(){
        cout << "Borrower is created" << endl;
        _name = "Default name";
        _theBorrowedBooks = map<string, Book*>();
    }

    Borrower(string name, map<string, Book*> theBorrowedBooks){
        this->_name = name;
        this->_theBorrowedBooks = theBorrowedBooks;
    }

    ~Borrower(){
        cout << "Borrower is destroyed" << endl;
    }

    // Getters & Setters
    string getName(){
        return _name;
    }
    void setName(string name){
        this->_name = name;
    }

    map<string, Book*> getTheBorrowedBooks(){
        return _theBorrowedBooks;
    }
    void setTheBorrowedBooks(map<string, Book*> theBorrowedBooks){
        this->_theBorrowedBooks = theBorrowedBooks;
    }

    // Other methods

};

class Library{
private:
    map<string, Book*> _theLoanStock;
    map<string, Borrower*> _theBorrowers;
public:
    //Constructor & Destructor
    Library(){
        cout << "Library is created" << endl;
        _theLoanStock = map<string, Book*>();
        _theBorrowers = map<string, Borrower*>();
    }
    Library(map<string, Book*> theLoanStock, map<string, Borrower*> theBorrowers){
        this->_theLoanStock = theLoanStock;
        this->_theBorrowers = theBorrowers;
    }
    ~Library(){
        cout << "Library is destroyed" << endl;
        _theLoanStock.clear();
        _theBorrowers.clear();
    }

    //Getters & Setters
    map<string, Book*> getTheLoanStock(){
        return _theLoanStock;
    }
    void setTheLoanStock(map<string, Book*> theLoanStock){
        this->_theLoanStock = theLoanStock;
    }

    map<string, Borrower*> getTheBorrowers(){
        return _theBorrowers;
    }
    void setTheBorrowers(map<string, Borrower*> theBorrowers){
        this->_theBorrowers = theBorrowers;
    }

    // Other methods


};




