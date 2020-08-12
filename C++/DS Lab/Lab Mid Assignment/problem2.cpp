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

int largest(int a[],int s){
    int largest = a[0];
    for(int i=0;i<s;i++) if(a[i]>largest) largest = a[i];
    return largest;
}

int smallest(int a[],int s){
    int smallest = a[0];
    for(int i=0;i<s;i++) if(a[i]<smallest) smallest = a[i];
    return smallest;
}

int main(){
    int as = 10;
    int a[as];
    inputArray(a,as,"a");

    cout<<"Largest Number: "<<largest(a,as)<<endl;
    cout<<"Smallest Number: "<<smallest(a,as)<<endl;

    return 0;
}

