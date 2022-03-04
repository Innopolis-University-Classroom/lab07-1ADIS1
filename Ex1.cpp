#include<iostream>
using namespace std;

template<typename WhatKind>
void multiples(WhatKind& sum, WhatKind x, int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            sum += 1;
        } else {
            sum += i * x;
        }
    }
}