#include <iostream>
#include <map>

using namespace std;

int main()
{
    int index = 0;
    int count = 0;
    string str;
    string sub;
    cout<<"input s string:"<<endl;
    getline(cin,str);
    cout<<"input a substring:"<<endl;
    getline(cin,sub);
    while( (index=str.find(sub,index)) < str.length() ){
        count++;
        index++;
    }
    cout<<count<<endl;
    return 0;
}