#include <iostream>

using namespace std;

int main() {
    int a, b, kq_1, kq_2, kq_3, s1, s2, tich; 
     

    cout << "Nhap thua so thu nhat: ";
    cin >> a;
    cout << "Nhap thua so thua hai: ";
    cin >> b;
    cout << "     " << a << endl;
    cout << "X    " << b << endl;
    

    s1 = b % 10; b /= 10; kq_1 = a * s1;
    s2 = b % 10; b /= 10; kq_2 = a * s2;
    kq_3 = a * b;

    cout << "--------" << endl;
    if (kq_1 / 1000 >= 1){
        cout << "    " << kq_1 << endl;
    } else {
        cout << "     " << kq_1 << endl;
    }

    if (kq_2 / 1000 >= 1){
        cout << "   " << kq_2 << endl;
    } else {
        cout << "    " << kq_2 << endl;
    }

    if (kq_3 / 1000 >= 1){
        cout << "  " << kq_3 << endl;
    } else {
        cout << "   " << kq_3 << endl;
    }
    
    cout << "-------" << endl;

    tich = kq_1 + kq_2 * 10 + kq_3 * 100;
    
    if (tich / 100000 >= 1) {
        cout << "  " << tich << endl;
    } else {
        cout << "   " << tich << endl;
    }

    return 0;
}