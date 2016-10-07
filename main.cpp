#include <iostream>
#include "mathHeader.h"

//using namespace std; //sollte ned aussen verwendet werden

int main(){

//using namespace innerhalb einer Funktion ist ok
using namespace std;

// Beschreibende Namen wählen
int zaehler;
int nenner;

    cout << "Gib den Zaehler ein: ";
    cin >> zaehler;
    cout << endl << "Gib den Nenner ein: ";
    nenner=getNenner();

    cout << "Ergebniss: " << div(zaehler,nenner) << endl << "Rest: " << zaehler%nenner << endl;

cin.clear();
cin.ignore(32767, '\n');
cin.get();

    return 0;
}
