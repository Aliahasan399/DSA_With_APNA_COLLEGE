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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i][i];
        if(i!=n-i-1){
            sum+=array[i][n-1-i];
        }
    }
    cout << "Diagonal Sum = " << sum;
}