# Bismillahirrahmanirrahim

## Janji
Saya Muhammad Naufal Arbanin dengan NIM 2310850 mengerjakan soal Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Diagram
![Image](https://github.com/user-attachments/assets/f1e6dd11-aa86-4136-8ff7-f9d6a5dd12e3)

## Penjelasan Kodingan / Program

#### 1. Kelas dan Hubungannya
a. Clothing (Superclass / Parent Class)
- Atribut:
    - brand: Merek pakaian (string)
    - size: Ukuran pakaian (string)
    - price: Harga pakaian (float)
- Metode: 
  - Getter dan setter untuk atribut di atas.
  - display(): Menampilkan informasi pakaian.

b. Pants, Tshirt, Shirt (Subclass / Child Class dari Clothing)
- Pants 
  - Atribut: fit_type (jenis potongan celana, misalnya "Slim Fit").
  - Metode: Getter dan setter untuk fit_type.

- Tshirt
  - Atribut: sleeve_type (jenis lengan kaos, misalnya "Short Sleeve").
  - Metode: Getter dan setter untuk sleeve_type.

- Shirt
  - Atribut: material (bahan kemeja, misalnya "Cotton").
  - Metode: Getter dan setter untuk material.

c. Store (Komposisi dengan Clothing)

- Atribut:
  - inventory: List yang menyimpan objek Clothing.
- Metode:
  - add_clothing(clothing: Clothing): Menambahkan pakaian ke dalam daftar.
  - display_inventory(): Menampilkan daftar pakaian yang tersedia di toko.

#### 2. Hubungan Antar Kelas
a. Inheritance (Pewarisan)

- Pants, Tshirt, dan Shirt merupakan subclass dari Clothing (digambarkan dengan panah kosong). Ini berarti semua metode dan atribut dalam Clothing diwarisi oleh Pants, Tshirt, dan Shirt.

b. Composition (Komposisi)

- Store memiliki daftar pakaian (inventory), yang berarti Store berisi banyak Clothing (ditunjukkan dengan panah wajik hitam).
Jika Store dihapus, objek pakaian dalam daftar tidak ikut terhapus.

## Dokumentasi
### Dokumentasi C++
![SS-1](https://github.com/Abangnin/TP3DPBO2025C2/blob/main/C%2B%2B/Dokumentasi/cepepe.jpg)

### Dokumentasi Python
![SS-1](https://github.com/Abangnin/TP3DPBO2025C2/blob/main/PYTHON/Dokumentasi/python.jpg)
