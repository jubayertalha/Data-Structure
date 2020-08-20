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

int countNumber(int a[],int s,int n){
    int c = 0;
    for(int i=0;i<s;i++){
        if(a[i]==n) c++;
    }
    return c;
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    int a[s];
    inputArray(a,s,"a");

    cout<<"Input a number to search: ";
    int n;
    cin>>n;

    cout<<"The number occurs "<<countNumber(a,s,n)<<" times in the array"<<endl;

    return 0;
}

