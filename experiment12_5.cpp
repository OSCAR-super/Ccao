#include <iostream>

using namespace std;

class Stud{
private:
    double total_score{};
    double ave_score{};
    int sum_people;
    string name[1000];
    int ID[1000]{};
    double score[1000]{};
public:
    explicit Stud(int SP);
    void SetData();
    void Disp();
    void Avg();
};
Stud::Stud(int SP){
    sum_people=SP;
}

void Stud::SetData(){
    for(int i=0;i<sum_people;i++){
        cout<<"Please enter the name of student"<<i+1<<":";
        cin>>name[i];
        cout<<"Please enter the student ID of student"<<i+1<<":";
        cin>>ID[i];
        cout<<"Please enter the score of student"<<i+1<<":";
        cin>>score[i];
    }
}
void Stud::Disp(){
    for(int i=0;i<sum_people;i++){
        cout<<"The number of student"<<i+1<<" is :"<<name[i]<<endl;
        cout<<"His student ID is "<<ID[i]<<endl;
        cout<<"His score is "<<score[i]<<endl;
    }
}
void Stud::Avg(){
    for(int i=0;i<sum_people;i++){
        total_score=total_score+score[i];
    }
    ave_score=total_score/sum_people;
    cout<<"The average score is "<<ave_score<<endl;
}
int main(){
    int n;
    cout<<"Please enter the number of students: "<<endl;
    cin>>n;
    Stud num(n);
    num.SetData();
    num.Disp();
    num.Avg();
    return 0;
}
