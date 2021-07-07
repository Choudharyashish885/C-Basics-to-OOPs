
#include "iostream"
using namespace std;

class point
{
private:
double x, y;

public:


point (double px, double py)  //parameterized constrcuctor
{
	x = px, y = py;
}
void print(){
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y;
} 
};

int main(void)
{

point b(5, 6);
b.print();
}
