#include <iostream>

using namespace std;

class Rectangle{ 
private:
    double m_length;
    double m_width;
public:
    explicit Rectangle (double a=1.0,double b=1.0){
        m_length = a;
        m_width =b;
    }
    void SetWidth(){
        cout<<"Please input the width,The default is 1"<<endl;
        cin>>m_width ;

    }
    void GetWidth(){
        if((m_width>20.0)||(m_width<1.0)){
            cout<<"The input value is out of range,The default is 1"<<endl;
            m_width=1.0;
        }
    }
    void SetLength(){
        cout<<"Please input the length"<<endl;
        cin>>m_length ;
    }
    void GetLength(){
        if((m_length>20.0)||(m_length<1.0)){
            cout<<"The input value is out of range"<<endl;
            m_length=1.0;
        }
    }
    void Perimeter() const
    {
        cout<<"The Perimeter is "<<2*m_length+2*m_width<<endl;
    }
    void area() const
    {
        cout<<"The area is "<<m_length*m_width;
    }
};

int main(){
    int a = 0, b = 0;
    Rectangle e(a,b);
    e.SetWidth();
    e.GetWidth();
    e.SetLength();
    e.GetLength();
    e.Perimeter();
    e.area();
    return 0;
}
