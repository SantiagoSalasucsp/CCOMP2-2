#include <iostream>
#include <string>
using namespace std;

struct nodo{
    int cont=0;
    int valor;
    nodo* pun;
    nodo*fin;
    nodo*ini;
    void push(nodo* ini,int a){
        this->ini=ini;
        for(int x=0;x<=cont;x++){
           fin=this->ini; 
           this->ini=this->fin;
           fin->pun=new nodo;
        }
        cont++;
        fin->pun->valor=a;
        fin->pun->pun=nullptr;
    }


};

struct nodo2{
    int valor;
    nodo2* pun;
    nodo2* fin;
    fin=pun;
    void push(){
        
        pun=new nodo2;
        fin=pun;

    }
};


int main(){

    nodo* head;

    head=new nodo;

    head->push(head,1);
    head->push(head,2);
    head->push(head,3);

}