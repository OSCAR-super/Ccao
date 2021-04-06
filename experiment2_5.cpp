#include <iostream>

using namespace std;



string ZIP(string str)
{
    string zip;
    int  n = 1;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            n++;
        }else{
            string tmp=to_string(n);
            zip += str[i];
            if(n!=1)
                zip += tmp;
            n = 1;
        }

    }
    return zip;
}
int main()
{
    string str = "abbyytyty";
    string str2=ZIP(str);
    if (str.length()==str2.length()){
        cout<<str<<endl;
    } else{
        cout<<str2<<endl;
    }

    return 0;
}