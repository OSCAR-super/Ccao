#include <iostream>
#include <map>

using namespace std;

int main()
{
    string str;
    cout<<"input a string:";
    getline(cin,str);
    map<string,int> maps;
    string temp ="";
    for(int i=0; i<str.length(); i++){
        temp = str[i];
        if(maps.size()==0){
            maps.insert(pair<string,int>(temp, 1));
        }else{
            if(maps[temp]==0){
                maps[temp]=1;
            }else{
                int n = maps[temp];
                n+=1;
                maps[temp]=n;
            }
        }
    }
    map<string,int>::iterator iter;
    for(iter = maps.begin(); iter != maps.end(); iter++) {
        cout<<"the number of ";
        cout << iter->first << " : " << iter->second << endl;
    }
    return 0;
}