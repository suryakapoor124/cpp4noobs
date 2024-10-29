#include <iostream>
using namespace std;

int main() {
    cout << "Enter your age =";
    int age;
    cin >> age;             //if you enter float it will convert into int
    cout << "Your are "<<age<<" years old."<<endl;


    //CALCULATOR

    int x,y;
    cout << "Enter x and y = ";
    cin >> x >> y;
    cout << "Your answer is = "<<x+y;
}