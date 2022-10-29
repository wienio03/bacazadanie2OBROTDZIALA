//Wienczyslaw Wlodyga
using namespace std;
#include <iostream>
// VARIABLES
int  elementIndex, sessions, shift, invIndex, shiftIndex, switchIndex;
unsigned int length, invLength, shiftLength, switchLength;
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
        cout << "Podaj indeks elementu:";
        cin >> elementIndex;
        if (elementIndex != length) elementIndex = elementIndex % length;
        else elementIndex = 0;
        cout << tab[elementIndex] << endl;
        cout << "Podaj indeks operacji (R lub C lub S)";
        // ---OPERATIONS---
        while (int k = 0 < 1) {
            //INVERT
            if (operation == 'R') {
                cin >> elementIndex >> invLength;


            }
            //SHIFT
            if (operation == 'C') {
                cin >> elementIndex >> shiftLength >> shift;

            }
            //SWITCH
            if (operation == 'S') {
                cin >> elementIndex >> switchLength;
            }
            if (operation == 'F') goto label;
        }
        i++;
        label:
        //BEFORE OPERATIONS
        cout <<
        //AFTER OPERATIONS
        cout <<
    }
    return 0;

}
