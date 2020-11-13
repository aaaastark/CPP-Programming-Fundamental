#include <iostream>
#include <string>
using namespace std;
void objects_1();
void objects_2();
void objects_3(int array[]);
void objects_4();
void arrays(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tNumber\n";
	objects_1();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\t\t\t\tName\n";
	objects_2();
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tArray Integer\n";
	int array[5]={10,20,30,40,50};
	objects_3(array);
	///////////////////////////////  END	/////////////////////////////////////////

	cout<<endl<<endl;
	
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<"\t\t\t\tArray String\n";
	objects_4();
	///////////////////////////////  END	/////////////////////////////////////////
	
	
}
void objects_1(){
	int number[10]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++){
		cout<<i<<" : number = "<<number[i]<<endl;
	}
}
void objects_2(){
	string name[3]={"Muhammad","Allah","Rakha"};
	for(int i=0;i<3;i++){
		cout<<i<<"	: name = "<<name[i]<<endl;
	}
}
void objects_3(int array[]){
	for(int i=0;i<5;i++){
		cout<<i<<"	: array integer = "<<array[i]<<endl;
	}
}
void objects_4(){
	string array[3];
	string name;
	for(int i=0;i<=2;i++){
		cout<<"Enter a name : ";
		cin>>name;
		array[i]=name;
	}
	for(int i=0;i<=2;i++){
		cout<<i<<"	: array string = "<<array[i]<<endl;
	}	
}
