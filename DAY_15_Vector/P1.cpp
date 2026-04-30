#include<iostream>
using namespace std;
void func(){
int size;
cout << "enter Size =";
    cin>> size;
    int *arr =new int(size);
    int p=1;
    for (int  i = 0; i < size; i++)
    {
        arr[i]=p;
        cout << arr[i] << " ";
        p++;
    }    
    delete[] arr;
}
void func_Int(){
    int *ptr=new int;
    *ptr=5;
    cout << *ptr;
    delete ptr;
}
int main(){
    func();
    func_Int();
}