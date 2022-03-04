#include<iostream>
using namespace std;

template<typename WhatKind>
void multiples(WhatKind& sum, WhatKind x, int n) {
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            sum += 1;
        } else {
            sum += i * x;
        }
    }
}

//int main() {
//    int y = 0;
//    multiples(y, 1, 2);
//
//    float y2 = 0.0;
//    multiples<float>(y2, 1.5, 3.0);
//
//    cout << y << endl;
//    cout << y2 << endl;
//}