#include<iostream>
#include<array>
#include<typeinfo>
#include "header.h"

using namespace std;


void print(char const* myString){
    printf("String %s\n", myString);
}

void print(int myInt){
    printf("My int is %d", myInt);
}


int* getArray(){
    // int str = 5;
    // const int arr[str];
    // arr[0] = 0;
    // arr[1] = 1337;
    // return arr;
}

void arrayFunciton(){
    //    int* test = getArray();
    //    int gunnar[5] = {1,2,4,5};
    //    array<int,5> num = {1,2,4,5};
    //    cout << test[0] << " : " << endl;
    //    cout << num.size() << " : " << endl;
}

void callRef(int& a, int& b){
    cout << a << " : " << b << endl;
}

void callPointer(int* a, int* b){
    cout << *a << " : " << *b << endl;
}

void callValue(int a, int b){
    cout << a << " : " << b << endl;
}

int main(){
    int a,b;
    a = 5;
    b = 10;
    char as = 'k';
    int* c;
    c = &a;

    int arr[5] = {1,2,3,4,5};

    cout << "type of int: " << typeid(a).name() << endl;
    cout << "type of char: " << typeid(as).name() << endl;
    cout << "type of pointer: " << typeid(c).name() << endl;
    cout << "type of pointer address value: " << typeid(*c).name() << endl;
    cout << "type of pointer address: " << typeid(&c).name() << endl;
    cout << "type of array: " << typeid(arr).name() << endl;
    cout << "array address: " << &arr << " and " << arr << endl;      	            // Skriver ut minneadressen 2 ganger
    cout << "first arr object: " << *arr << " and " << arr[0] << endl;    			// Skriver ut det samme (første objekt i lista)
    cout << "array har lengde: " << sizeof(arr) << endl;                           // Skriver ut minneadressen
    cout << "array peker har lengde: " << sizeof(*arr) << endl;                    // Skriver ut verdien på den første plassen (addressen)
    cout << "array har egentlig lengde: " << (sizeof(arr)/sizeof(*arr)) << endl;   // 5

}


void funWithPointers(){
    // int x = 10;         // Variabeldeklarasjon
    // int* frank = new int(120); // Lag en peker 'frank', gi den en addresse og sett verdien på addressen til 120

    // int y;              // variabel som ikke har noen verdi
    // int* peker;	        // peker som ikke har noen addresse
    // peker = &x;	        // PEK peker mot verdien på addressen til X

    // cout << peker << ": " << *peker << endl;

    // *peker = 5;

    // cout << peker << ": " << *peker << endl;

    // cout << frank << ": " << *frank << endl;
    // frank = peker;
    // cout << frank << ": " << *frank << endl;

    // cout << x << ": " << x << endl;

    // int a = 90;
    // cout << (void*)&x << ": " << x << endl;
    // cout  << "------------------" << endl;
    // // printf("%p\n",(void*)&a);
    // cout << peker << ": " << *peker << endl;

    // int k,j;
    // cin >> k >> j;
    // // print(k);
    // // print(*k);

    // print("GUNNAR");
}