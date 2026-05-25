#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{1, 2, 3, 4,4,7,3,1,2, 5};
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    for(int i=0; i<int(v.size());i++){
        for(int j=i+1; j<int(v.size());j++){
            if(v[i]==v[j]){
                v.erase(v.begin()+j);
            }
        }
    }for(int i:v) cout<<i<<" ";
    cout<<endl;
    
    return 0;
}
