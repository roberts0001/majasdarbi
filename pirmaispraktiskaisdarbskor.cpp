#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    string text = "Programmas ir jaraksta cilvekiem, kas tas lasis";
    int choice;
    bool works = true;

    cout << "Jusu izveles ir:" << endl << "1: Ievadiet jaunu tekstu (parastie burti)"
    << endl << "2: Uzziet vai ievadita teksta garums ir para vai nepara skaitlis"
    << endl << "3. Izvada summu no 1..n (kur n = teksta garums)"
    << endl << "4. Atrod faktoriali n (kur n = teksta garums)"
    << endl << "5. Izvada virkni no otra gala (reversa)"
    << endl << "6. Beigt darbibu" << endl;

    while (works) {
        cout << "Ievadiet izveli starp 1-6: ";
        cin >> choice;
        int fact = 1;
        int numb = 0;
        string newText = text;

        switch (choice)
        {
            case 1:
                cin.ignore();
                cout << "Ievadiet jauno virkni" << endl;
                getline(cin, text);
                cout << endl <<  "Jusu virkne tagad ir " << text << endl;   
                break;
            
            case 2:
                if (text.length() % 2 == 0) {
                    cout << "Para" << endl;
                }
                else {
                    cout << "Nepara" << endl;
                } 
                break;

            case 3:
                for (int i = 1; i < text.length(); i++) {
                    numb += i;
                }
                cout << numb << endl;
                break;
            
            case 4:
                for (int i = 1; i <= text.length(); i++) {
                    fact = fact * i;
                }
                cout << fact << endl; 
                break;

            case 5:
                reverse(newText.begin(), newText.end());
                cout << newText << endl;
                break;

            case 6:
                cout << "Darbiba ir beigta" << endl;
                works = false;
                break; 
        }
    }
    return 0;
}
