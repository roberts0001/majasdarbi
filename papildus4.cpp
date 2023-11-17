#include <iostream>
#include <string>

using namespace std;

void reverse() {
    cout << "Ievadiet simbola virkni!" << endl;
    string text;
    getline(cin, text);
    string newText;

    for (int i = text.length() -1; i >= 0; i--) {
        newText += text[i];
    }
    cout << "virkne reversa:" << newText << endl;

}

void recursiveSum () {
    cout << "Ievadiet skaitli n, no kura tiks aprekinata summa 1..n" << endl;
    int num;
    cin >> num;
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    cout << "Summa ir:" << sum << endl;
}

void Print (int value) {
    cout << "Vertiba no si skaitla ir: " << value << endl;
}

void Print (string value) {
    cout << "Vertiba no sis virknes ir: " << value << endl;
}

void Print (double value) {
    cout << "Vertiba no decimala ir: " << value << endl;
}

void Print (char value) {
    cout << "Vertiba no si simbola ir: " << value << endl;
}



int main() {
    //1)
    reverse();

    //2
    recursiveSum();

    //3
    Print(1.5);

    return 0;
}
