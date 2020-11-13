#include <iostream>
using namespace std;
void loops(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tWhile Loop\n\n"; 
	
	int integer_number_1=0;
	while(integer_number_1 <= 5){
		cout<<integer_number_1<<" : "<<"Hello World  (While_Loop)"<<endl;
		integer_number_1 ++;
	}
	///////////////////////////////  END	/////////////////////////////////////////
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\tDo_While Loop\n\n";
	
	int integer_number_2=0;
	do{
		cout<<integer_number_2<<" : "<<"Hello World  (Do_While_Loop)"<<endl;
		integer_number_2 ++;
	}while(integer_number_2 <= 5);
	///////////////////////////////  END	/////////////////////////////////////////
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\tFor Loop\n\n";
	
	for(int integer_number_3=0; integer_number_3 <= 5; integer_number_3 ++){
		cout<<integer_number_3<<" : "<<"Hello World  (For Loop)"<<endl;
	}
	///////////////////////////////  END	/////////////////////////////////////////
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\tSwitch Loop\n\n";
	
	int integer_number_4;
	cout<<"Enter a Number for Check Day from Week  : ";
	cin>>integer_number_4;
	cout<<endl;
	switch(integer_number_4){
		case 1:
    		cout << "Monday";
    		break;
  		case 2:
    		cout << "Tuesday";
    		break;
  		case 3:
    		cout << "Wednesday";
    		break;
  		case 4:
    		cout << "Thursday";
    		break;
  		case 5:
    		cout << "Friday";
    		break;
  		case 6:
    		cout << "Saturday";
    		break;
  		case 7:
    		cout << "Sunday";
    		break;
    	default:
    		cout<<"Worng Number enter for day check."<<endl;
			exit(3);	
	}
	///////////////////////////////  END	/////////////////////////////////////////		
}
