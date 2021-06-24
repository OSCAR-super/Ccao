#include <iostream>
#include <cmath>

using namespace std;

const double PI = 2.0 * asin(1.0);

class circle{
    protected:
        double radius;
    public:
        explicit circle(double=1.0);
        double Area() const;
        double Volume() const;
};
circle::circle(double r){
    radius = r;
}
double circle::Area() const{
    return(PI * radius * radius);
}
double circle::Volume() const{
    return(PI * radius * radius);
}
class cylinder:public circle
{
    protected:
        double length; // add one data member and
    public: // two member functions
       explicit cylinder(double r = 1.0, double l = 1.0) : circle(r), length(l) {}
       virtual double Area();
       virtual double Volume();
};
double cylinder::Volume(){
    return (length * circle::Volume());
}
double cylinder::Area(){
    return (2*PI * radius * radius+2*PI * radius *length);
}
class cone:public circle
{
    protected:
        double length; 
    public: 
        explicit cone(double r = 1.0, double l = 1.0) : circle(r), length(l) {}
        virtual double Area();
        virtual double Volume();
};
double cone::Volume(){
    return (length * circle::Volume()/3);
}
double cone::Area(){
    return (PI*radius*sqrt(radius*radius+length*length)+PI*radius*radius);
}
class sphere:public circle
{
    public: // two member functions
        explicit sphere(double r = 1.0) : circle(r){}
        virtual double Area();
        virtual double Volume();
};
double sphere::Volume(){
    return (4*PI*radius*radius*radius/3);
}
double sphere::Area(){
    return (4*circle::Area());
}
int main(){
    circle ci(3);
    cylinder cy(3,3);
    cone co(3,3);
    sphere s(3);
    cout << "The area of circle is :" <<ci.Area() << endl;
    cout << "The area of cylinder is :" <<cy.Area() << endl;
    cout << "The volume of cylinder is :" <<cy.Volume() << endl;
    cout << "The area of cone is :" <<co.Area() << endl;
    cout << "The volume of cone is :" <<co.Volume() << endl;
    cout << "The area of sphere is :" <<s.Area() << endl;
    cout << "The volume of sphere is :" <<s.Volume() << endl;
    return 0;
}
