//Wienczyslaw Wlodyga
using namespace std;
#include <iostream>
// VARIABLES
int  elementIndex, sessions, shift, invIndex, shiftIndex, switchIndex;
int length, invLength, shiftLength, switchLength, shiftpos;
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
        //INV
        cout << "Podaj parametry obrotu:" << endl;
        cin >> elementIndex >> invLength;
        int b = 0;
        while (b < (length / invLength)) {
            if (elementIndex != length) elementIndex = elementIndex %
                                                       length;    // WYKONA SIE TYLE RAZY , ILE MIESCI SIE TAKICH FRAGMENTÓW
            else elementIndex = 0;
            int flIndex = elementIndex + invLength - 1;
            if (flIndex != length) flIndex = flIndex % length;
            else flIndex = 0;
            int k = elementIndex;
            int n = flIndex;
            int m = 0;
            while (m < (invLength / 2)) {            //ODWRACANIE
                if (k != length) k = k % length;
                else k = 0;
                if (n != length) n = n % length;
                else n = 0;
                swap(tab[k], tab[n]);
                k++;
                n--;
                m++;
                if (n < 0) n = length - abs(n);
            }
            b++;
            elementIndex = elementIndex + invLength;
        }
        //SHIFT-
        cout << "Podaj parametry przesuniecia:" << endl;
        cin >> elementIndex >> shiftLength >> shiftpos;
        //SHIFT+
        if (shiftpos > 0) {
            int c = 0;
            while (c < (length / shiftLength)) {
                if (elementIndex < 0) elementIndex = length - (abs(elementIndex));
                if (elementIndex != length) elementIndex = elementIndex % length;
                else elementIndex = 0;
                int slIndex = elementIndex + shiftLength - 1;
                if (slIndex != length) slIndex = slIndex % length;
                else slIndex = 0;
                int x = elementIndex;
                int y = slIndex;
                int z = shiftpos;
                while (z > 0) {
                    int temp = tab[y];
                    int g = y;
                    int u = y - 1;
                    while (g != x) {
                        if (g < 0)g = length - (abs(g));
                        if (u < 0)u = length - (abs(u));
                        tab[g] = tab[u];
                        g--;
                        u--;
                    }
                    tab[x] = temp;
                    z--;
                }
                c++;
                elementIndex = elementIndex + shiftLength;
            }
        }

            //SHIFT-
            if (shiftpos < 0) {
                int c = 0;
                while (c < (length / shiftLength)) {
                    if (elementIndex < 0) elementIndex = length - (abs(elementIndex));
                    if (elementIndex != length) elementIndex = elementIndex % length;
                    else elementIndex = 0;
                    int slIndex = elementIndex + shiftLength - 1;
                    if (slIndex != length) slIndex = slIndex % length;
                    else slIndex = 0;
                    int x = elementIndex;
                    int y = slIndex;
                    int z = abs(shiftpos);
                    while (z > 0) {
                        int temp = tab[x];
                        int g = x;
                        int u = x+1;
                        while (g != y) {
                            if (g >= length)g = 0+abs(length-g);
                            if (u >= length)u = 0+abs(length-u);
                            tab[g] = tab[u];
                            g++;
                            u++;
                        }
                        tab[y] = temp;
                        z--;
                    }
                    c++;
                    elementIndex = elementIndex + shiftLength;
                }
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
