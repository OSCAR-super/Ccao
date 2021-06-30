#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ofstream outfile;
    outfile.open("../a.txt",ios::out);
    int a=0;
    cout<<"enter stu number :"<<endl;
    cin>>a;
    while (a>0){
        a--;
        vector<double> array;
        double number;
        string s;
        cout <<"please input name:"<<endl;
        cin >> s;
        outfile<<s;
        cout <<"please input score:"<<endl;
        cin >> number;
        outfile<<" "<<number<<"\n";
    }
    outfile.close();
    ifstream ifs("../a.txt");
    string  line;
    vector<string> vec;
    while(getline(ifs,line)){
        vec.push_back(line);
    }
    ifs.close();
    sort(vec.begin(),vec.end());
    for (auto & it : vec){
    cout << it << endl;
    }
    return 0;
}
