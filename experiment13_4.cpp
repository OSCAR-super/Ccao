#include <iostream>

using namespace std;

class student{
private:
    double ID;
    double grade_point;
public:
    explicit student (double a,double b)
    {
        ID=a;
        grade_point=b;
        cout<<"The student ID is :"<<ID<<"，grade point average is :"<<grade_point<<endl;
    }
    void SetDate(double a,double b){
        ID=a;
        grade_point=b;
    }
};

int main(){
    double a,b,c,d;
    cout<<"Please enter the first student's ID and grade point average :"<<endl;
    cin>>a>>b;
    cout<<"Please enter the second student's ID and grade point average :"<<endl;
    cin>>c>>d;
    student e(a,b);
    student f(c,d);
    return 0;
}

