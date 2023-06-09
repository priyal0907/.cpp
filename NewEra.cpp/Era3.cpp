#include<iostream>
#include<string.h>

using namespace std;

class employees{
	
	public:
		
		int id;
		char name[20];
		int role;
		int age;
		int salary;
		int experience;
		char city[20];
		char company_name[20];
};

int main(){
	
	employees obj1,obj2,obj3,obj4,obj5;
	
	obj1.id=10;
	strcpy(obj1.name,"pavan Dave");
	obj1.role=10;
	obj1.age=23;
	obj1.salary=70000;
	obj1.experience=2;
	strcpy(obj1.city,"surat");
	strcpy(obj1.company_name,"ciyaza");
	cout<<"Id no: ";
	cout<<obj1.id<<endl;
	cout<<"Employee name: ";
	cout<<obj1.name<<endl;
	cout<<"Roll no: ";
	cout<<obj1.role<<endl;
	cout<<"Age: ";
	cout<<obj1.age<<endl;
	cout<<"Salary: ";
	cout<<obj1.salary<<endl;
	cout<<"Experience: ";
	cout<<obj1.experience<<endl;
	cout<<"City: ";
	cout<<obj1.city<<endl;
	cout<<"Company Name: ";
	cout<<obj1.company_name<<endl<<endl<<endl<<endl;
	
	obj2.id=11;
	strcpy(obj2.name,"Bhano");
	obj2.role=11;
	obj2.age=23;
	obj2.salary=80000;
	obj2.experience=4;
	strcpy(obj2.city,"surat");
	strcpy(obj2.company_name,"ciyaza");
	cout<<"Id no: ";
	cout<<obj2.id<<endl;
	cout<<"Employee name: ";
	cout<<obj2.name<<endl;
	cout<<"Roll no: ";
	cout<<obj2.role<<endl;
	cout<<"Age: ";
	cout<<obj2.age<<endl;
	cout<<"Salary: ";
	cout<<obj2.salary<<endl;
	cout<<"Experience: ";
	cout<<obj2.experience<<endl;
	cout<<"City: ";
	cout<<obj2.city<<endl;
	cout<<"Company Name: ";
	cout<<obj2.company_name<<endl<<endl<<endl<<endl;
	
	obj3.id=12;
	strcpy(obj3.name,"Krishna Sharma");
	obj3.role=12;
	obj3.age=21;
	obj3.salary=30000;
	obj1.experience=1;
	strcpy(obj3.city,"surat");
	strcpy(obj3.company_name,"Tcs");
	cout<<"Id no: ";
	cout<<obj3.id<<endl;
	cout<<"Employee name: ";
	cout<<obj3.name<<endl;
	cout<<"Roll no: ";
	cout<<obj3.role<<endl;
	cout<<"Age: ";
	cout<<obj3.age<<endl;
	cout<<"Salary: ";
	cout<<obj3.salary<<endl;
	cout<<"Experience: ";
	cout<<obj3.experience<<endl;
	cout<<"City: ";
	cout<<obj3.city<<endl;
	cout<<"Company Name: ";
	cout<<obj3.company_name<<endl<<endl<<endl<<endl;
	
	obj4.id=13;
	strcpy(obj4.name,"Surjeetsingh Rathod");
	obj4.role=13;
	obj4.age=33;
	obj4.salary=1,00,000;
	obj4.experience=7;
	strcpy(obj4.city,"surat");
	strcpy(obj4.company_name,"Infosys");
	cout<<"Id no: ";
	cout<<obj4.id<<endl;
	cout<<"Employee name: ";
	cout<<obj4.name<<endl;
	cout<<"Roll no: ";
	cout<<obj4.role<<endl;
	cout<<"Age: ";
	cout<<obj4.age<<endl;
	cout<<"Salary: ";
	cout<<obj4.salary<<endl;
	cout<<"Experience: ";
	cout<<obj4.experience<<endl;
	cout<<"City: ";
	cout<<obj4.city<<endl;
	cout<<"Company Name: ";
	cout<<obj4.company_name<<endl<<endl<<endl<<endl;
	
	obj5.id=14;
	strcpy(obj5.name,"Jay Babariya");
	obj5.role=14;
	obj5.age=25;
	obj5.salary=90000;
	obj5.experience=3;
	strcpy(obj5.city,"surat");
	strcpy(obj5.company_name,"Wipro");
	cout<<"Id no: ";
	cout<<obj5.id<<endl;
	cout<<"Employee name: ";
	cout<<obj5.name<<endl;
	cout<<"Roll no: ";
	cout<<obj5.role<<endl;
	cout<<"Age: ";
	cout<<obj5.age<<endl;
	cout<<"Salary: ";
	cout<<obj5.salary<<endl;
	cout<<"Experience: ";
	cout<<obj5.experience<<endl;
	cout<<"City: ";
	cout<<obj5.city<<endl;
	cout<<"Company Name: ";
	cout<<obj5.company_name<<endl<<endl<<endl<<endl;
	
	
	
	
 
	
	return 0;
}
