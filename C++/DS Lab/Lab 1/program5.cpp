#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int x){
    int j;
    for(j=sqrt(x);j>1;j--){
        if(x%j==0){
            return false;
        }
    }
    return true;
}

long factorial(int x){
    long fac = 1;
    int i;
    for(i=2;i<=5;i++){
        fac*=i;
    }
    return fac;
}

int main(){
    cout<<"Enter Value: ";
    int x;
    cin>>x;
    if(isPrime(x)){
        cout<<factorial(x)<<endl;
    }else{
        cout<<"Error! Not a prime number."<<endl;
    }
    return 0;
}
