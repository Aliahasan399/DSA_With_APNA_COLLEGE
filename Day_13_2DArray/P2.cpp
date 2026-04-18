//sprial matrix
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
    int srow=0,scol=0,erow=n-1,ecol=m-1;
    while(srow<=erow && scol<=ecol) {
         //for top side
        for(int i=scol;i<=ecol;i++){
            cout<<array[srow][i] << " ";
        }
        //For right side
        for(int j=srow+1;j<=erow;j++){ 
            cout<< array[j][ecol] << " ";
        }
        //for bottom side
        for(int i=ecol-1;i>=scol;i--){            
            if(srow==erow){
            break;
        }
            cout<< array[erow][i] << " ";
        }
        //For left side   
        for(int j=erow-1;j>srow+1;j--){
            if(scol==ecol){
            break;
        } 
            cout<< array[j][scol] << " ";
        }
        srow++,scol++,ecol--,erow--;
    }
return 0;
}
