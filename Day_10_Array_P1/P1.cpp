//array reverse using new space
#include<iostream>
using namespace std;
void Reverse_array(int *arr,int size){
    int copy_array[size];
    for (int i = 0; i < size; i++)
    {
        //copy real array using new array
        copy_array[i] = arr[size - i - 1];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = copy_array[i];
    }
}
int main(){
    int array[]={1,2,3,4,5,6};
    int size =sizeof(array)/sizeof(int);
    Reverse_array(array,size);
    cout << "Reverse the array\n";
    for (int i = 0; i < size; i++){
        cout << array [i] <<" ";
    }
}