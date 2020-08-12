#include<iostream>
using namespace std;

int main(){
    int ai,aj,bi,bj,ci,cj;
    int i,j;
    cout<<"Enter A matrix i dimension: ";
    cin>>ai;
    cout<<"Enter A matrix j dimension: ";
    cin>>aj;
    int a[ai][aj];
    cout<<"Enter A matrix:"<<endl;
    for(i=0;i<ai;i++){
        for(j=0;j<aj;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\nEnter B matrix i dimension: ";
    cin>>bi;
    cout<<"Enter B matrix j dimension: ";
    cin>>bj;
    int b[bi][bj];
    cout<<"Enter B matrix:"<<endl;
    for(i=0;i<bi;i++){
        for(j=0;j<bj;j++){
            cin>>b[i][j];
        }
    }
    cout<<"\nEnter C matrix i dimension: ";
    cin>>ci;
    cout<<"Enter C matrix j dimension: ";
    cin>>cj;
    int c[ci][cj];
    cout<<"Enter C matrix:"<<endl;
    for(i=0;i<ci;i++){
        for(j=0;j<cj;j++){
            cin>>c[i][j];
        }
    }
    cout<<"\nA matrix:"<<endl;
    for(i=0;i<ai;i++){
        for(j=0;j<aj;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nB matrix:"<<endl;
    for(i=0;i<bi;i++){
        for(j=0;j<bj;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nC matrix:"<<endl;
    for(i=0;i<ci;i++){
        for(j=0;j<cj;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    if(ai==bi&&ai==ci&&aj==bj&&aj==cj){
        int sum[ai][aj];
        int i,j;
        for(i=0;i<ai;i++){
            for(j=0;j<aj;j++){
                sum[i][j] = a[i][j]+b[i][j]+c[i][j];
            }
        }
        cout<<"\nSum matrix:"<<endl;
        for(i=0;i<ai;i++){
        for(j=0;j<aj;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    }else{
        cout<<"\nAddition is not possible!"<<endl;
    }
    return 0;
}
