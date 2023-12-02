#include <iostream>

using namespace std;


template<class T>
struct nodo{
    T valor;
    nodo<T>* next;
    nodo<T>* prev;
    nodo(T v, nodo<T>* n){
        valor = v;
        next = n;
    }
};


template<class T>
class LE{
    //nodo<T>*head=NULL;
    public:
        nodo<T>*head=NULL;
        void add(T valor);
        void del(T valor);
        bool find(nodo<T>*&pos);
        void print();
        ~LE();

       
};


template<class T>
bool LE<T>::find(nodo<T>*&pos){
    pos=NULL;
    nodo<T>*p=head;
    for(; p ;pos=p,p=p->next);

    
    return true;
   

}




template<class T>
void LE<T>::add(T valor){
    nodo<T>*pos;
    find(pos);
    
        if(!pos)
            head=new nodo<T>(valor, head);
        else
            pos->next=new nodo<T>(valor,pos->next);
}


template<class T>
void LE<T>::del(T valor){
    
    nodo<T>*pos,*tmp;
    if(find(valor,pos)){
        if(!pos){
            tmp=head;
            head=head->next;
        }
        else {
            tmp=pos->next;
            pos->next=pos->next->next;
        }
        delete tmp;
    }
}

template<class T>
void LE<T>::print(){
    cout<<"Head->"; 
    for(nodo<T>*p=head;p;p=p->next){
        cout<<p->valor<<"->";
    }
    cout<<"NULL";
    
}



template<class T>
LE<T>::~LE(){

}




template<class T,class O>
void split (nodo<T>*&h1,nodo<T>*&h2,O cumple){
    nodo<T>*tmp1=h1;
    nodo<T>*z1=NULL;
    nodo<T>*tmp2=h2;
    while(tmp1){

        if(cumple(tmp1->valor)){
            //z1->next=tmp1;
            if(!(z1)){
                z1=tmp1;
                tmp1=tmp1->next;
                continue;
            }
            else{
                z1->next=tmp1;
                z1=tmp1;
                tmp1=tmp1->next;
            }
        }

        else{

            if(tmp1==h1 && tmp2==h2 && !(h2)){
            h2=h1;
            h1=h1->next;
            tmp1=h1;
            tmp2=h2;
            continue;
            }

            if(tmp2==h2 && !(h2)){
                h2=tmp1;
                //z1->next=tmp1->next;
                tmp1=tmp1->next;
                tmp2=h2;
                continue;
            }

            if(tmp1==h1){
                tmp2->next=h1;
                h1=h1->next;
                //z1=tmp1;
                tmp1=h1;
                tmp2=tmp2->next;
                continue;
            }


            if(tmp2==h2){
                tmp2->next=tmp1;
                tmp2=tmp2->next;
                tmp1=tmp1->next;
            }


            if(tmp1 != h1){
                tmp2->next=tmp1;
                /*z1->next=tmp1->next;
                z1=tmp1;
                tmp1=tmp1->next;
                */
                tmp1=tmp1->next;
                tmp2=tmp2->next;

                continue;
            }

        }

      
   

    }

    tmp2->next=NULL;
    z1->next=NULL;

           
}

struct fun
{
    bool operator()(int val){
        if(val%5 == 0)
            return 1;
        else
            return 0;
    }
};



int main(){


    int arr[]={1,2,3,4,5,6};
    

    LE<float>H1;
    for(int x=0;x<6;x++){
        H1.add(arr[x]);
    }

    LE<float>H2;

    fun A;
    //H1.print();
    split(H1.head,H2.head,A);

    H1.print();
    cout<<endl;
    H2.print();

}