/*
Question 1 : Write a function to check if a number is a palindrome in C++.
(121 is a palindrome, 321 is not)
A number is called a palindrome if the number is equal to the reverse of a number.
Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321
is not a palindrome because the reverse of 321 is 123, which is not equal to 321. 
*/
#include<iostream>
using namespace std;
// the Function for reverseing a number
int reverse_number(int num){
    int cal=0,rem;
    while(num!=0){
        rem=num%10;
        cal = cal * 10 + rem;
        num=num/10;
    }
    return cal;
}
//The function check is number a palindrome number
bool Is_Palindrome (int num)
{
    //call reverse function
    if(num==reverse_number(num)){
        return true;
    }
    else{
        return false;
    }
}
    int main()
{
    int number;
    cout<< "Enter A number : ";
    cin>>number;
    // Calling function and print
    if(Is_Palindrome(number)){
        cout << "The number is a palindrome number";
    }
    else{
        cout << "The number is not a palindrome number";
    }
    return 0;
}