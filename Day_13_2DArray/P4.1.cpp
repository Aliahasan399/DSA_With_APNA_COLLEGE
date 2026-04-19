//Staircase Search 
#include<iostream> 
using namespace std;
int main()
{
    int n=4,m=4;
    int array[n][m]={{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    int key=9,i=0,j=m-1;
    while(i<n && j>=0){
        if(key>array[i][j]){
            i++;
        }
        else if(key<array[i][j]){
            j--;
        }
        else if(key==array[i][j])
        {
            cout << "Found the number at "<<"("<<i<<","<<j<<")" ;
            return 0;
        }
    }
    cout << "Number not found";
}

