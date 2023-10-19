#include <iostream>

using namespace std;

struct nodo{
    int cont=0;
    int valor;
    nodo* pun;
    nodo*fin;
    nodo*ini;
    void push(nodo* ini,int a){
        if(cont==0)
            this->ini=ini;

        for(int x=0;x<=cont;x++){
            if(cont==0){
                fin=this->ini; 
                this->ini=this->fin;
            }
           fin->pun=new nodo;
        }
        cont++;
        fin->pun->valor=a;
        fin->pun->pun=nullptr;
        fin=fin->pun;
    }

    void borrar(){
        if(cont==0){
            cout<<"estas en el primer elemento"<<endl;
        }
        else{
            delete (fin->pun);
        }
    }


};

/*struct nodo2{
    int valor;
    nodo2* pun;
    nodo2* fin;
    fin=pun;
    void push(){
        
        pun=new nodo2;
        fin=pun;

    }
};
*/

int main(){

    nodo* head;

    head=new nodo;

    head->push(head,1);
    head->push(head,2);
    head->push(head,3);
    head->borrar();
    head->push(head,3);

}