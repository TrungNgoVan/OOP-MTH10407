// // basic program

// #include <iostream>
// using namespace std;

// class Point
// {
// private:
//     int x;
//     int y;

// public:
//     // constructor & destructor

//     Point(){
//         cout << "Constructor called" << endl;
//         x = 0;
//         y = 0;
//     }

//     //Overloaded constructor
//     Point(int x, int y)
//     {
//         cout << "Constructor called" << endl;
//         this->x = x;
//         this->y = y;
//     }

//     Point(int x) : Point(){
//         cout << "Debug" << endl;
//         this->x = x;
//     }

//     // destructor automatically called when the object is deleted
//     ~Point()
//     {
//         cout << "Destructor called" << endl;
//     }

//     // setter & getter
//     void setX(int x)
//     {
//         this->x = x;
//     }
//     int getX()
//     {
//         return x;
//     }

//     void setY(int y)
//     {
//         this->y = y;
//     }
//     int getY()
//     {
//         return y;
//     }
//     // Method 

//     void toString()
//     {
//         cout << "x: " << x << " y: " << y << endl;
//     }

//     //function to update the point by passing the object - no recommended
//     // void update(Point p){
//     //     this->x = p.x;
//     //     this->y = p.y;
//     // }
//     // update(p1)

//     //function to update the point by passing the reference of the object - recommended
//     void update(Point &p){
//         this->x = p.x;
//         this->y = p.y;
//     }
//     // update(p1)

//     //function to update the point by passing the pointer of the object - recommended
//     void update(Point * p)
//     {
//         this->x = p->x;
//         this->y = p->y;
//     }
//     // update(&p1)
// };

// int main()
// {
//     Point p1(10);
    
//     Point p2(20, 30);

//     // test encapsulation

//     p1.toString();  // call method toString() by using object

//     Point* p3 = new Point(40, 50);

//     p3->toString(); // call method toString() by using pointer

//     // dấu . được gọi là operator 

//     return 0;
// }


// /**
//  * @brief Private & Public
//  * 
//  */


#include <iostream>

using namespace std;

// car example OOP

class Car
{
private:
    int speed;
    int gear;

public:
    Car()
    {
        speed = 0;
        gear = 1;
    }

    void startEngine()
    {
        cout << "Engine started" << endl;
    }

    void pipeSound()
    {
        cout << "Pip pip pip" << endl;
    }
};

int main(){

    Car carBlue; // Object not is Pointer

    carBlue.startEngine(); // call method by using object .

    Car* carRed = new Car(); // Object is Pointer

    carRed->pipeSound(); // call method by using pointer ->

    return 0;
}
