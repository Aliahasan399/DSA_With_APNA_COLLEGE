#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter row and colume numbers" << endl;
    cin >> n >> m;
    int array[n][m]={{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    int SecondDiagonalSum=0,PrimaryDiagonalSum=0;
    //For Main Diagonal Sum
    for(int i=0;i<n;i++){
        PrimaryDiagonalSum+=array[i][i];
    }
    // for Second Diagonal Sum
    for(int i=0,j=m-1;i<n && j>=0;i++,j--){
        SecondDiagonalSum+=array[i][j];
    }   
    cout<<"Diagonal sum="<<PrimaryDiagonalSum+SecondDiagonalSum;
}
