#include <iostream>
using namespace std;

template <class T>
struct Nodo
{
    T valor;
    Nodo* next;
    Nodo<T>(T v, Nodo<T>* n = NULL)
    {
        valor = v;
        next = n;
    }
};

struct Par
{
    bool operator()(int n)
    {
        return n % 2 == 0;
    }
};

template<class T>
struct Lista
{
    Nodo<T>* Head = NULL;
    void add(T valor);
    void print();
    ~Lista();
};

template<class T>
void Lista<T>::add(T valor)
{
    Head = new Nodo<T>(valor, Head);
}

template<class T>
void Lista<T>::print()
{
    cout << "Head->";
    for (Nodo<T>* p = Head; p; p = p->next)
        cout << p->valor << "->";
    cout << "NULL\n";
}

template<class T>
Lista<T>::~Lista()
{
    Nodo<T>* tmp;
    while (Head)
    {
        tmp = Head;
        Head = Head->next;
        delete tmp;
    }
}

template<class T, class G>
void split(Nodo<T>*& H1, Nodo<T>*& H2, G cumple)
{
    Nodo<T>* tmp1 = H1;
    Nodo<T>* tmp2 = H2;
    Nodo<T>* t1_1 = H1;
    bool h1_p = 1;

    while (tmp1)
    {
        if (h1_p)
        {
            if (cumple(tmp1->valor))
            {
                t1_1 = tmp1;
                tmp1 = tmp1->next;
            }
            else
            {
                if (H2 == NULL)
                {
                    H2 = tmp1;
                    tmp2 = tmp1;
                    tmp1 = tmp1->next;
                    H1 = tmp1;
                    t1_1 = tmp1;
                    tmp2->next = NULL;
                }
                else
                {
                    tmp2->next = tmp1;
                    tmp1 = tmp1->next;
                    H1 = tmp1;
                    t1_1 = tmp1;
                    tmp2 = tmp2->next;
                    tmp2->next = NULL;
                }
            }
            h1_p = 0;
        }
        else
        {
            if (cumple(tmp1->valor))
            {
                tmp1 = tmp1->next;
                t1_1 = t1_1->next;
            }
            else
            {
                if (H2 == NULL)
                {
                    H2 = tmp1;
                    tmp2 = tmp1;
                    t1_1->next = tmp1->next;
                    tmp1 = tmp1->next;
                    tmp2->next = NULL;
                }
                else
                {
                    tmp2->next = tmp1;
                    t1_1->next = tmp1->next;
                    tmp1 = tmp1->next;
                    tmp2 = tmp2->next;
                    tmp2->next = NULL;
                }
            }
        }
    }
}

int main()
{

    
    int arr[]={1,2,3,4,5,6};
    

    Lista<int>H1;
    for(int x=0;x<6;x++){
        H1.add(arr[x]);
    }
    H1.print();

    Lista<int>LE2;
    LE2.print();
    Par par;
    split(H1.Head, LE2.Head, par);
    H1.print();
    LE2.print();
}