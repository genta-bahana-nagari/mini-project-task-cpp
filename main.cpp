#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Konstanta jumlah maksimal percobaan
const int MAKSIMAL_PERCOBAAN = 5;

// Fungsi untuk menampilkan riwayat tebakan
void tampilkanRiwayat(int riwayat[], int jumlahPercobaan) {
    cout << "\n===== RIWAYAT TEBAKAN =====" << endl;

    for (int i = 0; i < jumlahPercobaan; i++) {
        cout << "Percobaan " << i + 1
             << ": " << riwayat[i] << endl;
    }
}

// Fungsi utama untuk menjalankan satu permainan
void mulaiGame() {

    // Variable scope lokal
    // Variabel ini hanya dapat digunakan di dalam fungsi mulaiGame()
    int angkaRahasia = rand() % 100 + 1;
    int tebakan;
    int percobaan = 0;

    // Array untuk menyimpan riwayat tebakan
    int riwayat[MAKSIMAL_PERCOBAAN];

    // Menyimpan status apakah pemain menang
    bool menang = false;

    cout << "=================================" << endl;
    cout << "        GAME TEBAK ANGKA         " << endl;
    cout << "=================================" << endl;

    cout << "Kamu harus menebak angka antara 1-100." << endl;

    /* Line dibawah ini hanya untuk menguji
    angka random yang dibuat oleh program */
    
    // cout << "Test dulu, angka random: " << angkaRahasia << endl;
    
    cout << "Kamu memiliki maksimal "
         << MAKSIMAL_PERCOBAAN
         << " percobaan." << endl;

    // Perulangan selama percobaan masih tersedia
    while (percobaan < MAKSIMAL_PERCOBAAN) {

        cout << "\nPercobaan "
             << percobaan + 1
             << "/"
             << MAKSIMAL_PERCOBAAN
             << endl;

        cout << "Masukkan tebakan (1-100): ";
        cin >> tebakan;

        // Validasi input
        if (tebakan < 1 || tebakan > 100) {

            cout << "Input tidak valid!" << endl;
            cout << "Masukkan angka antara 1-100." << endl;

            // Input tidak valid tidak dihitung
            continue;
        }

        // Menyimpan tebakan ke dalam array
        riwayat[percobaan] = tebakan;

        // Menambah jumlah percobaan
        percobaan++;

        // Membandingkan tebakan dengan angka rahasia
        if (tebakan == angkaRahasia) {

            cout << "\n=================================" << endl;
            cout << "       SELAMAT! BENAR!           " << endl;
            cout << "=================================" << endl;

            cout << "Angka rahasia: "
                 << angkaRahasia << endl;

            cout << "Kamu berhasil menebak dalam "
                 << percobaan
                 << " percobaan." << endl;

            menang = true;

            // Menghentikan perulangan
            break;
        }

        // Memberikan petunjuk
        else if (tebakan < angkaRahasia) {

            cout << "Petunjuk: Tebakan terlalu kecil!" << endl;

        }
        else {

            cout << "Petunjuk: Tebakan terlalu besar!" << endl;
        }

        // Memberikan informasi sisa percobaan
        int sisaPercobaan =
            MAKSIMAL_PERCOBAAN - percobaan;

        if (sisaPercobaan > 0) {

            cout << "Sisa percobaan: "
                 << sisaPercobaan
                 << endl;
        }
    }

    // Jika pemain tidak berhasil sampai percobaan terakhir
    if (!menang) {

        cout << "\n=================================" << endl;
        cout << "           GAME OVER             " << endl;
        cout << "=================================" << endl;

        cout << "Kamu gagal menebak angka." << endl;
        cout << "Angka rahasia adalah: "
             << angkaRahasia << endl;
    }

    // Menampilkan riwayat tebakan
    tampilkanRiwayat(riwayat, percobaan);

    // Menampilkan hasil akhir
    cout << "\nStatus permainan: ";

    if (menang) {
        cout << "MENANG" << endl;
    }
    else {
        cout << "GAGAL" << endl;
    }
}


// Fungsi utama program
int main() {

    // Menggunakan waktu saat ini sebagai seed
    // untuk menghasilkan angka acak
    srand(time(0));

    char pilihan;

    // Permainan akan terus diulang
    // selama pemain memilih Y/y
    do {

        mulaiGame();

        cout << "\n=================================" << endl;
        cout << "Apakah ingin bermain lagi?" << endl;
        cout << "Masukkan Y untuk Ya" << endl;
        cout << "Masukkan N untuk Tidak" << endl;
        cout << "Pilihan: ";

        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');


    cout << "\n=================================" << endl;
    cout << "Terima kasih telah bermain!" << endl;
    cout << "Sampai jumpa lagi!" << endl;
    cout << "=================================" << endl;

    return 0;
}
