# TUBES OO_1

File ini merupakan manual untuk penggunaan program kalkulator 

## Pilihan Operator
### 1. Operator Aritmatika

Operator aritmatika terdiri dari operator biner (+, -, *, /) dan uner (~, -).
Pada operator uner '~' digunakan untuk memperoleh nilai negatif dari sebuah operasi 
sementara '-' harus melekat pada bilangan untuk menunjukkan bahwa bilangan tersebut 
bernilai negatif.
Contoh : 
```
~ ( 1 + 1 + 2 ) => -4
-4 * 20 + 80 => 0
```

### 2. Operator Logika

Operator logika terdiri dari operator biner (and, or) dan uner (not, !).
Bilangan logika yang valid adalah : true, false, nottrue, notfalse, !1, !0, 1, 0.
Contoh :
```
not true => false
not ( 1 and false ) => true
! ( false and 1 ) => true
```

## Pilihan Ekspresi

### 1. Prefiks

contoh :
```
* + 1 2 + 5 10 => 45
+ - 8 10 5 => 3
```
  
### 2. Infiks

contoh :
```
2 * ( 2 + 5 ) + 7 => 28
5 + 10 * 2 => 25
```

### 3. Postfiks

contoh :
```
3 2 + 10 5 - * => 25
3 5 6 + + => 14
```

## Pilihan Bilangan
Terdapat dua pilihan bilangan yang dapat digunakan untuk operator aritmatika yaitu :
### 1. Bilangan Arab
Bilangan arab yang dapat ditangani oleh program adalah -2^31 sampai 2^31 - 1
### 2. Bilangan Romawi
Nilai maksimal bilangan romawi adalah 4000 (MMMM)
