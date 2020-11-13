#include <iostream>
using namespace std;
void objects_name_1();
void objects_name_2();
void exceptions(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tException Integer Number\n\n";
	objects_name_1();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tException String Name\n\n";
	objects_name_2();
	///////////////////////////////  END	/////////////////////////////////////////

}
void objects_name_1(){
	int num;
	try{
		num=10;
		if(num==10){
			throw num;
		}
		else{
			cout<<"Error.";
		}
	}catch(...){
		cout<<"Number is "<<num;
	}
}
void objects_name_2(){
	string name;
	string name_1;
	try{
		name="M.A.R";
		name_1="Error";
		if(name == "m.a.r"){
			cout<<"Name is "<<name;
		}
		else{
			throw name_1;
		}
	}catch(...){
		cout<<"Not equal and "<<name_1;
	}
}
