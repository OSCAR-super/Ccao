#include <iostream>

using namespace std;

class student{
    friend double compare(const student&,const student&);
    private:
        string name;
        double grade;
    public:
        student(string n,double g){
            name=n;
            grade=g;
        }
};
double compare(const student& a,const student& b){
    if(a.grade>b.grade||a.grade==b.grade){
        return a.grade;
    }else{
        return b.grade;
    }
}
int main(){
    string names[2];
    double grades[2];
    double max;
    for(int i=0;i<2;i++){
        cout<<"Please enter the name of student: ";
        cin>>names[i];
        cout<<"Please enter the grade of student: ";
        cin>>grades[i];
    }
    student stu1(names[0],grades[0]);
    student stu2(names[1],grades[1]);
    max=compare(stu1,stu2);
    for(int i=0;i<2;i++){
        if(max==grades[i]){
            cout<<"The student with the highest score is "<<names[i]<<endl;
            cout<<"The student with the lowest score is "<<names[1-i]<<endl;
        }
    }



    return 0;
}
