/*
Find the sum of two numbers using pointers.
*/
#include<iostream>
using namespace std;
//With pass by reference
int Add(int &n1,int &n2,int &result)
{
    return result=n1+n2;
}
// With pass by pointer
int add (int *n1,int*n2,int*result)
{
    return *result=*n1+*n2;
}
int main(){
    int Num1,Num2,result1,result2;
    cout << " Enter two value : \n";
    cin >> Num1 >> Num2;
    Add(Num1,Num2,result1);
    cout << "Answer With using pass by reference\n"; 
    cout << "Result = " << result1 << endl;
    add(&Num1, &Num2, &result2);
    cout << "Answer With using pass by Pointer\n";
    cout << "Result = " << result2;
    return 0;
}