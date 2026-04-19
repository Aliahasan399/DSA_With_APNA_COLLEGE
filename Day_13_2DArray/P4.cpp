#include<iostream> 
using namespace std;
int main()
{
    int array[4][4]={{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    int key=32,compare=array[1][4];
    int row=1,col=4;
    for(int i=0;i<4*4;i++){
        if(key<array[0][0] || key>array[3][3])
        {
            break;
        }
        if(key>compare){
            row++;
            compare=array[row][col];
        }
        else if(key<compare){
            col--;
            compare=array[row][col];
        }
        else if(compare==key)
        {
            cout << "found";
            break;
        }
    }
}

