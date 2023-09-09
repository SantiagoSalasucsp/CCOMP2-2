#include <iostream>

using namespace std;

void coktail(int* ini, int* fin) {
    int camb = 10;
    int k = 0;
    int l = 0;
    while (camb > 0 || ini>fin) {
        camb = 0;
        int* p = ini;
        int* q = fin;
        if (l % 2 == 0) {
            for (p; p < fin;p ++) {
                if (*p > *(p + 1)) {
                    int res = *p;
                    cout << res << endl;
                    *p = *(p + 1);
                    cout << *p << endl;
                    *(p + 1) = res;
                    camb++;
                    l++;
                }
            }
            fin--;
        }
        else {
            for (fin; fin == ini; fin--) {
                if (*fin < *fin -1) {
                    int res = *fin;
                    *fin = *(fin-1);
                    *(fin - 1) = res;
                    camb++;
                    l++;
                }
            }

        }
    }


}

void print(int* x) {
    for (int h = 0; h < 7; h++) {
        cout << *(x + h)<<" ";
    }
}

int main()
{
    int A[7] = { 5,8,2,0,10,7,1 };
    cout << *A << endl;
    cout << *(A + 6) << endl;
    coktail(A, (A + 6));
    //print(A);

    
}
