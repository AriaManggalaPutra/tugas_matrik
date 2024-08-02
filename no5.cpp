#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " bilangan genap" << endl;
        } else {
            cout << i << " bilangan ganjil" << endl;
        }
    }

    return 0;
}
