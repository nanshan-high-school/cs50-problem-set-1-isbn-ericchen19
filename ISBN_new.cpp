#include <iostream>
using namespace std;

int main() {
    long long ISBN;
    cout << "請輸入欲檢查書本的ISBN：";
    cin >> ISBN;
    int num = ISBN - (ISBN / 10 * 10);
    int total = 0;
    
    for (int i = 9; i > 0; i--) {
        ISBN =  ISBN / 10;
        total = total + ISBN % 10 * i;
    }
    if (total % 11 == num) {
        cout << "correct";
    } else {
        cout << "incorrect";
    }
}
