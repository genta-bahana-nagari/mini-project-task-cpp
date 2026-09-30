# Game Tebak Angka

Program sederhana berbasis C++ untuk permainan **Tebak Angka**. Pemain harus menebak angka rahasia antara **1 sampai 100** dengan maksimal **5 percobaan**.

## Fitur

* Menghasilkan angka rahasia secara acak.
* Pemain memiliki maksimal 5 percobaan.
* Memberikan petunjuk jika tebakan terlalu kecil atau terlalu besar.
* Memvalidasi input agar berada dalam rentang 1–100.
* Menyimpan dan menampilkan riwayat tebakan.
* Menampilkan status permainan: menang atau gagal.
* Pemain dapat memilih untuk bermain kembali.

## Cara Menjalankan

Pastikan compiler C++ seperti **G++** sudah terpasang.

### Compile

Linux/macOS:
```bash
g++ main.cpp -o tebak-angka.out
```
Windows:
```bash
g++ main.cpp -o tebak-angka.exe
```

### Jalankan

Linux/macOS:

```bash
./tebak-angka.out
```

Windows:

```bash
tebak-angka.exe
```

## Cara Bermain

1. Program akan menghasilkan angka rahasia antara 1–100.
2. Masukkan tebakan ketika diminta.
3. Program akan memberikan petunjuk:

   * **Tebakan terlalu kecil** jika angka yang dimasukkan lebih kecil dari angka rahasia.
   * **Tebakan terlalu besar** jika angka yang dimasukkan lebih besar dari angka rahasia.
4. Tebakan yang valid akan dihitung sebagai satu percobaan.
5. Pemain memiliki maksimal **5 percobaan**.
6. Setelah permainan selesai, riwayat tebakan akan ditampilkan.
7. Pemain dapat memilih `Y` untuk bermain kembali atau `N` untuk keluar.

## Struktur Program

Program terdiri dari beberapa bagian utama:

* `tampilkanRiwayat()`
  Menampilkan seluruh tebakan yang telah dilakukan.

* `mulaiGame()`
  Menjalankan satu sesi permainan, termasuk proses input, validasi, pemberian petunjuk, dan pengecekan kemenangan.

* `main()`
  Menjalankan program utama dan mengatur fitur bermain kembali.

## Teknologi

* **Bahasa:** C++
* **Library:** `<iostream>`, `<cstdlib>`, `<ctime>`

## Lisensi

Project ini dibuat untuk keperluan pembelajaran dan latihan pemrograman C++.