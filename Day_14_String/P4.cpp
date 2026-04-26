//Vaild Palindrom
#include<iostream>
#include<cstring>
using namespace std;
bool Is_palindrom(char word[],int size){
    int st=0,end=size-1;
    while(st<end){
        if(word[st++]!=word[end--]){
            return false;
        }
    }
    cout << "valid Palindrom\n";
    return true;
}
int main(){
    char word []="racecar"; 
    Is_palindrom(word,strlen(word));
}