#include<iostream>
using namespace std;

int main(){
    int firstNum,lastNum,divisibleBy;
    cout<<"Enter First Number: ";
    cin>>firstNum;
    cout<<"Enter Last Number: ";
    cin>>lastNum;
    cout<<"Enter Divisible By: ";
    cin>>divisibleBy;
    int sum = 0;
    int firstDivisibleNum = firstNum+(divisibleBy-(firstNum%divisibleBy));
    cout<<"Numbers: ";
    for(int i = firstDivisibleNum; i<lastNum; i+=divisibleBy){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"\nThe Sum: "<<sum<<endl;
    return 0;
}

