/*
Question 5 : Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet.
Eg : input = ‘c’, return value = ‘d’
Note : for ch = ‘z’, return ‘a’.
*/
#include<iostream>
using namespace std;
char Next_character(char ch)
{
    if(ch=='z'){
    return 'a';
    }
    else if(ch == 'Z'){
        return 'A';
    }
    else{
        return ch+1;
    }
}
int main (){
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    cout << "The next Character is :" <<Next_character(ch);
    return 0;
}