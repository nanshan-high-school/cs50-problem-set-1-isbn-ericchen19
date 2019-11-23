#include <iostream>
using namespace std;


long long check(long long ISBN);

int main() {
    long long ISBN;
    ISBN = check(ISBN);
    int total = 0;
    total = total + (ISBN / 1000000000) * 1;
    ISBN = ISBN % 1000000000;
    total = total + (ISBN / 100000000) * 2;
    ISBN = ISBN % 100000000;
    total = total + (ISBN / 10000000) * 3;
    ISBN = ISBN % 10000000;
    total = total + (ISBN / 1000000) * 4;
    ISBN = ISBN % 1000000;
    total = total + (ISBN / 100000) * 5;
    ISBN = ISBN % 100000;
    total = total + (ISBN / 10000) * 6;
    ISBN = ISBN % 10000;
    total = total + (ISBN / 1000) * 7;
    ISBN = ISBN % 1000;
    total = total + (ISBN / 100) * 8;
    ISBN = ISBN % 100;
    total = total + (ISBN / 10) * 9;
    ISBN = ISBN % 10;
    if (ISBN == total % 11) {
        cout << "correct";
    } else {
        cout << "incorrect";
    }
}


long long check(long long ISBN) {
    do {
    cout << "請輸入欲檢查書本的ISBN:";
    cin >> ISBN;
    } while (ISBN < 1000000000);
    return ISBN;
}
