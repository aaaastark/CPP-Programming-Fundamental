#include <iostream>
using namespace std;
struct My_structure{
	int age;
	string name;
};
void my_structure_1(){
	My_structure  my_str;
	my_str.age=20;
	my_str.name="Muhammad Allah Rakha";
	cout<<"My name is "<<my_str.name<<endl;
	cout<<"My age is "<<my_str.age<<endl;
}
void my_structure_2(){
	My_structure my_str[2];
	string myname; int number;
	for(int i=0;i<2;i++){
		cout<<"Enter a Name : ";
		cin>>myname;
		my_str[i].name=myname;
		cout<<"Enter a Age : ";
		cin>>number;
		my_str[i].age=number;
	}
	cout<<endl;
	for(int i=0;i<2;i++){
		cout<<"My name is "<<my_str[i].name<<endl;
		cout<<"My age is "<<my_str[i].age<<endl;
	}
}

void structures(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tStructure simple.\n\n";
	my_structure_1();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tStructure within array.\n\n";
	my_structure_2();
	///////////////////////////////  END	/////////////////////////////////////////
}




