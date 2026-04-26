//Reverse string
#include<iostream>
#include<cstring>
using namespace std;
void reverse_string(char word[],int size){
    int st=0,end=size-1;
    while(st<end){
        swap(word[st++],word[end--]);
    }
}
int main(){
    char word []="code ali";
    reverse_string(word,strlen(word));
    cout <<"Reverse ="<< word;
}