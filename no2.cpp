#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3, largest;

    cout << "Masukan 3 Angka: ";
    cin >> number1 >> number2 >> number3;

    if (number1 >= number2 && number1 >= number3) {
        largest = number1;
    } else if (number2 >= number1 && number2 >= number3) {
        largest = number2;
    } else {
        largest = number3;
    }

    cout << "Angka Terbesar Adalah: " << largest << endl;

    return 0;
}
