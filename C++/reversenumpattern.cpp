#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
    }cout<<"*";
    if(i==0){
        cout<<endl;
    }else{
        for(int j=0;j<i*2-1;j++){
            cout<<" ";
        }
        cout<<"*\n";
    }
}   for(int i=n;i>=0;i--){
        for(int k=i;k<n;k++){
            cout<<" ";
    }cout<<"*";
    if(i==0){
        cout<<endl;
    }else{
        for(int j=i*2-1;j>0;j--){
            cout<<" ";
        }
        cout<<"*\n";
    }
}

    return 0;
}