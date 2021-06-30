#include <iostream>

using namespace std;

class Cube{
    protected:
        double side_length=10;
        static double total_area;
        static double total_volume;
    public :
        ~Cube();
        explicit Cube(double a){
            side_length=a;
        }
        void setSL(double a){
            side_length=a;
        }
        static void totalArea(){
            cout<<"totalArea:"<<&totalArea<<endl;
        }
        static void  totalVolume(){
            cout<<"totalVolume:"<<&totalVolume<<endl;
        }
};
double Cube::total_area =12;
double Cube::total_volume =12;
Cube::~Cube(){
    cout<<"side_length:"<<side_length<<endl;
}
int main(){
    Cube cube(12);
    cube.setSL(13);
    Cube::totalVolume();
    Cube::totalArea();
    return 0;
}

