/*
Question 2 : Print the RhombusPattern.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " How many line are you draw :";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        //For space
        for(int j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        //For star
        for(int j=1;j<=n;j++)
        {
            cout<< "*";
        }
        cout << endl;
    }

}