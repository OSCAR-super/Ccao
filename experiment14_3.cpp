#include <iostream>
#include <cmath>

using namespace std;

const double PI = 2.0 * asin(1.0);

class Shape{
    protected:
        double length;
    public:
        explicit Shape(double l=1.0);
        double perimeter() const;
};
Shape::Shape(double l){
    length=l;
}
double Shape::perimeter() const{
    return length;
}
class Triangle:public Shape
{
    protected:
        double length2;
        double length3;
    public:
        explicit Triangle(double l= 1.0, double l2= 1.0,double l3=1.0) : Shape(l), length2(l2),length3(l3) {}
        virtual double perimeter();
};
double Triangle::perimeter(){
    return (length+length2+length3);
}
class Rectangle:public Shape
{
    protected:
        double width;
    public:
        explicit Rectangle(double l = 1.0, double w = 1.0) : Shape(l), width(w) {}
        virtual double perimeter();
};
double Rectangle::perimeter(){
    return ((length+width)*2);
}
class Circle:public Shape
{
    public:
        explicit Circle(double l = 1.0) : Shape(l){}
        virtual double perimeter();
};
double Circle::perimeter(){
    return (PI*length*2);
}
int main(){
    Triangle t(1.0,1.0,1.0);
    Rectangle r(1.0,1.0);
    Circle c(1.0);
    cout<<"The perimeter of the triangle is "<<t.perimeter()<<endl;
    cout<<"The perimeter of the rectangle is "<<r.perimeter()<<endl;
    cout<<"The perimeter of the circle is "<<c.perimeter()<<endl;
    return 0;
}
