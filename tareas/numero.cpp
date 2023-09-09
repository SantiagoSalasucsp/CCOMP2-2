#include <iostream>
#include <string>

using namespace std;

int k=0;

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
        return "**";
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
    int j=0;
    int u=x;
    while(true){
        u=u-10;
        j++;
        if(u<10){
            break;
        }
    }

    if(j==1){
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
        if(x>=16 || x<=19) {
            x = (j*10);
            return "diez y " + unacifra(x);
        }
    }

    if(j==2){
        if(x==20)
            return "veinte";
        else{
            x=x-(j*10);
            return "veinti" + unacifra(x);
        }
    }

    if(j==3){
        if(x==30)
            return "treinta";
        else{
        x=x-(j*10);
        return "treinta y " + unacifra(x);
        }
    }

    if(j==4){
        if(x==40)
            return "cuarenta";
        else{
        x=x-(j*10);
        return "cuarenta y " + unacifra(x);
        }
    }


    if(j==5){
        if(x==50)
            return "cincuenta";
        else{
        x=x-(j*10);
        return "cincuenta y " + unacifra(x);
        }
    }


    if(j==6){
        if(x==60)
            return "sesenta";
        else{
        x=x-(j*10);
        return "sesenta y " + unacifra(x);
        }
    }


    if(j==7){
        if(x==70)
            return "setenta";
        else{
        x=x-(j*10);
        return "setenta y " + unacifra(x);
        }
    }


    if(j==8){
        if(x==80)
            return "ochenta";
        else{
        x=x-(j*10);
        return "ochenta y " + unacifra(x);
        }
    }


    if(j==9){
        if(x==90)
            return "noventa";
        else{
        x=x-(j*10);
        return "noventa y " + unacifra(x);
        }
    }
}

string trescifras(int x){
    int j=0;
    int u=x;
    while(true){
        u=u-100;
        j++;
        if(u<100){
            break;
        }
    }

    u=x-(j*100);



    

    if(j==1){

        if(u>=10){
            if(x==100)
                return "cien";
            else{
                return "ciento " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==100)
                    return "cien";
            else{
                return "ciento " +unacifra(u);
            }
        }
        
        }

    }


    if(j==2){

        if(u>=10){
            if(x==200)
                return "doscientos";
            else{
                return "doscientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==200)
                    return "doscientos";
            else{
                return "doscientos " +unacifra(u);
            }
        }
        
        }

    }

    if(j==3){

        if(u>=10){
            if(x==300)
                return "trescientos";
            else{
                return "trescientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==300)
                    return "trescientos";
            else{
                return "trescientos " +unacifra(u);
            }
        }
        
        }

    }


    if(j==4){

        if(u>=10){
            if(x==400)
                return "cuatrocientos";
            else{
                return "cuatrocientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==400)
                    return "cuatrocientos";
            else{
                return "cuatrocientos " +unacifra(u);
            }
        }
        
        }

    }

    if(j==5){

        if(u>=10){
            if(x==500)
                return "quinientos";
            else{
                return "quinientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==500)
                    return "quinientos";
            else{
                return "quinientos " +unacifra(u);
            }
        }
        
        }

    }


    if(j==6){

        if(u>=10){
            if(x==600)
                return "seiscientos";
            else{
                return "seiscientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==600)
                    return "seiscientos";
            else{
                return "seiscientos " +unacifra(u);
            }
        }
        
        }

    }

    if(j==7){

        if(u>=10){
            if(x==700)
                return "setecientos";
            else{
                return "setecientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==700)
                    return "setecientos";
            else{
                return "setecientos " +unacifra(u);
            }
        }
        
        }

    }


    if(j==8){

        if(u>=10){
            if(x==800)
                return "ochocientos";
            else{
                return "ochocientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==800)
                    return "ochocientos";
            else{
                return "ochocientos " +unacifra(u);
            }
        }
        
        }

    }

    if(j==9){

        if(u>=10){
            if(x==900)
                return "novecientos";
            else{
                return "novecientos " +doscifras(u);
            }
        }
    
        else {
            if(x>=10){
                if(x==900)
                    return "novecientos";
            else{
                return "novecientos " +unacifra(u);
            }
        }
        
        }

    }

}




string cuatrocifras(int x){
    int j=0;
    int u=x;
    while(true){
        u=u-1000;
        j++;
        if(u<1000){
            break;
        }
    }
    u=x-(j*1000);
    

    
    if(j==1){

        if(u>=100){
            if(x==1000)
                return "mil";
            else{
                return "mil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==1000)
                return "Mil";
            else
                return "mil " +doscifras(u);
        }

        if(u<10){
            if(x==1000)
                return "Mil";
            else 
                return "Mil " +unacifra(u);
        }
    }
     
    if(j==2){
        
        if(u>=100){
            if(x==2000)
                return "dosmil";
            else{
                return "dosmil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==2000)
                return "dosMil";
            else
                return "dosmil " +doscifras(u);
        }

        if(u<10){
            if(x==2000)
                return "dosMil";
            else 
                return "dosMil " +unacifra(u);
        }
    }
     
    if(j==3){
        
        if(u>=100){
            if(x==3000)
                return "tresmil";
            else{
                return "tresmil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==3000)
                return "tresMil";
            else
                return "tresmil " +doscifras(u);
        }

        if(u<10){
            if(x==3000)
                return "tresMil";
            else 
                return "tresMil " +unacifra(u);
        }
    }

     
    if(j==4){
        
        if(u>=100){
            if(x==4000)
                return "cuatromil";
            else{
                return "cuatromil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==4000)
                return "cuatroMil";
            else
                return "cuatromil " +doscifras(u);
        }

        if(u<10){
            if(x==4000)
                return "cuatroMil";
            else 
                return "cuatroMil " +unacifra(u);
        }
    }
     
    if(j==5){
        
        if(u>=100){
            if(x==5000)
                return "cincoMil";
            else{
                return "cincoMil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==5000)
                return "cincoMil";
            else
                return "cincoMil " +doscifras(u);
        }

        if(u<10){
            if(x==5000)
                return "cincoMil";
            else 
                return "cincoMil " +unacifra(u);
        }
    }
     
    if(j==6){
        
        if(u>=100){
            if(x==6000)
                return "seismil";
            else{
                return "seismil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==6000)
                return "seisMil";
            else
                return "seismil " +doscifras(u);
        }

        if(u<10){
            if(x==6000)
                return "seisMil";
            else 
                return "seisMil " +unacifra(u);
        }
    }
     
    if(j==7){
        if(u>=100){
            if(x==7000)
                return "sietemil";
            else{
                return "sietemil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==7000)
                return "sieteMil";
            else
                return "sietemil " +doscifras(u);
        }

        if(u<10){
            if(x==7000)
                return "sieteMil";
            else 
                return "sieteMil " +unacifra(u);
        }
    }
     
    if(j==8){
        if(u>=100){
            if(x==8000)
                return "ochomil";
            else{
                return "ochomil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==8000)
                return "ochoMil";
            else
                return "ochomil " +doscifras(u);
        }

        if(u<10){
            if(x==8000)
                return "ochoMil";
            else 
                return "ochoMil " +unacifra(u);
        }
    }
     
    if(j==9){
        if(u>=100){
            if(x==9000)
                return "nuevemil";
            else{
                return "nuevemil " + trescifras(u);
            }
        }

        if(u<100 && u>=10){
            if(x==9000)
                return "nueveMil";
            else
                return "nuevemil " +doscifras(u);
        }

        if(u<10){
            if(x==9000)
                return "nueveMil";
            else 
                return "nueveMil " +unacifra(u);
        }
    }  
}


string  cincocifras(int x){
    int j=0;
    int u=x;
    while(true){
        u=u-1000;
        j++;
        if(u<1000){
            break;
        }
    }
    u=x-(j*1000);
    cout<<"j es: "<<j<<endl;
    cout<<"u es: "<<u<<endl;


    if(u==0)
        return doscifras(j)+" mil";
    if(u>=100)
        return doscifras(j) + "Mil" + trescifras(u);
    if(u<=99 && u>=10)
        return doscifras(j)+"Mil"+doscifras(u);
    if(u<10 && u!=0)
        return doscifras(j)+"mil"+unacifra(u);
}

string seiscifras(int x){
    int j=0;
    int u=x;
    while(true){
        u=u-1000;
        j++;
        if(u<1000){
            break;
        }
    }
    u=x-(j*1000);
    cout<<"j es: "<<j<<endl;
    cout<<"u es: "<<u<<endl;


    if(u==0)
        return trescifras(j)+" mil";
    if(u>=100)
        return trescifras(j) + "Mil" + trescifras(u);
    if(u<=99 && u>=10)
        return trescifras(j)+"Mil"+doscifras(u);
    if(u<10 && u!=0)
        return trescifras(j)+"mil"+unacifra(u);



}

string sietecifras(int x){

    if(x==1000000)
        return "un millon";
    else
        return "el problema era hasta un millon xd";
}

int main() {

    /*doscifras(16);

    cout<<cifras(10)<<endl;

    cout<<cifras(100)<<endl;

    cout<<cifras(12)<<endl;*/


    //cout<<cuatrocifras(1000)<<endl;
    //cout<<cuatrocifras(1201)<<endl;
    /*cout<<cincocifras(90869)<<endl;
    cout<<cincocifras(78890)<<endl;
    cout<<cincocifras(12001)<<endl;
    cout<<cincocifras(45890)<<endl;*/
    //cout<<cincocifras(98372)<<endl;
    /*cout<<trescifras(382)<<endl;
    cout<<trescifras(493)<<endl;
    cout<<trescifras(514)<<endl;
    cout<<trescifras(645)<<endl;
    cout<<trescifras(776)<<endl;
    cout<<trescifras(867)<<endl;
    cout<<trescifras(928)<<endl;*/
    cout<<seiscifras(101010)<<endl;
    cout<<seiscifras(201101)<<endl;
    cout<<seiscifras(111111)<<endl;
    

   

    




}