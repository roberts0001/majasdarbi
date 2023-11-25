#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    string surname;
    int age;
    string email;
};

void addStudent(vector<Student>& students) {
    Student newStudent;
    cout << "Ievadiet vardu: ";
    cin >> newStudent.name;
    cout << "Ievadiet uzvardu: ";
    cin >> newStudent.surname;
    cout << "Ievadiet vecumu: ";
    cin >> newStudent.age;
    cout << "Ievadiet e-pastu: ";
    cin >> newStudent.email;

    students.push_back(newStudent);
    cout << "Students pievienots veiksmigi!" << endl;
}

void deleteStudent(vector<Student>& students) {
    string name;
    cout << "Ievadiet studenta vardu, kuru gribat dzest: ";
    cin >> name;

    auto toDelete = find_if(students.begin(), students.end(), [name](const Student& student) {
        return student.name == name;
    });

    if (toDelete != students.end()) {
        students.erase(toDelete);
        cout << "Students dzests veiksmigi!" << endl;
    } 
    else {
        cout << "Students nav atrasts" << endl;
    }
}

void printStudents(const vector<Student>& students) {
    cout << "Studenti:" << endl;
    for (const Student& student : students) {
        cout << "Vards: " << student.name << ", Uzvards: " << student.surname << ", Vecums: " << student.age << ", E-pasts: " << student.email << endl;
    }
}

double distance (const int x1, const int y1, const int x2, const int y2) {
    return sqrt(pow(x1 -x2, 2) + pow(y1 - y2, 2));
}

struct Data { 
    int num; 
    char chr; 
};

void printByValue(Data obj) {
    cout << "Num:" << obj.num << "    Chr:" << obj.chr <<endl;
}

void printByPointer(Data* obj) {
    cout << "Num:" << obj->num << "    Chr:" << obj->chr <<endl;
}

void printByReference(Data& obj) {
    cout << "Num:" << obj.num << "    Chr:" << obj.chr <<endl;
}

int main() {
    
    vector<Student> students;

    int choice;
    bool works = true;

    cout << "Ievadiet vienu no izvelem:" << endl << "(1) Pievienot studentu" << endl << "(2) Nodzest studentu" << endl << "(3) Redzet visus studentus" << endl << "(4) Beigt darbibu" << endl;

    while (works) {
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                deleteStudent(students);
                break;
            case 3:
                printStudents(students);
                break;
            case 4:
                cout << "Darbiba ir pabeigta" << endl;
                works = false;
                break;
            default:
                cout << "Nepareiza izvele. Velreiz meginat" << endl;
        }
    }
    

    int x1;
    int y1;
    int x2;
    int y2;

    char again = 'j';

    while (again == 'j') {
        cout << "Ievadiet x1 koordinatu:" << endl;
        cin >> x1;
        cout << "Ievadiet y1 koordinatu:" << endl;
        cin >> y1;
        cout << "Ievadiet x2 koordinatu:" << endl;
        cin >> x2;
        cout << "Ievadiet y2 koordinatu:" << endl;
        cin >> y2;

        double euklidDistance = distance(x1, y1, x2, y2);
        cout << "Eiklidiskais attalums ir:" << euklidDistance << endl;

        cout << "Ja velaties atkartot ievadiet 'j', ja ne tad 'n'" << endl;
        cin >> again;
    }
    

   Data firstData = {100, 'R'};

    printByValue(firstData);
    printByPointer(&firstData);
    printByReference(firstData);

    return 0;
}
