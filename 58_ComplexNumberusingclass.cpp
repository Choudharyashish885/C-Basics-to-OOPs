#include<bits/stdc++.h>
using namespace std;

class ComplexNumbers {
    public:
    int real,imaginary;
    ComplexNumbers(){
        real=imaginary=0;
    }
    ComplexNumbers(int r,int i){
        real=r;
        imaginary=i;
    }
    
    ComplexNumbers plus(ComplexNumbers c){
        ComplexNumbers Plus;
        Plus.real=real+c.real;
        Plus.imaginary=imaginary+c.imaginary;
        return Plus;
    }
    ComplexNumbers multiply(ComplexNumbers c){
        ComplexNumbers Multiply;
        Multiply.real = real*c.real-imaginary*c.imaginary;
        Multiply.imaginary=real*c.imaginary+c.real*imaginary;
        return Multiply;
    }
    void print(){
        cout<<real<<" + i"<<imaginary;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;
    //ComplexNumbers c;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1=c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1=c1.multiply(c2);
        c1.print();
    }
     else {
        return 0;
    }

}

