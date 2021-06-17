#include <iostream>

using namespace std;

double pi=3.14;

class circle{
private:
    double radius;
    double c_Perimeter{};
    double c_area{};
public:
    explicit circle (double a){
        radius = a;
    }
    void setDate(double a){
        radius = a;
    }
    void Perimeter(){
        c_Perimeter=2*pi*radius;
    }
    void area(){
        c_area=pi*radius*radius;
    }
    void showDate() const{
        cout<<"The radius is :"<<radius<<endl;
        cout<<"The perimeter is :"<<c_Perimeter<<endl;
        cout<<"The area is :"<<c_area<<endl;
    }
};

int main(){
    double a;
    cout<<"Please input the radius :"<<endl;
    cin>>a;
    circle e(a);
    e.Perimeter();
    e.area();
    e.showDate();
    return 0;
}
