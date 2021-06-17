#include <iostream>

using namespace std;

double pi=3.14;

class sphere{
private:
    double radius;
    double s_surfacearea{};
    double s_volume{};

public:
    explicit sphere (double a=1.0){
        radius = a;
    }
    void setDate(double a){
        radius = a;
    }
    void showDate() const{
        cout<<"The radius is :"<<radius<<endl;
    }
    void surfacearea(){
        s_surfacearea=4*pi*radius*radius;
        cout<<"The surfacearea is :"<<s_surfacearea<<endl;
    }
    void volume(){
        s_volume=4/3.0*pi*radius*radius*radius;
        cout<<"The volume is :"<<s_volume<<endl;
    }
};

int main(){
    double a;
    cout<<"Please input the radius :"<<endl;
    cin>>a;
    sphere e(a);
    e.showDate();
    e.surfacearea();
    e.volume();
    return 0;
}
