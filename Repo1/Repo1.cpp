#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int main(){
    setlocale(0, "rus");
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " год високосный" << endl;
    }
    else {
        cout << year << " год не високосный" << endl;
    }

    return 0;
}
