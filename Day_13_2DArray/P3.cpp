#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter row and colume numbers" << endl;
    cin >> n >> m;
    int array[n][m];
    cout << "Enter Matrix Element"<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> array[i][j];
        }
    }
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
