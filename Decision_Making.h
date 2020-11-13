#include <iostream>
using namespace std;
void decision_making(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"Use \"IF\" to specify a block of code to be executed, if a specified condition is true"<<endl<<endl;
	int integer_number=1;
	if(integer_number==1){
		cout<<"Integer_number is 1"<<endl;
	}
	///////////////////////////////  END	/////////////////////////////////////////

	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"Use Nested \"IF\" to specify a block of code to be executed, if a specified condition is true"<<endl<<endl;
	int integer_number_1=10;
	if(integer_number_1=10){
		if(integer_number_1 > 5){
			cout<<"Integer_number is 10"<<endl;
		}	
	}

	///////////////////////////////  END	/////////////////////////////////////////

	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<endl<<endl<<endl;
	cout<<"Use \"ELSE\" to specify a block of code to be executed, if the same condition is false"<<endl<<endl;
	int integer_number_2=10;
	if(integer_number_2 == 5){
		cout<<"Integer_number_2 is 10 equal to 5"<<endl;
	}
	else{
		cout<<"Integer_number_2 is 10 not equal to 5"<<endl;
	}
	///////////////////////////////  END	/////////////////////////////////////////

	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"Use \"ELSE IF\" to specify a new condition to test, if the first condition is false"<<endl<<endl;
	int integer_number_3=10;
	if(integer_number_3 == 5){
		cout<<"Integer_number_3 is 10 equal to 5"<<endl;
	}
	else if(integer_number_3 > 5){
		cout<<"Integer_number_3 is 10 grater to 5"<<endl;
	}
	else{
		cout<<"Integer_number_2 is 10 not equal to 5"<<endl;
	}	
	///////////////////////////////  END	/////////////////////////////////////////
}
