#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>

using namespace std;

typedef struct
{
    int row,col;
    float **matrix;
} Matrix;

int main()
{
    Matrix m;
    int row,col;
    cout << "enter row and col :" << endl;
    cin >> row >> col;
    float **enterMatrix ;
    enterMatrix=(float**) malloc(row*sizeof(float*)) ;
    for(int i=0; i<row; i++)
        enterMatrix[i] = (float *)malloc(col * sizeof(float));
    cout<<"enter your matrix:"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> enterMatrix[i][j];
        }
    }
    set<int>ii;
    set<int>jj;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if (enterMatrix[i][j]==0){
                ii.insert(i);
                jj.insert(j);
            }
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if (ii.count(i)==0&&jj.count(j)==0){
                cout<<enterMatrix[i][j];
            } else{
                cout<<0;
            }
        }
        cout<<endl;
    }
    return 0;
}