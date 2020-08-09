#include<iostream>
using namespace std;

int main(){
    int ai,aj,bi,bj;
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
    if(aj==bi){
        int sum[ai][bj];
        int i,j;
        for(i=0;i<ai;i++){
            for(j=0;j<bj;j++){
                int m = 0;
                for(int k=0;k<aj;k++){
                    m+=(a[i][k]*b[k][j]);
                }
                sum[i][j] = m;
            }
        }
        cout<<"\nOutput matrix:"<<endl;
        for(i=0;i<ai;i++){
        for(j=0;j<bj;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    }else{
        cout<<"\nMultiplication is not possible!"<<endl;
    }
    return 0;
}
