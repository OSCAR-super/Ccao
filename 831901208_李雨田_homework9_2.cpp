#include <iostream>

using namespace std;

class Elevator{
    private:
        int elNum;
        int currentFloor;
        int highestFloor;
    public:
        Elevator(int e, int c, int h);
        void request(int);
};
Elevator::Elevator(int e,int c,int h){
    elNum=e;
    currentFloor=c;
    highestFloor=h;
}
void Elevator::request(int n){
    if(n>highestFloor);
    else{
        if((n>currentFloor)){
            while(n>currentFloor&&currentFloor<highestFloor){
                cout<<"The current floor number is :"<<currentFloor<<endl;
                currentFloor++;
            }
            cout<<"The ending floor number is :"<<currentFloor<<endl;
        }
        else if(n<currentFloor&&currentFloor>1){
            while(n<currentFloor&&currentFloor>1){
                cout<<"The current floor number is :"<<currentFloor<<endl;
                currentFloor--;
            }
            cout<<"The ending floor number is :"<<currentFloor<<endl;
        }

    }
}
int main(){
    Elevator e(1,2,3);
    int f;
    cout<<"Please enter a floor: ";
    cin>>f;
    e.request(f);
    return 0;
}
