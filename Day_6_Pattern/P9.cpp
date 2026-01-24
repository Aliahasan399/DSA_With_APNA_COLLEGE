// Butterfly pattern with star
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " How many line are you draw :";
    cin >> n;
    for(int i=1;i<=n;i++){
        //for left side star
        for(int j=i;j>0;j--)
        {
            cout<< "*";
        }
        for(int j=1;j<=(n-i)*2;j++)
        {
            cout<< " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    int k=0;
    for (int i = 1; i <= n; i++)
    {
        // for left side star
        for (int j = n-k; j > 0; j--)
        {
            cout << "*";
        }
        
        for (int j = i-k; j <= (2*i)-2; j++)
        {
            cout << " ";
        }
        for (int j = n - k; j > 0; j--)
        {
            cout << "*";
        }
        k++;
        cout << "\n";
    }
}