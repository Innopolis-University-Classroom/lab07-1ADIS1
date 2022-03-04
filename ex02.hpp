//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template<typename T>
class Calculator
{
public:
    T num1;
    T num2;

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















