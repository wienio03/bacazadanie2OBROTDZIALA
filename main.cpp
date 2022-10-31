//Wienczyslaw Wlodyga
using namespace std;
#include <iostream>
// VARIABLES
int  elementIndex, sessions, shift, invIndex, shiftIndex, switchIndex;
int length, invLength, shiftLength, switchLength;
char operation;
// MAIN
int main() {
    cout << "Podaj liczbe sesji:";
    cin >> sessions;
    int i = 0;
    while (i < sessions) {
        cout << "Podaj rozmiar:";
        cin >> length;
        int tab[length];
        int j = 0;
        while (j < length) {
            cin >> tab[j];
            j++;
        }
        j = 0;
        while (j < length) {
            cout << tab[j] << " ";
            j++;
        }

        cout << endl;
        cout << "Podaj parametry obrotu:";
        cin >> elementIndex >> invLength;
        int b=0;
        while ( b < (length/invLength)){
            if (elementIndex!=length) elementIndex=elementIndex%length;
            else elementIndex=0;
            int flIndex = elementIndex + invLength-1;
            if (flIndex!=length) flIndex = flIndex%length;
            else flIndex=0;
            int k = elementIndex;
            int n = flIndex;
            int m =0;
            while (m < (invLength/2)){
                if (k!=length) k=k%length;
                else k=0;
                if (n!=length) n=n%length;
                else n=0;
                swap(tab[k],tab[n]);
                k++;
                n--;
                m++;
            }

            b++;
            elementIndex=elementIndex+invLength;
        }


        i++;
        j = 0;
        while (j < length) {
            cout << tab[j] << " ";
            j++;
        }
    }

    return 0;

}
