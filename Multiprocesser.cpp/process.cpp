//1. WAP to create a Message class with a constructor that takes a single string with a default value. 
//Create a private member string, and in the constructor simply assign the argument string to your internal string.
//Create two overloaded member functions called print( ):
//one that takes no arguments and simply prints the message stored in the object, and one that takes a string argument,
// which it prints in addition to the internal message.
#include<iostream>
#include<string.h>
using namespace std;

class message{
	private:
		char Name[100];  
	public:
		message(char a[]){
			strcpy(Name,a);
		}
		void print(){
			cout<<"Your name: ";
		}
		void print(char lastname[]){
			cout<<Name<<" "<<lastname<<endl;
		}
}; 

int main(){
    message obj("priyal") ;
	obj.print();
	obj.print("savaj");	
	return 0;
}

