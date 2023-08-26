#include <iostream>
#include <string>

using namespace std;

int cifras(int x) {

    return 0;
}

string unacifra(int x) {
    if (x == 0)
        return " cero";
    if (x == 1)
        return " uno";
    if (x == 2)
        return " dos";
    if (x == 3)
        return " Tres";
    if (x == 4)
        return " cuatro";
    if (x == 5) 
        return " cinco";
    if (x == 6)
        return " seis";
    if (x == 7)
        return " siete";
    if (x == 8)
        return " ocho";
    if (x == 9) 
        return " NUeve";
    
}

string doscifras(int x) {

    if (x == 10)
        return "dies";
    if (x >= 11 || x <= 15) {
        if (x == 11)
            return "once";
        if (x == 12)
            return "Doce";
        if (x == 13)
            return "trece";
        if (x == 14)
            return "catorce";
        if (x == 15)
            return "quince";
    }
    else {
        x = x / 10;
        return "diez y " + unacifra(x);
    }
}

int main() {

    doscifras(16);

    




}