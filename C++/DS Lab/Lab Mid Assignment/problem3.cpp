#include<iostream>
using namespace std;

int main(){
    int ai,aj;
    cout<<"Enter A matrix i dimension: ";
    cin>>ai;
    cout<<"Enter A matrix j dimension: ";
    cin>>aj;
    int a[ai][aj];
    cout<<"Enter A matrix:"<<endl;
    for(int i=0;i<ai;i++){
        for(int j=0;j<aj;j++){
            cin>>a[i][j];
        }
    }
    int v;
    cout<<"Value to be searched: ";
    cin>>v;
    int row;
    int column;
    bool isFound = false;
    for(row=0;row<ai;row++){
        for(column=0;column<aj;column++){
            if(a[row][column]==v){
                isFound = true;
                break;
            }
        }
        if(isFound) break;
    }
    if(isFound) cout<<"Position of the value: Row: "<<++row<<"\tColumn: "<<++column<<endl;
    else cout<<"Value not found in the Matrix !!"<<endl;
    return 0;
}
