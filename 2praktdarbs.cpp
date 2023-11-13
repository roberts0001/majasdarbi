#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
//heyo
using namespace std;

void entering(int y, vector<int>& b) {
    int a;
    for (int i = 1; i <= y; i++) {
        cout << "Ievadiet skaitlu kuru jums gribetos pievienot:" << endl;
        cin >> a;
        b.push_back(a);
    }
}

void vectorToQueue (vector<int>& c) {
    queue<int> firstQueue;

    for (int i : c) {
        firstQueue.push(i);
    }

    while (!firstQueue.empty()) {
        cout << "No rindas:" << firstQueue.front() << endl;
        firstQueue.pop();
    }
}

void vectorToStack (vector<int>& c) {
    stack<int> firstStack;

    for (int i : c) {
        firstStack.push(i);
    }

    while (!firstStack.empty()) {
        cout << "No steka:" << firstStack.top() << endl;
        firstStack.pop();
    }
}

void vectorToDeque(vector<int>& c) {
    deque<int> firstDeque(c.begin(), c.end());

    firstDeque.pop_front();

    firstDeque.push_back(c.front());

    for(int i : firstDeque) {
        cout << i << " ";
    }
    cout << endl;
}

void printing (vector<int>& c) {
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main() {
    enum numbers {   //enum ar izvelem
        ENTER = 1,
        QUEUE = 2,
        STACK = 3,
        DEQUE = 4,
        PRINT = 5,
        STOP = 6,
    };

    numbers choice; 
    int numChoice;
    bool working = true;
    int times;

    vector<int> myVector = {4, 5, 6, 7, 8};

    while (working) {

        cout << "Izvele:" << endl << 
        "1: Ievadit skaitlus"  << endl <<
        "2: Rinda"  << endl <<
        "3: Steks" << endl <<
        "4: Jebkuru no STL konteineriem, kas nav doti programma" << endl <<
        "5: Izvada skaitlu virkni" << endl <<
        "6: Beigt darbibu" << endl;

        do {
                cout << "Ludzu ievadiet savu izveli (1-6):" << endl;
                cin >> numChoice;

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            } while (numChoice < 1 || numChoice > 6);
        
        choice = static_cast<numbers>(numChoice); 

        switch (choice) {

            case ENTER:
                cout << "Cik skaitlus gribat pievienot vektoram?";
                cin >> times;
                entering(times, myVector);
                cout << endl;
                break;
            case QUEUE:
                vectorToQueue(myVector);
                break;
            case STACK:
                vectorToStack (myVector);
                break;
            case DEQUE:
                vectorToDeque(myVector);
                break;
            case PRINT:
                printing(myVector);
                break;
            case STOP:
                working = false;
                break;
        }
    }
    return 0;
}

