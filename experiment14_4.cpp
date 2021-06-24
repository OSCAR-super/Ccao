#include <iostream>

using namespace std;

class Person{
    protected:
        string name;
        int age;
        string gender;
    public:
        Person(string,int ,string);
        ~Person();

    virtual void display();

};
Person::Person(string n,int a,string g){
    name=n;
    age=a;
    gender=g;
}
Person::~Person(){
    cout<<"Destructor called."<<endl;
}
void Person::display(){
    cout<<"The name is :"<<name<<endl;
    cout<<"The age of the person is :"<<age<<endl;
    cout<<"The gender of the person is :"<<gender<<endl;
}
class Teacher:public Person
{
    protected:
        string position;
    public:
        Teacher(string n,int a,string g,string p) : Person(n,a,g), position(p) {}
        void display() override;
        ~Teacher();
};
void Teacher::display(){
    Person::display();
    cout<<"The position of the person is "<<position<<endl;
}
Teacher::~Teacher(){
    cout<<"Destructor called."<<endl;
}
class Cadre:public Person{
    protected:
        string work;
        double salary;
    public:
        Cadre(string n,int a,string g,string w,double s) : Person(n,a,g), work(w),salary(s) {}
        void display() override;
        ~Cadre();
};
void Cadre::display(){
    Person::display();
    cout<<"The work of the person is "<<work<<endl;
    cout<<"The salary of the person is "<<salary<<endl;
}
Cadre::~Cadre(){
    cout<<"Destructor called."<<endl;
}
int main(){
    Person p("David",25,"Man");
    Teacher t("Tom",30,"Man","Maths");
    Cadre c("Linda",23,"Woman","worker",5000);
    p.display();
    t.display();
    c.display();
    return 0;
}
