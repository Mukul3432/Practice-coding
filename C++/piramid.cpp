#include<iostream>
using namespace std;

int main()
{
    int n=10,num=1,c=n*2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if (j>=c/2-i+1 && j<=c/2+i-1){
                cout<<num<<" ";
                if(num==9) num=0; else num++;
            } else cout<<"  ";
        }num=1;cout<<endl;
    } return 0;
}