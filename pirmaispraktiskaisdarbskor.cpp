#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string virkne = "Programmas ir jaraksta cilvekiem, kas tas lasis";
    int izvele;
    bool strada = true;

    cout << "Jusu izveles ir:" << endl << "1: Ievadiet jaunu tekstu (parastie burti)"
    << endl << "2: Uzziet vai ievadita teksta garums ir para vai nepara skaitlis"
    << endl << "3. Izvada summu no 1..n (kur n = teksta garums)"
    << endl << "4. Atrod faktoriali n (kur n = teksta garums)"
    << endl << "5. Izvada virkni no otra gala (reversa)"
    << endl << "6. Beigt darbibu" << endl;


    while (strada) {
        cout << "Ievadiet izveli starp 1-6: ";
        cin >> izvele;
        int fakt = 1;
        int skaitl = 0;
        string jaunavirkne = virkne;

        switch (izvele)
        {
            case 1:
                cin.ignore();
                cout << "Ievadiet jauno virkni" << endl;
                getline(cin, virkne);
                cout << endl <<  "Jusu virkne tagad ir " << virkne << endl;   
                break;
            
            case 2:
                if (virkne.length() % 2 == 0) {
                    cout << "Para" << endl;
                }
                else {
                    cout << "Nepara" << endl;
                } 
                break;

            case 3:
                for (int i = 1; i < virkne.length(); i++) {
                    skaitl += i;
                }
                cout << skaitl << endl;
                break;
            
            case 4:
                for (int i = 1; i <= virkne.length(); i++) {
                    fakt = fakt * i;
                }
                cout << fakt << endl; 
                break;

            case 5:
                reverse(jaunavirkne.begin(), jaunavirkne.end());
                cout << jaunavirkne << endl;
                break;

            case 6:
                cout << "Darbiba ir beigta" << endl;
                strada = false;
                break; 

        }
    }

    return 0;
}
