#include <iostream>
using namespace std;

int main(){
	char ops;
	float num1;
	float num2;
	
	cout<<"Enter Number 1: ";
	cin>>num1;
	
	cout<<"Enter Number 2: ";
	cin>>num2;
	
	cout<<"Enter Operator (+ - / *)";
	cin>>ops;

	switch(ops) {
		case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
        	cout<<"Not in The fucking choices bitch!"<<endl;
        	break;
	}
	
	
	
	
}
