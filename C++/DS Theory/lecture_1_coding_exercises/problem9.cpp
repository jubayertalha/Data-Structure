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

    int countOdd = 0;
    for(int i=0;i<s;i++){
        if(a[i]%2==1) countOdd++;
    }
    int countEven = s - countOdd;

    int odds[countOdd];
    int evens[countEven];

    countOdd = 0;
    countEven = 0;

    for(int i=0;i<s;i++){
        if(a[i]%2==1){
            odds[countOdd] = a[i];
            countOdd++;
        }else{
            evens[countEven] = a[i];
            countEven++;
        }
    }

    if(countOdd!=0) printArray(odds,countOdd,"odds");
    if(countEven!=0) printArray(evens,countEven,"evens");

    return 0;
}


