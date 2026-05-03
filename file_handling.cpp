#include <iostream>
#include <fstream>
using namespace std;
class File {
public:
    void write() {
        ofstream f("data.txt");
        f << "Hello";
        f.close();
    }
};
int main() {
    File f;
    f.write();
}
