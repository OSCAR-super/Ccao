#include <iostream>
#include <iomanip>


using namespace std;

void arange(int* arr, int num)
{
    for (int i = 0; i < num-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp;
            temp = arr[i]; arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    int score[5] = { 1,2,3,-4,-5 };
    int num = sizeof(score)/sizeof(score[0]);
    int a,b,c;
    for (int j = num; j >=1; j--)
    {
        arange(score, num);
    }
    a=score[num-1]*score[num-3]*score[num-2];
    b=score[0]*score[1]*score[num-1];
    c=score[0]*score[num-1]*score[num-2];
    int score2[3] = { a,b,c };

    for (int j = 3; j >=1; j--)
    {
        arange(score2, 3);
    }
        cout << score2[2] << " ";

    return 0;
}