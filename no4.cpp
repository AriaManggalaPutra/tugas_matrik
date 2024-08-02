#include <iostream>
using namespace std;

int main() {
    int total_detik, jam, menit, detik;

    cout << "masukkan total detik: ";
    cin >> total_detik;

    jam = total_detik / 3600;
    int remaining_seconds = total_detik % 3600;
    menit = remaining_seconds / 60;
    detik = remaining_seconds % 60;

    cout << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0;
}