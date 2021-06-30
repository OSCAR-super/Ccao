#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Person{
    protected:
        string name;
        int age;
        string sex;
    public :
        void showPerson(){
            cout<<"name:"<<name<<"age:"<<age<<"sex:"<<sex<<endl;
        }
        Person(string a,int b,string c){
            name=std::move(a);
            age = b;
            sex=std::move(c);
        }
};

void showPerson(Person &person){
    person.showPerson();
}

class Teacher :public Person{
    private:
        string position;
    public:
        void showTeacher(){
            cout<<"name:"<<name<<"age:"<<age<<"sex:"<<sex<<"position:"<<position<<endl;
        }
        Teacher(string a,int b,string c,string d) :Person(std::move(a),b,std::move(c)){
            position=std::move(d);
        }
};

class Student :public Person{
    private:
        int studentNo;
        int classNo;
    public:
        void showStudent(){
            cout<<"name:"<<name<<"age:"<<age<<"sex:"<<sex<<"studentNo:"<<studentNo<<"classNo:"<<classNo<<endl;
        }
        Student(string a,int b,string c,int d,int e) :Person(std::move(a),b,std::move(c)){
           studentNo=d;
           classNo=e;
        }
};
int main(){
    Teacher teacher("a",32,"man","math");
    showPerson(teacher);
    vector<Student>stus;
    Student student("ab",12,"man",1,1);
    stus.reserve(10);
    for (int i = 0; i < 10; ++i) {
        stus.push_back(student);
    }
    for (auto & it : stus){
        it.showStudent();
    }
    return 0;
}

