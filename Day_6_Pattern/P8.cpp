// Daimond pattern with star
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " How many line are you draw :";
    cin >> n;
    //First loop for upper pyramid
    for (int i = 1; i <= n; i++)
    {
        //For create space
        for(int j=n-i;j>0;j--)
        {
            cout << " ";
        }        //for create star
        for(int j=1;j<=(i*2-1);j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int k=0;
    //Second loop for lower pyramid
    for (int i = 1; i <= n; i++)
    {
        //For create space
        for (int j =i-1; j > 0; j--)
        {
            cout << " ";
        }
        //for create star
        for (int j = 1; j <= (n-k)*2-1; j++)
        {
            cout << "*";
        }
        k++;
        cout << endl;
    }
    return 0;
}