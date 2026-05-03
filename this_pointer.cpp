#include <iostream>
using namespace std;
class Test {
    int x;
public:
    void set(int x) {
        this->x = x;
    }
    void show() {
        cout << x;
    }
};
int main() {
    Test t;
    t.set(20);
    t.show();
}
