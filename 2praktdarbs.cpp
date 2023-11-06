#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>

using namespace std;

enum numurins {   //enum ar izvelem
        IEVADIT = 1,
        RINDA = 2,
        STEKS = 3,
        KONTEINERIS = 4,
        IZVADIT = 5,
        BEIGT = 6,
    };

numurins mainit (int x) { //funkcija mainis ievaditu izveli par numurinu
    switch (x) {
        case 1:
            return IEVADIT;
            break;
        case 2:
            return RINDA;
            break;
        case 3:
            return STEKS;
            break;
        case 4: 
            return KONTEINERIS;
            break;
        case 5:
            return IZVADIT;
            break;
        case 6:
            return BEIGT;
            break;
        default:
            cout << "Nepareiza izvele. Izvelaties skaitlu 1-6" << endl;
            break;
    }
}

void ievadisana(int y, vector<int>& b) {
    int a;
    for (int i = 1; i <= y; i++) {
        cout << "Ievadiet skaitlu kuru jums gribetos pievienot:" << endl;
        cin >> a;
        b.push_back(a);
    }
}

void vektorsrinda (vector<int>& c) {

    queue<int> pirmarinda;

    for (int i : c) {
        pirmarinda.push(i);
    }

    while (!pirmarinda.empty()) {
        cout << "No rindas:" << pirmarinda.front() << endl;
        pirmarinda.pop();
    }



}

void vektorssteks (vector<int>& c) {

    stack<int> pirmaissteks;

    for (int i : c) {
        pirmaissteks.push(i);
    }

    while (!pirmaissteks.empty()) {
        cout << "No steka:" << pirmaissteks.top() << endl;
        pirmaissteks.pop();
    }



}

void vektorsdeque(vector<int>& c) {
    deque<int> pirmaisdeque(c.begin(), c.end());

    pirmaisdeque.pop_front();

    pirmaisdeque.push_back(c.front());

    for(int i : pirmaisdeque) {
        cout << i << " ";
    }
    cout << endl;
}

void izvadisana (vector<int>& c) {
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
        }
        cout << endl;
}


int main() {
    
    
    numurins izvele;
    int numizvele;
    bool beigt = true;
    int reizes;

    vector<int> pirmais = {4, 5, 6, 7, 8};

    while (beigt) {

        cout << "Izvele:" << endl << 
        "1: Ievadit skaitlus"  << endl <<
        "2: Rinda"  << endl <<
        "3: Steks" << endl <<
        "4: Jebkuru no STL konteineriem, kas nav doti programma" << endl <<
        "5: Izvada skaitlu virkni" << endl <<
        "6: Beigt darbibu" << endl;

        cout << "Ludzu ievadiet savu izveli (1-6):" << endl;
        cin >> numizvele;

        
        izvele = mainit (numizvele); //maina izveli par numurinu

        
        switch (izvele) {

            case IEVADIT:
                cout << "Cik skaitlus gribat pievienot vektoram?";
                cin >> reizes;
                ievadisana(reizes, pirmais);
                cout << endl;
                break;
            case RINDA:
                vektorsrinda(pirmais);
                break;
            case STEKS:
                vektorssteks (pirmais);
                break;
            case KONTEINERIS:
                vektorsdeque(pirmais);
                break;
            case IZVADIT:
                izvadisana(pirmais);
                break;
            case BEIGT:
                beigt = false;
                break;
        }

    }

    return 0;
}