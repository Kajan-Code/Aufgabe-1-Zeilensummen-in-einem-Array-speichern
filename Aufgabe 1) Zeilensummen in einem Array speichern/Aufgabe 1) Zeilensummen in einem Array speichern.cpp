// Aufgabe 1) Zeilensummen in einem Array speichern.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
const int Spalte = 4;

void berechneZeilensummen(int matrix[][Spalte], int Reihe) {
    int summe = 0, lastPos = Reihe - 1;
    cout << "Ergebnis: ";
    for (int i = 0; i < Reihe; i++) {
        for (int j = 0; j < Spalte; j++) {
            summe += matrix[i][j];
        }
        cout << summe;
        if (i < lastPos) {
            cout << ", ";
        }
    }
}

int main()
{
    const int Reihe = 3; 
    int matrix[Reihe][Spalte] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
    };
    berechneZeilensummen(matrix, Reihe);
}
