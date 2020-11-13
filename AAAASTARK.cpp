#include <iostream>
#include <string> 
#include <cmath>
#include <fstream>
#include <cstring>
#include "Input_Output.h"
#include "Variables.h"
#include "Operators.h"
#include "Loops.h"
#include "Decision_Making.h"
#include "Functions.h"
#include "Arrays.h"
#include "Pointers.h"
#include "File_Handling.h"
#include "Exception_Handling.h"
#include "Data_Structure.h"
#include "Name_Spaces.h"
#include "Hader_Files.h"
using namespace std;

void initialize();

int main(){
	
	initialize();
	
	int number;
	cout<<"Enter a Number for access : ";
	cin>>number;
	switch(number){
		case 1:
			cout<<endl<<endl;
			input_output();                        
			exit(2);
			break;
		case 2:
			cout<<endl<<endl;
			variables();							 
			exit(2);
			break;
		case 3:
			cout<<endl<<endl;
			operators();
			exit(2);
			break;
		case 4:
			cout<<endl<<endl;
			loops();
			exit(2);
			break;
		case 5:
			cout<<endl<<endl;
			decision_making();
			exit(2);
			break;
		case 6:
			cout<<endl<<endl;
			functions();
			exit(2);
			break;
		case 7:
			cout<<endl<<endl;
			arrays();
			exit(2);
			break;
		case 8:
			cout<<endl<<endl;
			pointers();
			exit(2);
			break;
		case 9:
			cout<<endl<<endl;
			filehandling();
			exit(2);
			break;
		case 10:
			cout<<endl<<endl;
			exceptions();
			exit(2);
			break;
		case 11:
			cout<<endl<<endl;
			structures();
			exit(2);
			break;
		case 12:
			cout<<endl<<endl;
			name_spaces();
			exit(2);
			break;
		case 13:
			cout<<endl<<endl;
			headers();
			exit(2);
			break;
		default:
			cout<<"Worng Number.";
			exit(1);
	}
	
	
}

void initialize(){
	cout<<"---------------------------------------------------\n";
	cout<<"1:			Input_Output		  |"<<endl;
	cout<<"2:			Variables		  |"<<endl;
	cout<<"3:			Operators		  |"<<endl;
	cout<<"4:			Loops			  |"<<endl;
	cout<<"5:			Decision Making Statements|"<<endl;
	cout<<"6:			Functions		  |"<<endl;
	cout<<"7:			Arrays			  |"<<endl;
	cout<<"8:			Pointers		  |"<<endl;
	cout<<"9:			File Handling		  |"<<endl;
	cout<<"10:			Exception Handling	  |"<<endl;
	cout<<"11:			Data Structures		  |"<<endl;
	cout<<"12:			Namespaces		  |"<<endl;
	cout<<"13:			Header File Handling      |"<<endl;
	cout<<"---------------------------------------------------";
	cout<<endl<<endl;
}
