
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
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
