#include <iostream>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};
int main() {
    Dog d;
    d.speak();  // Output: Dog barks
    Animal  *a= &d;
    a->speak(); // Output: Dog barks
    return 0;
}
