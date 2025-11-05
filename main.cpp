//Exercice1
//1.1

#include <iostream>
using namespace std;
/*
int main() {
    int temp_processeur = 45;
    int temp_carte_graphique = 38;
    int seuil_alerte = 70;

    cout << "Température processeur : " << temp_processeur << "°C" << endl;
    cout << "Température carte graphique : " << temp_carte_graphique << "°C" << endl;
    cout << "Seuil d'alerte : " << seuil_alerte << "°C" << endl;

    return 0;

}
*/

//Exercice2
#include <iostream>
using namespace std;

int main() {
    double R1 = 220;
    double R2 = 330;
    double R3 = 470;

    cout << "Résistance R1 = " << R1 << " ohms" << endl;
    cout << "Résistance R2 = " << R2 << " ohms" << endl;
    cout << "Résistance R3 = " << R3 << " ohms" << endl;

    double R_serie = R1 + R2 + R3;
    cout << "\nRésistance équivalente en série : " << R_serie << " ohms" << endl;

    double R_parallele = (R1 * R2) / (R1 + R2);
    cout << "Résistance équivalente en parallèle (R1 // R2) : " << R_parallele << " ohms" << endl;

    const int TENSION_ALIM = 5;  // Tension d'alimentation en volts

    //int courant_serie = TENSION_ALIM / R_serie;

    cout << "\nTension d'alimentation : " << TENSION_ALIM << " V" << endl;
    cout << "Courant dans le circuit série : " << courant_serie << " A" << endl;

    return 0;
}
