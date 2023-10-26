#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int izvele;
    cin >> izvele;
    string virkne = "Programmas ir jaraksta cilvekiem, kas tas lasis";
    switch (izvele)
    {
        case 1:
        cin >> virkne ;
        cout<< endl <<  "jusu virkne tagad ir", virkne;
        break;   

        case 2:
        if (strlen(virkne)%2 == 0) {
            cout << "para";
        }
        else {
            cout << "nepara";
        }
        break; 

        case 3:
        int skaitl;
        for (int i = 1; i < strlen(virkne); i++) {
                skaitl += i;
        }
        cout << skaitl;
        break;
        /*
        case 4:

        cout <<; 
        break;
        */
        case 5:
        string jaunavirkne;
        jaunavirkne = reverse(virkne);
        cout << ;
        break;
        
        case 6:
        cout <<;
        break; 
    }
}