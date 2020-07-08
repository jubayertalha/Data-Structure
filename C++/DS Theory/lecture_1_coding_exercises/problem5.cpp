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

    int countOfDuplicateNumbers[s];
    int countedNumbers[s];
    int lastIndexOfCountedNumbers = 0;

    for(int i=0;i<s;i++){
        //cout<<"i = "<<i<<endl;
        bool isCounted = false;
        for(int k=0;k<lastIndexOfCountedNumbers;k++){
            //cout<<"k = "<<k<<endl;
            //cout<<a[i]<<" == "<<countedNumbers[k]<<endl;
            if(a[i]==countedNumbers[k]){
                isCounted = true;
                //cout<<"True"<<endl;
                break;
            }
        }
        //cout<<boolalpha<<isCounted<<endl;
        if(isCounted) continue;
        countedNumbers[lastIndexOfCountedNumbers] = a[i];
        int countOfDuplicate = 0;
        for(int j=0;j<s;j++){
            //cout<<"j = "<<j<<endl;
            if(j==i) continue;
            if(a[i]==a[j]) countOfDuplicate++;
        }
        countOfDuplicateNumbers[lastIndexOfCountedNumbers] = countOfDuplicate;
        lastIndexOfCountedNumbers++;
    }

    int len = 0;
    for(int n=0;n<lastIndexOfCountedNumbers;n++){
            if(countOfDuplicateNumbers[n]!=0) len++;
    }

    if(len!=0){
        cout<<"There is "<<len<<" Elements which has Duplicate Elements:"<<endl;
        for(int l=0;l<lastIndexOfCountedNumbers;l++){
            if(countOfDuplicateNumbers[l]!=0) cout<<countedNumbers[l]<<" has "<<countOfDuplicateNumbers[l]<<" Duplicate Elements."<<endl;
        }
    }else{
        cout<<"There is no Duplicate Elements."<<endl;
    }

    return 0;
}

