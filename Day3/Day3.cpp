// basic program

#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    // constructor & destructor

    Point(){
        cout << "Constructor called" << endl;
        x = 0;
        y = 0;
    }

    //Overloaded constructor
    Point(int x, int y)
    {
        cout << "Constructor called" << endl;
        this->x = x;
        this->y = y;
    }

    Point(int x) : Point(){
        cout << "Debug" << endl;
        this->x = x;
    }

    // destructor automatically called when the object is deleted
    ~Point()
    {
        cout << "Destructor called" << endl;
    }

    // setter & getter
    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
    // Method 

    void toString()
    {
        cout << "x: " << x << " y: " << y << endl;
    }

    //function to update the point by passing the object - no recommended
    // void update(Point p){
    //     this->x = p.x;
    //     this->y = p.y;
    // }

    //function to update the point by passing the reference of the object - recommended
    void update(Point &p){
        this->x = p.x;
        this->y = p.y;
    }

    //function to update the point by passing the pointer of the object - recommended
    void update(Point * p)
    {
        this->x = p->x;
        this->y = p->y;
    }
};

int main()
{
    Point p1(10);
    p1.toString();
    return 0;
}
