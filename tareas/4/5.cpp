#include <iostream>

using namespace std;



template <class T>
struct asc{

    bool operator()(T x, T y){
        return x<y;
    }


};

template <class T>
struct des{

    bool operator()(T x, T y){

        return x>y;


    }




};





template<class T>
struct nodo{
    T valor;
    nodo<T>* next;
    nodo<T>* prev;
    nodo(nodo<T>* n,nodo<T>* p, T v){
        valor = v;
        next = n;
        prev = p;
    }
};






template<class T, class O>
class LEC{
    //nodo<T>*head=NULL;
    public:
        O op;
        nodo<T>*head=NULL;
        nodo<T>*fin=NULL;
        void add(T valor);
        void del(T valor);
        bool find(T valor, nodo<T>*&pos);
        void printder();
        void printizq();
        void josefos(int k);
        ~LEC();
};


template<class T, class O>
bool LEC<T,O>::find(T valor, nodo<T>*&pos){
    O op;
    pos=head;
    nodo<T>*p=head;
    //for(; p && p->next!=head && op(p->valor,valor) && p!=p->next;pos=p,p=p->next);

    while(p && (p->next!=head) && !op(p->valor,valor)){
        pos=p;
        p=p->next;
    }

    if(p && p->valor==valor){

        pos=p;
        return true;
    }
    else{

        pos=p;
        return false;
    }
}




template<class T,class O>
void LEC<T,O>::add(T valor){


    nodo<T>*pos=NULL;

    
    if(!head){
        head= new nodo<T>(NULL,NULL,valor);
        head->next=head;
        head->prev=head;
        //break;
    }

    
  
    if(!find(valor,pos)){
    for(int x=0;x<=1;x++){
        cout<<"entro1 "<<pos->valor<<endl;

        /*if(!head){
        head= new nodo<T>(NULL,NULL,valor);
        head->next=head;
        head->prev=head;
        break;
        }*/

        /*if(op(valor,head->valor)){
            nodo<T>*tmp1=head;
            head=new nodo<T>(head,head->prev,valor);
            tmp1->prev=head;
        }*/


        while(!op(pos->valor,valor) && pos->next!=head){
            pos->prev=new nodo<T>(pos->prev->next,pos->prev,valor);
            //break;
        }

        if(pos->valor==head->valor){
            nodo<T>* tmp1=head;
            head=new nodo<T>(head,head->prev,valor);
            tmp1->prev=head;
            head->prev->next=head;
            break;
        }

        /*while(!op(pos->valor,valor)){
            pos->prev=new nodo<T>(pos->prev->next,pos->prev,valor);
            //break;
        }*/



        if(pos->next==head){
            cout<<"entro"<<endl;
            pos->next=new nodo<T>(head,pos,valor);
            head->prev=pos->next;
            break;
        }

        /*if(pos==head){
            nodo<T>* tmp1=head;
            head=new nodo<T>(head,head->prev,valor);
            tmp1->prev=head;
            head->prev->next=head;
            break;
        }*/

        if(pos !=head && pos->next!= head && head){
            pos->next=new nodo<T>(pos->next,pos,valor);
            pos->next->next->prev=pos->next;
            break;
        }
    }
    }

            
        
        

}


template<class T, class O>
void LEC<T,O>::del(T valor){
    
/*   if(head== NULL){
        return ;
    }
    nodo<T>*tmp=head;
    do{
        
     if(tmp->valor ==valor){
        head->prev->next =head->next;
        head->next->prev=head->prev;
        head=head->next;
        if(head== tmp){
            delete tmp;
            head =NULL;
            return ;
        }
     }
        if(tmp->next != NULL){
            tmp->next->prev = tmp -> prev;
        }
        if ( tmp->prev != NULL){
            tmp->prev->next= tmp->next;
        }

        delete tmp;
        break;
    

    }*/
}

template<class T,class O>
void LEC<T,O>::printder()
{
  nodo<T>* p = head;
  cout << "Head->";
  if(p)
    {
      for(;p->next != head; p = p->next) {
        cout<<p->valor<<"->";
      }
      cout<<p->valor<<"->";
    }
  cout << "Head" << endl;  
}


template <class T, class O>
void LEC<T, O>::printizq() {
  nodo<T>* p = head->prev; // Start from the last node
  cout << "Head->";
  if (p != nullptr) {
    for (; p != head; p = p->prev) {
      cout << p->valor << "->";
    }
    cout << p->valor << "->"; // Print the last node's value
  }
  cout << "Head" << endl;
}




template<class T,class O>
LEC<T,O>::~LEC(){

}

template<class T, class O>
void LEC<T,O>::josefos(int k) {
    nodo<T>*tmp1=head;
    while(tmp1){
        for(int x=1;x<k;x++){
            tmp1=tmp1->next;
        }
        if(tmp1==head){
            nodo<T>*tmp2=tmp1;
            head=head->next;
            head->prev=tmp1->prev;
            tmp1->prev->next=head;
            cout<<"Ultimas palabras "<<tmp1->valor<<endl;
            delete tmp2;
            tmp1=tmp1->next;
            continue;
        }
        else{
            nodo<T>*tmp2=tmp1;
            tmp1->prev->next=tmp1->next;
            tmp1->next->prev=tmp1->prev;
            cout<<"Ultimas palabras "<<tmp1->valor<<endl;
            delete tmp2;
            tmp1=tmp1->next;
        }
        this->printder();
    }
}



int main(){



    LEC<int,des<int>> h1;
    
    h1.add(6);
    h1.printder();
    cout<<endl;

    h1.add(5);
    h1.printder();
    cout<<endl;

    h1.add(4);
    h1.printder();
    cout<<endl;

    h1.add(3);
    h1.printder();
    cout<<endl;

    h1.add(2);
    h1.printder();
    cout<<endl;

    h1.add(1);
    
    h1.printder();

    h1.printizq();

    int k=3;
    h1.josefos(k);
}