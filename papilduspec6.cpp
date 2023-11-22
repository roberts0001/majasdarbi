#include <iostream>

using namespace std;

int* minElement(int* arr, int arrSize) {
    int* min = arr;

    for (int i = 1; i < arrSize; i++) {
        if (arr[i] < *min) {
            min = &arr[i];
        }
    }
    return min;
}


int main () {
    //1
    int* numberOne = new int;
    int* numberTwo = new int;

    cout << "Ievadiet pirmo skitlu:" << endl;
    cin >> *numberOne;

    cout << "Ievadiet otro skitlu:" << endl;
    cin >> *numberTwo;

    int sum = *numberOne + *numberTwo;
    cout << "Summa ir:" << sum << endl;

    delete numberOne;
    delete numberTwo;

    //2
    int numb[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;

    cout << "Ievadiet skaitli:" << endl;
    cin >> num;

    int* inArray = numb;
    int* endArray = numb + 10;

    bool found = false;

    while (inArray < endArray) {
        if (*inArray == num) {
            cout << "Skaitlis atrodas masiva" << endl;
            found = true;
            break;  // Exit the loop since the number is found
        }
        inArray++;
    }

    if (!found) {
        cout << "Skaitlis nav atrasts masiva" << endl;
    }

    //3
    const int arrSize = 10;
    int numb2[arrSize] = {5, 23, 96, 1, 53, 57, 3, 2, 22, 85};

    int* minNum = minElement(numb2, arrSize);

    cout << "Mazakais elements ir:" << *minNum << endl;

    return 0;

}