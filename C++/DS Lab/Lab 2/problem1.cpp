#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArrayInRevers(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[] in Revers Order:"<<endl;
    for(int i=s-1;i>=0;i--){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int as;
    cout<<"Enter Elements Number in a[]: ";
    cin>>as;
    int a[as];
    inputArray(a,as,"a");

    int bs;
    cout<<"Enter Elements Number in b[]: ";
    cin>>bs;
    int b[bs];
    inputArray(b,bs,"b");

    int abs = as+bs;
    int ab[abs];

    int i=0;
    for(;i<as;i++) ab[i] = a[i];

    for(int j=0;j<bs;j++,i++) ab[i] = b[j];

    printArrayInRevers(ab,abs,"ab");

    return 0;
}
