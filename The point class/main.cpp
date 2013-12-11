#include <cstdlib>
#include <iostream>

using namespace std;

class Point {
private:
        int x, y; //Data members (PRIVATE)
public:
//Constructors:
Point() {x = 0; y = 0;}
Point(int new_x, int new_y) {set(new_x, new_y);}

Point(const Point &src){set(src.x, src.y);}

// Operations:
Point add(const Point &pt);
Point sub(const Point &pt);
Point mult(const Point &pt);
Point div(const Point &pt);

Point operator+(const Point &pt) {return add(pt);}
Point operator-(const Point &pt) {return sub(pt);}
Point operator*(const Point &pt) {return mult(pt);}
Point operator/(const Point &pt) {return div(pt);}

friend ostream &operator<<(ostream &os, Point &pt);

//Other member functions:
        
void set(int new_x, int new_y);
void set_x(int new_x);
void set_y(int new_y);
int get_x() const {return x;}
int get_y() const {return y;}

};

int main(int argc, char *argv[])
{
    
   Point point1(20, 20);
   Point point2(1, 5);
   Point point3(-10, 25);
   Point point4 = point1 / point2 / point3;
   
   cout << point4 << "." << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void Point::set(int new_x, int new_y) {
     if (new_x < 0)
        new_x *= -1;
     if (new_x > 100)
        new_x = 100;
     if (new_y < 0)
        new_y *= -1;
     if (new_y > 100)
        new_y = 100;
     x = new_x;
     y = new_y;
     }

void Point::set_x(int new_x){
     if (new_x < 0)
        new_x *= -1;
     if (new_x > 100)
        new_x = 100;
     
     x = new_x;
}

void Point::set_y(int new_y){
     if (new_y < 0)
        new_y *= -1;
     if (new_y > 100)
        new_y = 100;
        
        y = new_y;
}

Point Point::add(const Point &pt) {
      Point new_pt;
      new_pt.x = x + pt.x;
      new_pt.y = y + pt.y;
      return new_pt;
}

Point Point::sub(const Point &pt) {
      Point new_pt;
      new_pt.x = x - pt.x;
      new_pt.y = y + pt.y;
      return new_pt;
}

Point Point::mult(const Point &pt) {
      Point new_pt;
      new_pt.x = x * pt.x;
      new_pt.y = y * pt.y;
      return new_pt;
}

Point Point::div(const Point &pt) {
      Point new_pt;
      new_pt.x = x / pt.x;
      new_pt.y = y / pt.y;
      return new_pt;
}

ostream &operator<<(ostream &os, Point &pt) {
        os << "(" << pt.get_x() << ", " << pt.get_y() << ")" ;
        return os;
}
