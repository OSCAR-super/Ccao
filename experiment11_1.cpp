#include <iostream>

using namespace std;

void sort(int *array,int n){
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
            if(*(array+k)>*(array+k+1)){
                int	t=*(array+k);
                *(array+k)=*(array+k+1);
                *(array+k+1)=t;
            }
        }
    }
}

int main(){
    int length;
    cout<<"Please enter the length of the sequence:"<<endl;
    cin>>length;
    int Array[length];
    cout<<"Please enter the numbers of the sequence:"<<endl;
    for(int i=0;i<length;i++){
        cin>>Array[i];
    }
    sort(&Array[0],length);
    cout<<"Output:"<<endl;
    for(int i=0;i<length;i++){
        cout<<Array[i]<<" ";
    }
    return 0;
}

