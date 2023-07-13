#include<iostream>
using namespace std;

//num1 and num2 are actual parameters
//Formal parameters a and b will be taking values from actual parameters num1 and num2


// Function prototype
// tpe function-name (arguments);
// int sum(int a, int b); //Acceptable
//int sum(int a, b); //Not acceptable
void g();
int sum(int, int); //Acceptable
int main() {
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    
    return 0;

}

int sum(int a, int b) {
    int c = a+b;
    return c;
}

void g() {
    cout<<"\nHELLO GOOD MORNING ";

}





































