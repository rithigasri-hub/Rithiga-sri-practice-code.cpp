#include <iostream>
using namespace std;
class Test {
    int x;
public:
    Test(int a) { x = a; }
    friend void display(Test t);
};
void display(Test t) {
    cout << t.x;
}
int main() {
    Test t(10);
    display(t);
}
