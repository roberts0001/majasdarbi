#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {

// 1)

float arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
float sum = 0;
float avrg;

for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    sum += arr[i];

cout << "The averge is:" << sum/(sizeof(arr)/sizeof(arr[0])) << endl;


// 2)

int a[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}};

for (int i = 0; i < 2; i++)
    for (int j = 0; j < 5; j++)
        cout << "a["<< i <<"]"<<"["<<j<<"]   "<< a[i][j] << endl;

// 3)

int as = 0;
string text;
cout << "enter a text:" << endl;
cin >> text;


for (int k = 0; k < text.length(); k++ )
    if (text[k] == 'a' || text[k] == 'A')
        as += 1;

cout << as;

return 0;

}
