#include <iostream>

using namespace std;


int main() {
    int maxPosti(30), numAdulti(0), numBambini(0);
    float postiOccupati(0), postiDaLiberare(0);
    
    do {
        cout << "Quanti adulti entrano?" << endl;
        cin >> numAdulti;
        cout << "Quanti bambini salgono?" << endl;
        cin >> numBambini;
      
        postiOccupati = postiOccupati + numAdulti + numBambini / 2.0;
        cout << "Posti occupati: " << postiOccupati << endl;
      
    } while (postiOccupati < maxPosti);
  
    if (postiOccupati > maxPosti) {
        postiDaLiberare = postiOccupati - maxPosti;
        cout << "Liberare " << postiDaLiberare << " posti" << endl;
    }
    cout << "Testa allo schienale, si va!" << endl;
}
