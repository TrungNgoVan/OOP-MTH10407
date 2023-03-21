// basic program 

import java.util.Scanner;

// Class Point
class Point {
    private int x;
    private int y;

    // Constructor
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Getters
    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    // Setters
    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    // toString
    public String toString() {
        return "(" + x + ", " + y + ")";
    }

    //function pass by reference
    public void update(Point p) {
        p.setX(100);
        p.setY(200);
    }

    // int is primitive type
    int[] arr = new int[1];
    arr[0] = x;
    
    public void plug(int[] arr) {
        arr[0]++;
    }

}
