#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j){
                j++;
            }
            if(s[i]==s[j]){
                break;
            }
            if(j==len-1&&s[i]!=s[j]){
                return i;
            }
        }
    }
    return -1;
}
