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

    int s;
    if(as<bs) s=as;
    else s=bs;
    int commonElements[s];
    int commonElementsLastIndex = 0;

    for(int i=0;i<as;i++){
        bool isCounted = false;
        for(int j=0;j<commonElementsLastIndex;j++){
            if(a[i]==commonElements[j]){
                isCounted = true;
                break;
            }
        }
        if(isCounted) continue;
        for(int j=0;j<bs;j++){
            if(a[i]==b[j]){
                commonElements[commonElementsLastIndex++] = a[i];
                break;
            }
        }
    }

    if(commonElementsLastIndex!=0)printArray(commonElements,commonElementsLastIndex,"commonElements");
    else cout<<"There is no common Elements!"<<endl;

    return 0;
}

