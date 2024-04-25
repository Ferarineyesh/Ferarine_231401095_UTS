#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int nilai , count = 0;
    float rata_rata, total;
    cout << "Masukkan nilai (masukkan -1 untuk mengakhiri):\n";

    for (int i = 1; ; ++i) {
        cout << "Nilai ke-" << i << " : ";
        cin >> nilai;

        if (nilai >= 0) 
        {
            total += nilai;
            count++;
        }
        if (nilai == -1) 
        {
            break;
        }
    }

    if (count > 0) {
        rata_rata = (total) / count;
        cout << "Nilai rata-rata: " <<fixed<<setprecision(2)<< rata_rata << endl;
    } else {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    }

    return 0;
}
