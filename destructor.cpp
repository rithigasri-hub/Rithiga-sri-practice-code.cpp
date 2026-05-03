#include <iostream>
using namespace std;
class Test {
public:
    ~Test() {
        cout << "Destroyed\n";
    }
};
int main() {
    Test t;
}
