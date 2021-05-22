#include <iostream>
using namespace std;

int main() {
    int st, t;
    int mg[] = {0, 0, 0, 0};

    cout << "Nhap so tien: ";
    cin >> st;

    mg[0] = st / 100; st -= 100 * mg[0];
    mg[1] = st /50; st -= 50 * mg[1];
    mg[2] = st / 20; st -= 20 * mg[2];
    mg[3] = st / 1; 
    t = mg[0] + mg[1] + mg[2] + mg[3];

    cout << "So to 200.000 VND: " << mg[0] << endl;
    cout << "So to 50.000 VND: " << mg[1] << endl;
    cout << "So to 20.000 VND: " << mg[2] << endl;
    cout << "So to 1.000 VND: " << mg[3] << endl;
    cout << "Tong so to: " << t << " to" << endl;
}