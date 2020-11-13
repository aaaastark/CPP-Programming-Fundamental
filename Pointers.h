#include <iostream>
#include <string>
using namespace std;
void object_number_1();
void object_number_2();
void object_number_3();
void pointers(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tPointer Integer\n\n";
	object_number_1();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;

	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\t\t\t\tPointer String\n\n";
	object_number_2();
	///////////////////////////////  END	/////////////////////////////////////////
	
	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\t\t\t\tPointer Operation\n\n";
	object_number_3();
	///////////////////////////////  END	/////////////////////////////////////////

}
void object_number_1(){
	int *number;
	int num_1=20;
	number=&num_1;
	cout<<"Pointer Number with astaric is "<<*number;
	cout<<endl;
	cout<<"Pointer Number without astaric is "<<number;
	cout<<endl;
	cout<<"Without use the Pointer Number is "<<num_1;
	cout<<endl;
	cout<<"Without use the Pointer Number and just use Address is "<<&num_1;
}
void object_number_2(){
	string *name;
	string name_1="M.A.R";
	name=&name_1;
	cout<<"Pointer Name with astaric is "<<*name;
	cout<<endl;
	cout<<"Pointer Name without astaric is "<<name;
	cout<<endl;
	cout<<"Without use the Pointer Name is "<<name_1;
	cout<<endl;
	cout<<"Without use the Pointer Name and just use Address is "<<&name_1;
}
void object_number_3(){
	int *number;
	int num_1=10;
	number=&num_1;
	++*number;   // increament
	cout<<"Pointer Number is increment of 1_value a "<<*number;
	cout<<endl;
	--*number;  // decrement
	cout<<"Pointer Number is decrement of 1_value a "<<*number;
	
	
	string *name;
	string **names;
	string name_1;
	name_1="M.A.R";
	name=&name_1;  // single pointer 
	cout<<endl;
	cout<<"Pointer Name in sigle pointer using is "<<*name;
	cout<<endl;
	names=&name;  // double pointer
	cout<<"Pointer Name in double pointer using is "<<**names;
}
