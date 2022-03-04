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

template<typename T>
class Calculator
{
            T num1;
            T num2;
public:
    Calculator(T num1, T num2) {
        this->num1 = num1;
        this->num2 = num2;
    }

    T add() {
        return num1 + num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        return num1 / num2;
    }

    T subtract() {
        return num1 - num2;
    }
};

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

//int main() {
//    Calculator<int> intCalc(2, 1);
//
////    REQUIRE(intCalc.add() == 3);
////    REQUIRE(intCalc.multiply() == 2);
////    REQUIRE(intCalc.divide() == 2);
////    REQUIRE(intCalc.subtract() == 1);
//
//    cout << intCalc.add() << endl;
//    cout << intCalc.multiply() << endl;
//    cout << intCalc.divide() << endl;
//    cout << intCalc.subtract() << endl;
//
//    Calculator<float> floatCalc(12.0, 3.0);
//
////    REQUIRE(floatCalc.add() == 15.0);
////    REQUIRE(floatCalc.multiply() == 36.0);
////    REQUIRE(floatCalc.divide() == 4.0);
////    REQUIRE(floatCalc.subtract() == 9.0);
//
//    cout << floatCalc.add() << endl;
//    cout << floatCalc.multiply() << endl;
//    cout << floatCalc.divide() << endl;
//    cout << floatCalc.subtract() << endl;
//}