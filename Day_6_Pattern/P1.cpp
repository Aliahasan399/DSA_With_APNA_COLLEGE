//Half of pyramid patter with star
#include<iostream>
using namespace std;
int main()
{
int n;
cout << " How many line are you draw :";
cin >> n;
//outer loop
for(int i=0;i<n;i++)
{
    //inner loop
    for(int j=0;j<=i;j++)
    {
        //print star
        cout << "* ";
    }
    //line end
    cout << endl;
}
}