#include<iostream>

using namespace std;

class data{
	
	private:
		
		int id;
		char name[50];
		int age;
		char course[50];
		char email[50];
		char city[50];
		char college[50];
		
	public:
	
	void setter(){
		
		cout<<"Enter id :";
		cin>>id;
		
		cout<<"Enter Name :";
		cin>>name;
		
		cout<<"Enter Age :";
		cin>>age;
		
		cout<<"Enter Course :";
		cin>>course;
		
		cout<<"Enter Email :";
		cin>>email;
		
		cout<<"Enter City :";
		cin>>city;
		
		cout<<"Enter College :";
		cin>>college;
	}	
	
	void getter(){
		
		cout<<"id :"<<id<<endl;
		cout<<"Name :"<<name<<endl<<endl;
		cout<<"Age :"<<age<<endl<<endl;
		cout<<"Course :"<<course<<endl<<endl;
		cout<<"Email :"<<email<<endl<<endl;
		cout<<"City :"<<city<<endl<<endl;
		cout<<"college :"<<college<<endl<<endl;
		
	}
};

int main(){
	
	data obj1,obj2,obj3,obj4,obj5,obj6,obj7;
	
	obj1.setter();
	obj2.setter();
	obj3.setter();
	obj4.setter();
	obj5.setter();
	obj6.setter();
	obj7.setter();
	
	obj1.getter();
	obj2.getter();
	obj3.getter();
	obj4.getter();
	obj5.getter();
	obj6.getter();
	obj7.getter();
	
	return 0;
}
