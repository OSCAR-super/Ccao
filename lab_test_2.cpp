#include <iostream>

using namespace std;

void rotate(int row,int len,int time);
int main(){
    int r,c,m;
    cout<<"Please enter the values of rows,columns and ratate times :"<<endl;
    cin>>r>>c>>m;
    rotate(r,c,m);
    return 0;
}
void rotate(int row,int len,int time){
    int matrix[row][len];
    int temp;
    cout<<"Please enter the values of the matrix:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<len;j++){
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for(int j=0;j<time;j++){
            temp=matrix[i][0];
            for (int k=0;k<len-1;k++){
                matrix[i][k]=matrix[i][k+1];
            }
            matrix[i][len-1]=temp;
        }

    }
    cout<<"Output :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<len;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}