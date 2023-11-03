#include <iostream>
using namespace std;

//1)

int main() {
    
    int skaitlis;
    cout << "Ievadiet savu skaitli" << endl;
    cin >> skaitlis;

    bool pirm = true;

    if (skaitlis < 2) {
            pirm = false;
        }
    for (int i = 2; i*i <= skaitlis; i++) {
        if (skaitlis % i == 0) {
            pirm = false;
        }
        }

    if (pirm == true) {
        cout << "Skaitlis ir pirmskaitlis";
    }
    else {
        cout << "Skaitlis nav pirmskaitlis";
    }
    

    
    //2
    int n;
    int j = 0;
    cout << "Ievadiet veselu skaitli:";
    cin >> n;

    for (int i = 3; i <= n && n > 2; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            j = j + i;
        }
    }

    cout << j;
    

    //3
    int r;
    int iv;

    cout << "Ievadiet reizinasanas skaitli:" << endl;
    cin >> r;
    cout << "Ievadiet intervalu:" << endl;
    cin >> iv;

    for (int i = 1; i <= iv; i++) {
        cout << r << " * "<< i << " = "<< r*i << endl;
    }

    return 0;

}

