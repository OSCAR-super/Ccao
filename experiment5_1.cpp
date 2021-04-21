#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <set>

using namespace std;

int notRepeating(string str,int len){
    set<char> se;
    set<char> s;
    for (char i:str){
        if(s.count(i)==0){
            if (se.count(i)==0){
                se.insert(i);
            } else{
                se.erase(i);
                s.insert(i);
            }
        }

    }
    int i;
    for (i=0;i<len;i++){
        if (se.count(str[i])==1){
            break;
        } else if (se.count(str[i])!=1&&i==len-1){
            return -1;
        }

    }
    return i;
};

int main()
{

    cout<<notRepeating("cdabab",6)<<endl;
}