#include<iostream>

using namespace std;

class student{
	
	public:
		
		student(){
			cout<<"Default"<<endl;
		}
		
		student(int a,int b){
			
			cout<<"multi :"<<a*b<<endl;
		}
	
};

int main(){
	
	student obj (100,200);
	
	return 0;
}
