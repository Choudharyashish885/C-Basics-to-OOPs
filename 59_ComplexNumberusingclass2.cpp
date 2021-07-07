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
    void plus(ComplexNumbers c1,ComplexNumbers c2){
        real=0;
        imaginary=0;
        real = c1.real+c2.real;
        imaginary = c1.imaginary+c2.imaginary;
    }
    void multiply(ComplexNumbers c1,ComplexNumbers c2){
        real=0;
        imaginary=0;
        real = c1.real*c2.real-c1.imaginary*c2.imaginary;
        imaginary = c1.real*c2.imaginary+c1.imaginary*c2.real;
    }
    
    void print(){
        cout<<real<<" + i"<<imaginary;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;
    ComplexNumbers c;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c.plus(c1,c2);
        c.print();
    } else if (choice == 2) {
        c.multiply(c1,c2);
        c.print();
    }
     else {
        return 0;
    }

}

