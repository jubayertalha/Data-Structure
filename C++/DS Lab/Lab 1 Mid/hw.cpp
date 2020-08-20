#include<iostream>
using namespace std;

int main(){
    char name[101];
    char rev[101];
    int i,j,l;
    cin.getline(name,101);
    l=0;
    while(name[l]!='\0'){
        l++;
    }
    for(i=0,j=l-1;i<l;i++,j--){
        rev[i] = name[j];
    }
    cout<<name<<endl;
    cout<<rev<<endl;
    return 0;
}
