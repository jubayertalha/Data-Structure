#include<iostream>
using namespace std;

void fun(string s){
    int len = 0;
    int c = 0;
    int v = 0;
    for(;s[len]!='\0';len++){
        if(s[len]=='a'||s[len]=='e'||s[len]=='i'||s[len]=='o'||s[len]=='u'||s[len]=='A'||s[len]=='E'||s[len]=='I'||s[len]=='O'||s[len]=='U') v++;
        else if((s[len]>='a'&&s[len]<='z')||(s[len]>='A'&&s[len]<='Z')) c++;
    }
    cout<<"Length of string: "<<len<<endl;
    cout<<"Vowel used: "<<v<<" times"<<endl;
    cout<<"Consonant used: "<<c<<" times"<<endl;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    fun(s);
    return 0;
}
