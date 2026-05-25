#include <iostream>
using namespace std;
template <typename m>
m add(m a, m b){
    return a + b;
}
int main(){
    cout << add(1, 2) << endl; // Output: 3
    cout << add<float>(float(1.5), float(2)) << endl; // Output: 4.0
    cout << add(string("Hello, "), string("World!")) << endl; // Output: Hello, World!
    return 0;
}