#include<iostream>
using namespace std;

string encode(string s, int j){
    for(int i=j++;i<s.length();i+=j) s[i]+=2;
    return s;
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    int j;
    cout<<"Enter a integer: ";
    cin>>j;
    cout<<"\nConverted String: "<<encode(s,j)<<endl;
    return 0;
}
