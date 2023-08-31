#include <iostream>
#include <string>

using namespace std;

int cifras(int x) {
    int j=1;
    int k=1;
    int y=0;
    
    if (x==0) {
        return 1;  
    }
    
    while (x!= 0) {
        x /= 10;
        y++;
    }
    
    return y;

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

    //bucle para ver cuantas veces 10 hay en el numero de 2 cifras
    if(x>=16 || x<=19) {
        x = x - 10;
        return "diez y " + unacifra(x);
    }
}

int main() {

    //doscifras(16);

    cout<<cifras(10)<<endl;

    cout<<cifras(100)<<endl;

    cout<<cifras(12)<<endl;

    cout<<doscifras(12)<<endl;

    cout<<unacifra(4)<<endl;

    cout<<doscifras(18)<<endl;

    




}