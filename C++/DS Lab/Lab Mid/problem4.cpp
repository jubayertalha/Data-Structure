#include<iostream>
using namespace std;

int main(){
    string s;
    string acc = "Accepted";
    string reg = "Rejected";
    bool isAccepted = true;
    cout<<"Enter a string: ";
    getline(cin, s);
    int len = 0;
    while(s[len]!='\0') len++;
    for(int i=0,j=len-1;i<len/2;i++,j--){
        if(s[i]!=s[j]){
            isAccepted = false;
            break;
        }
    }
    if(isAccepted) cout<<acc<<endl;
    else cout<<reg<<endl;
    return 0;
}
