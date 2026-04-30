#include<iostream>
using namespace std;
void Func(){
    int row,cols;
    cout << "Enter Rows =";
    cin >> row;
    cout << "Enter colomn = ";
    cin >> cols;
    int* *matrix = new int *[row];
    for (int i = 0; i < cols; i++)
    {
        matrix[i] =new int[cols];
    }
    // Data store
    int p=1;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            matrix[i][j]=p;
            cout << matrix[i][j] << " ";
            p++;
        }
        cout << endl;
    }
    //  Cleanup: You must delete what you allocate!
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
int main(){
Func();
}