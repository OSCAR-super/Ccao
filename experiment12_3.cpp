#include <iostream>

using namespace std;

class Toy{
private:
    double Ndiscount;
    double pri{};
    double newPrice{};
    string name;
    string address;
public:
    explicit Toy(double d);
    void get_name();
    void get_price();
    void get_address();
    void display();
};
Toy::Toy(double d){
    Ndiscount=d;
}
void Toy::get_name(){
    cout<<"Please enter the name of the toy: "<<endl;
    cin>>name;
}
void Toy::get_price(){
    cout<<"Please enter the price:"<<endl;
    cin>>pri;
    newPrice=pri*Ndiscount*0.1;
}
void Toy::get_address(){
    cout<<"Please enter the address: "<<endl;
    cin>>address;
}
void Toy::display(){
    cout<<"The name of the toy is: "<<name<<endl;
    cout<<"The price of the toy is "<<newPrice<<endl;
    cout<<"The address of the toy is "<<address<<endl;
}

int main(){
    double n;
    cout<<"Please enter the discount:"<<endl;
    cin>>n;
    Toy dis(n);
    dis.get_name();
    dis.get_price();
    dis.get_address();
    dis.display();
    return 0;
}
