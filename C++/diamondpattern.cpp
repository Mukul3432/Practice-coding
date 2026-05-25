#include <iostream>
using namespace std;
int main(){
    int n=20;
    for(int i=0;i<n;i++){
        for(int a=0;a<n-1-i;a++) cout<<" ";cout<<"*";
        if(i==0){cout<<endl;continue;}
        else{
            for(int b=0;b<2*i-1;b++){
                cout<<" ";}
        cout<<"*"<<endl;
        }
    }
    for(int i=n-1;i>0;i--){
        for(int a=n-i;a>0;a--) cout<<" ";cout<<"*";
        if(i==1){cout<<endl;continue;}
        else{
            for(int b=0;b<2*(i-1)-1;b++){
                cout<<" ";}
        cout<<"*"<<endl;
        }
    }
    return 0;
}