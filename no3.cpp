#include <iostream>
using namespace std;

int main() {
    int jam, menit, detik, total_detik;

    cout << "Masukan Jam Menit Dan Detik: ";
    cin >> jam >> menit >> detik;

    total_detik = jam * 3600 + menit * 60 + detik;

    cout << "Total Detik Adalah :" << total_detik << endl;

} 