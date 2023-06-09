#include<iostream>

using namespace std;

class house{
	
	public:
		
		int Building_number;
		int floor_number;
		int door_number;
};

int main(){
	
	house obj1,obj2,obj3,obj4;
	
	obj1.Building_number=1;
	obj1.floor_number=1;
	obj1.door_number=101;
	cout<<"Building_number :";
	cout<<obj1.Building_number<<endl;
	cout<<"floor_number :";
	cout<<obj1.floor_number<<endl;
	cout<<"door_number :";
	cout<<obj1.door_number<<endl<<endl<<endl;
	
	obj2.Building_number=2;
	obj2.floor_number=2;
	obj2.door_number=202;
	cout<<"Building_number :";
	cout<<obj2.Building_number<<endl;
	cout<<"floor_number :";
	cout<<obj2.floor_number<<endl;
	cout<<"door_number :";
	cout<<obj2.door_number<<endl<<endl<<endl;
	
	obj3.Building_number=3;
	obj3.floor_number=3;
	obj3.door_number=303;
	cout<<"Building_number :";
	cout<<obj3.Building_number<<endl;
	cout<<"floor_number :";
	cout<<obj3.floor_number<<endl;
	cout<<"door_number :";
	cout<<obj3.door_number<<endl<<endl<<endl;
	
	obj4.Building_number=4;
	obj4.floor_number=4;
	obj4.door_number=404;
	cout<<"Building_number :";
	cout<<obj4.Building_number<<endl;
	cout<<"floor_number :";
	cout<<obj4.floor_number<<endl;
	cout<<"door_number :";
	cout<<obj4.door_number<<endl<<endl<<endl;
	
	
	
	return 0;
}
