#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input the value for n-th term: ";
    cin>>n;
    int sum = 0;
    int totalSum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
        for(int j=1;j<=i;j++){
            if(j!=1) cout<<"+";
            cout<<j;
        }
        cout<<" = "<<sum<<endl;
        totalSum+=sum;
    }
    cout<<"The sum of the above series is: "<<totalSum<<endl;
    return 0;
}
