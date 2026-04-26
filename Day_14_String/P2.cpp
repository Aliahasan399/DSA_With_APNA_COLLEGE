//Convert to lOWERCASE
#include<iostream>
using namespace std;
int main(){
    char Str[50]={'\0'};
    cin.getline(Str,50);
    for (int i=0;Str[i]!='\0';i++){
        if(Str[i]>='A' && Str[i]<='Z'){
            cout<<(char)(Str[i]+32);
        }
        else
        cout << Str[i];
    } 
}
