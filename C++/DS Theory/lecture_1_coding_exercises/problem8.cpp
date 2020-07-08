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

int findMax(int a[],int s){
    int maxNumber = a[0];
    for(int i=1;i<s;i++){
        if(a[i]>maxNumber) maxNumber = a[i];
    }
    return maxNumber;
}

int findMin(int a[],int s){
    int minNumber = a[0];
    for(int i=1;i<s;i++){
        if(a[i]<minNumber) minNumber = a[i];
    }
    return minNumber;
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");
    cout<<findMax(a,s)<<" is the Maximum Number in a[]."<<endl;
    cout<<findMin(a,s)<<" is the Minimum Number in a[]."<<endl;
    return 0;
}

