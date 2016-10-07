#include <iostream>
#include "mathHeader.h"

//Dividiert zwei Zahlen
int div(int i, int j){

int k=i/j;
return k;

}

//Fordert Wert für y an und checkt obs eh ned 0 is
int getNenner(){
/*Zuerst a vom user abfragen
 *Dann schauen obs null is
 *wenn null dann rekursiv wiederholen
 */

 using namespace std;

    int a;
    cin >> a;

    if(a==0){
        cout << "Thou shall not divide by 0!" << endl << "Enter new Number: ";
        a=getNenner();
    }
    return a;
}
