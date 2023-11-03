#include <iostream>

using namespace std;


template<class T>
struct nodo{
    T valor;
    nodo<T>* next;
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
        bool find(T valor, nodo<T>*&pos);
        void print();
        ~LE();
};


template<class T>
bool LE<T>::find(T valor, nodo<T>*&pos){
    pos=NULL;
    nodo<T>*p=head;
    for(; p && p->valor<valor;pos=p,p=p->next);

    if(p && p->valor==valor)
        return true;
    else
        return false;

}




template<class T>
void LE<T>::add(T valor){
    nodo<T>*pos;
    if(!find(valor,pos))
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



template<class T>
void merch(LE<T>&H1,LE<T>&H2){

    
    nodo<T>*tmp1=H1.head;
    nodo<T>*z1=H1.head;
    nodo<T>*tmp2=H2.head;
    nodo<T>*z2=H2.head;
    
    bool con=0;
    
    while(tmp1,tmp2){
        cout<<"1"<<endl;
        cout<<"tmp1->val= "<<tmp1->valor<<" tmp2->val="<<tmp2->valor<<endl;
        if(tmp2->valor<tmp1->valor)
        {
            
            if(tmp1==H1.head && tmp2==H2.head){
                cout<<"si es igual"<<endl;
                H1.head=tmp2;
                tmp2=tmp2->next;
                z2->next=tmp1;
                con=0;
                continue;
            }

            if(!(con)){
                z2->next=tmp2;
                z2=tmp2;
                tmp2=tmp2->next;
                z2->next=tmp1;
                con=0;
            }
            if(con){
                z1->next=tmp2;
                z2=tmp2;
                tmp2=tmp2->next;
                z2->next=tmp1;
                con=0;

            }
        }

        else{
            z1=tmp1;
            tmp1=tmp1->next;
            con=1;
        }

        if(!(tmp1)){
            z1->next=tmp2;
            break;
        }

    }

    H2.head=NULL;

}





int main(){
    int r=8;
    int u=5;
    int arr[]={3,6,7,10,11,13,20,23};
    int arr2[]={1,4,8,12,15};

    LE<int>H1;
    for(int x=0;x<r;x++){
        H1.add(arr[x]);
    }

    LE<int>H2;
    for(int x=0;x<u;x++){
        H2.add(arr2[x]);
    }

    H1.print();
    cout<<endl;
    H2.print();
    cout<<endl;
    cout<<"--------"<<endl;
    merch(H1,H2);


    H1.print();
    cout<<endl;
    H2.print();
    cout<<endl;
    






}