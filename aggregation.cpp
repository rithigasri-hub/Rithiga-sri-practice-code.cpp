#include <iostream>
using namespace std;
class Address {
public:
    string city;
    Address(string c) { city = c; }
};
class Person {
    Address *addr;
public:
    Person(Address *a) {
        addr = a;
    }
    void show() {
        cout << addr->city;
    }
};
int main() {
    Address a("Chennai");
    Person p(&a);
    p.show();
}
