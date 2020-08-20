#include<iostream>
using namespace std;

int main(){
    int ai,aj;
    int i,j;
    cout<<"Enter A matrix i dimension (minimum 3): ";
    cin>>ai;
    cout<<"Enter A matrix j dimension (minimum 4): ";
    cin>>aj;
    int a[ai][aj];
    cout<<"Enter A matrix:"<<endl;
    for(i=0;i<ai;i++){
        for(j=0;j<aj;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Transpose of matrix A:"<<endl;
    for(i=0;i<aj;i++){
        for(j=0;j<ai;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
