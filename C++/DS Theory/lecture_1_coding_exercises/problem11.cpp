#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[](at least 2): "<<endl;
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

    int largest;
    int secondLargest;

    if(a[0]>a[1]){
        largest = a[0];
        secondLargest = a[1];
    }else{
        largest = a[1];
        secondLargest = a[0];
    }

    for(int i=2;i<s;i++){
        if(a[i]>largest){
            secondLargest = largest;
            largest = a[i];
        }else if(a[i]>secondLargest){
            secondLargest = a[i];
        }
    }

    cout<<"The Second Largest Element in a[] is: "<<secondLargest<<endl;

    return 0;
}



