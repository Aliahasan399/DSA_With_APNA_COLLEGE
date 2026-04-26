// valid  Anagram
#include<iostream>
#include<string>
using namespace std;
bool is_Anagram(string str1,string str2){
    int comp[26]={0};
    if(str1.length()!=str2.length())
    {
        return false;
    } 
    for(int i=0;i<str1.length();i++)
    {
        comp[str1[i]-'a']++;
    }
    for(int i=0;i<str1.length();i++)
    { 
        if((comp[str2[i]-'a']) == 0)
        {
            return false;
        }
        comp[str2[i]-'a']--;     
    }
    return true;
}
int main(){
    string str1="axi",str2="ali";
    // getline(cin,str1);
    // getline(cin,str2);
    cout << is_Anagram(str1,str2);
}