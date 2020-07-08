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

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");

    int numbersFrequency[s];
    int countedNumbers[s];
    int lastIndexOfCountedNumbers = 0;

    for(int i=0;i<s;i++){
        bool isCounted = false;
        for(int k=0;k<lastIndexOfCountedNumbers;k++){
            if(a[i]==countedNumbers[k]){
                isCounted = true;
                break;
            }
        }
        if(isCounted) continue;
        countedNumbers[lastIndexOfCountedNumbers] = a[i];
        int countOfFrequency = 0;
        for(int j=0;j<s;j++){
            if(a[i]==a[j]) countOfFrequency++;
        }
        numbersFrequency[lastIndexOfCountedNumbers] = countOfFrequency;
        lastIndexOfCountedNumbers++;
    }

    cout<<"Printing Frequency of each Elements:"<<endl;
    for(int l=0;l<lastIndexOfCountedNumbers;l++){
        cout<<countedNumbers[l]<<" has "<<numbersFrequency[l]<<" Frequency."<<endl;
    }

    return 0;
}


