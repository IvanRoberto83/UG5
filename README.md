#UG6-PrakTekkom-C-Prog-Part2
ug 6 prak tekkom about introduction C programming part 2

## 1. Kalkulator Sederhana (Score 100)
Dalam file bernama kalkulator.c, buatlah program dalam C untuk melakukan perhitungan 2 buah bilangan yang diinputkan oleh user menggunakan function. 

Contoh : 
```c
$ make kalkulator                                                                    
$ ./kalkulator                                                                       
================================
     KALKULATOR SEDERHANA
================================
Pilih Operator (+, -, *, /): +
Bilangan Pertama: 6
Bilangan Kedua: 3
Hasilnya: 9.00
$
```

Program akan menampilkan tulisan **operator salah** jika operator yang dipilih tidak ada dalam daftar. 

Contoh : 
```c
$ make kalkulator                                                                    
$ ./kalkulator                                                                       
================================
     KALKULATOR SEDERHANA       
================================
Pilih Operator (+, -, *, /): a
Bilangan Pertama: 7
Bilangan Kedua: 6
Operator Salah.
$
```

TIPS <br/>
Anda bisa menggunakan Perintah **Switch.. Case** untuk membuat pilihan operator. 
Syntax : 
```c
switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

