
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
    cout<<"Printing "<<ch<<"[] in Revers:"<<endl;
    for(int j=s-1;j>=0;j--){
        cout<<ch<<"["<<j<<"] = "<<a[j]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    int a[s];
    inputArray(a,s,"a");
    printArrayInRevers(a,s,"a");
    return 0;
}
