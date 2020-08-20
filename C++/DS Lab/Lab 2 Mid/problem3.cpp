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

    int countedNumbers[s];
    int lastIndexOfCountedNumbers = 0;

    bool hasDuplicate = false;

    for(int i=0;i<s;i++){
        bool isCounted = false;
        for(int k=0;k<lastIndexOfCountedNumbers;k++){
            if(a[i]==countedNumbers[k]){
                isCounted = true;
                hasDuplicate = true;
                break;
            }
        }
        if(isCounted) continue;
        countedNumbers[lastIndexOfCountedNumbers] = a[i];
        lastIndexOfCountedNumbers++;
    }

    for(int i=0;i<lastIndexOfCountedNumbers;i++) a[i] = countedNumbers[i];

    if(hasDuplicate) printArray(a,lastIndexOfCountedNumbers,"a");
    else cout<<"Array is already unique!"<<endl;

    return 0;
}



