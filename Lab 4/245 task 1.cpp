#include <iostream>

using namespace std;

class Calculator{
private:
    int value;
public:
    Calculator(){
        value = 0;
    }
    Calculator(int val){
        value = val;
    }

    int getValue(){
        return value;
    }
    void setValue(int Value){
        value = Value;
    }
    void add(int Value){
        value += Value;
    }
    void subtract(int Value){
        value -= Value;
    }
    void multiply(int Value){
        value *= Value;
    }
    void divideBy(int Value){
        if(Value==0){
            cout<<"Error : divide by is undefined."<<endl;
            return;
        }
        value /= Value;
    }
    void clear(){
        value = 0;
        cout<<"Calculator object is destroyed."<<endl;
    }
    void display(){
        cout<<"Calculator display: "<<value<<endl;
    }
};

int main()
{
    Calculator calculator;
    calculator.display();
    calculator.add(10);
    calculator.display();
    calculator.add(7);
    calculator.display();
    calculator.multiply(31);
    calculator.display();
    calculator.subtract(42);
    calculator.display();
    calculator.divideBy(7);
    calculator.display();
    calculator.divideBy(0);
    calculator.display();
    calculator.add(3);
    calculator.display();
    calculator.subtract(1);
    calculator.display();
    calculator.clear();
    calculator.display();

}

