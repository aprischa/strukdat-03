/*
 Nama program : exercise 01
 Nama         : Aprischa Nauva
 NPM          : 140810180063
 Tangal buat  : 12 Maret 2019
 Deskripsi    : exercise 01
 */

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

typedef struct{
    float p;
    float l;
} segiempat;

void input(segiempat *s){
    cout << "Masukkan data : " << endl;
    cout << " -> Panjang : ";
    cin >> s->p;
    cout << " -> Lebar : ";
    cin >> s->l;
    
}

float keliling(segiempat s){
    return(2*(s.p+s.l));
}

float luas(segiempat s){
    return(s.p*s.l);
}

float diagonal(segiempat s){
    return(sqrt(s.p*s.p+s.l*s.l));
}

void print(segiempat s){
    cout << "=======================================" << endl;
    cout << " -> Keliling : " << keliling(s) << endl;
    cout << " -> Luas     : " << luas(s) << endl;
    cout << " -> Diagonal : " << diagonal(s) << endl;
}
int main()
{
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
    return 0;
}

