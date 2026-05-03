#include <iostream>
using namespace std;
class Parent {
public:
    void show() {
        cout << "Parent\n";
    }
};
class Child : public Parent {
public:
    void show() {
        cout << "Child\n";
    }
};
int main() {
    Child c;
    c.show();
}
