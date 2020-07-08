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

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");
    int b[s];
    for(int i=0;i<s;i++){
        b[i] = a[i];
    }
    cout<<"a[] copied into b[]."<<endl;
    printArray(b,s,"b");
    return 0;
}
