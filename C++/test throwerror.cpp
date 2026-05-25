#include <iostream>
#include <exception>
using namespace std;
class NegativeValueException : public exception {
    int value;
public:
    NegativeValueException(int val) : value(val) {}
    // Override what() method
    const char* what() const wnoexcept override {
        return "Negative value error occurred!";
    } // syntax remains same for all custom exceptions
    // Method to get the invalid value
    int getValue() const { return value; }
};
// Function that throws the custom exception
void checkValue(int x) {
    if (x < 0) {
        throw NegativeValueException(x);
    }else if (x==67){
        cerr<<"cannnot be 67.Error!jnfrjgnvrbgb hehehehehelalalalalalla 676767676767767767676676767";
    }
    else {
        cout << "Value is: " << x << endl;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    if (!(cin >> n)) {
        cerr << "Invalid input.\n";
        return 1;
    }
    try {
        checkValue(n);
    }
    catch (NegativeValueException &e) {
        cout << "Exception caught: " << e.what()<< " Value = " << e.getValue() << endl;
    }
    return 0;
}
