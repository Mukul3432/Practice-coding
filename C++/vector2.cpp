#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{1, 2, 3, 4, 5};
    for(int i:v) cout<<i<<" ";
    v.insert(v.begin(),6);
    cout<<endl;
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    v.pop_back();
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    v.erase(v.begin());
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    return 0;
}
