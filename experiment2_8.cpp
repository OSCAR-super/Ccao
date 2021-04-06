#include <iostream>
#include <math.h>

using namespace std;

int getBit(int t)
{
    int i=0;
    while((t>>1)*2 == t) {
        t >>= 1;
        i++;
        if (t==0){
            break;
        }
    }
    return i;
}
bool isBit(int t){
    while((t>>1)*2 == t) {t >>= 1;
        if (t==0){
            break;
        }}
    return t != 1;

}
int main()
{
    int i=6;
    int bit=getBit(i);
    int distance=0;
    if (i!=0&&i!=1){
        while (bit!=1){
            int dis=bit-getBit(i-pow(2,bit));
            int a=0;
            int b;
            if (dis>distance){
                b=distance;
                distance=dis;
            }
            a=bit;
            bit=getBit(i-pow(2,bit));
            i-=pow(2,a);
            if (isBit(i)||i!=1){
                distance=b;
                if (distance==0){
                    distance=-1;
                }
                break;
            }
        }
        cout << distance+1  <<  endl;
    } else{
        cout << 0  <<  endl;
    }
    return 0;
}