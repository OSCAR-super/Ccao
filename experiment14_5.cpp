#include <iostream>

using namespace std;

class Animal{
    private:
        string name;
        double weight;
    public:
        Animal(string,double);
        void who();
};
Animal::Animal(string n,double w){
    name=n;
    weight=w;
}
void Animal::who(){
    cout<<"The name of the animal is "<<name<<endl;
    cout<<"The wight of the animal is "<<weight<<" points."<<endl;
}
class Lion:public Animal{
    public:
        Lion(string n,double w):Animal(n,w){}
};
class Aardvark:public Animal{
    public:
        Aardvark(string n,double w):Animal(n,w){}
};
int main(){
    Lion l("Leo", 400);
    Aardvark a("Algernon", 50);
    l.who();
    a.who();
    return 0;
}
