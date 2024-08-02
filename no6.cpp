#include <iostream>
using namespace std;

int main() {
    int nilai[10];
    int max = -1;
    int count = 0;

    // Input 10 nilai ujian
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ujian siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];

        if (nilai[i] > max) {
            max = nilai[i];
            count = 1;  
        } else if (nilai[i] == max) {
            count++;  
        }
    }

    cout << "Nilai tertinggi adalah: " << max << endl;

    return 0;
}
