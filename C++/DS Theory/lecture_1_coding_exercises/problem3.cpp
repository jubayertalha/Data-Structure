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

int sumOfArray(int a[],int s){
    int sum = 0;
    for(int i=0;i<s;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    int a[s];
    inputArray(a,s,"a");
    cout<<"The sum of the a[] is: "<<sumOfArray(a,s)<<endl;
    return 0;
}



