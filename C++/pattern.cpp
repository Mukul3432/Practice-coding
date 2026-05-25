#include<iostream>
using namespace std;

int main()
{
    int n = 10,sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<sum;
                sum++;
            };
        }
        cout<<endl;
    }return 0;
}