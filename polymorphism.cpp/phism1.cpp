#include<iostream>
//1. WAP to perform all basic arithmetic operations such
//like +, -, *, and / operations by implementing method
//overloading using total 2 classes.
//- use only one method named calculate() in child
//class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition
using namespace std;

class parent{
	public:
		void calculate1(int a,int b){
			cout<<a/b<<endl;
		}
		void calculate2(int a,int b,int c){
			cout<<a-b-c<<endl;
		}
			
	
};
class child : public parent{
	public:
		
		void calculate3(int a,int b,int c,int d){
			cout<<a*b*c*d<<endl;
		}
		void calculate4(int a,int b,int c,int d,int e){
			cout<<a+b+c+d+e<<endl;
		}	
};

int main(){
	child obj;
 
    obj.calculate1(20,10);
    obj.calculate2(30,20,10);
    obj.calculate3(1,2,3,4);
    obj.calculate4(10,20,30,40,50);
    
	
	return 0;
}
