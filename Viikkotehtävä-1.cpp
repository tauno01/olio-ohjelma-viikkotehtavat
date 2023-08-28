#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum) {
    cout << "Arvataan lukua väliltä 1-" << maxnum << endl;
    srand(time(0));
    int satunnaisLuku = rand() % maxnum + 1;
    int pelaajanArvaus;
    int arvaustenMaara = 0;

    do {
        cout << "Arvaa luku 1-" << maxnum << ": ";
        cin >> pelaajanArvaus;
        arvaustenMaara++;

        if (pelaajanArvaus < satunnaisLuku) {
            cout << "Arvottu luku on suurempi" << endl;
        } else if (pelaajanArvaus > satunnaisLuku) {
            cout << "Arvottu luku on pienempi" << endl;
        } else {
            cout << "Oikea vastaus!" << endl;
        }
    } while (pelaajanArvaus != satunnaisLuku);

    return arvaustenMaara;
}

int main() {
    int maxNumero;
    cout << "Syötä korkein arvottava luku: ";
    cin >> maxNumero;

    int arvaustenMaara = game(maxNumero);

    cout << "Arvausten määrä: " << arvaustenMaara << endl;

    return 0;
}
