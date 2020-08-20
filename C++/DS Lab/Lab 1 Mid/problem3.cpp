#include<iostream>
using namespace std;

int OddPrint(int start,int ending){
    for(;start<=ending;start++){
        if(start%2==1){
            cout<<start<<" ";
        }
    }
    cout<<endl;
    return 0;
}

int main(){
    int s,e;
    cout<<"Enter Starting Range: ";
    cin>>s;
    cout<<"Enter Ending Range: ";
    cin>>e;
    OddPrint(s,e);
    return 0;
}



