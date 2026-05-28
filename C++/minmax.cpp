#include<iostream>
using namespace std;
int main(){
    int arr[]={5,15,22,1,-15,24};
    int size= sizeof(arr)/sizeof(arr[0]);
    int min=0;
    int max=0;
    for(int i=1; i<size;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
        if(arr[max]<arr[i]){
            max=i;
        }

    }swap(arr[min],arr[max]);
    cout<<"min:-"<<min<<endl;
    cout<<"max:-"<<max<<endl;
    for(int i=0;i<size;i++) cout<<arr[i] <<',';
    return 0;
}