#include <iostream>
using namespace std;
void variables(){
	cout<<"int - stores integers (whole numbers), without decimals, such as 123 or -123"<<endl;
	cout<<"double - stores floating point numbers, with decimals, such as 19.99 or -19.99"<<endl;
	cout<<"char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes"<<endl;
	cout<<"string - stores text, such as \"Hello World\". String values are surrounded by double quotes"<<endl;
	cout<<"bool - stores values with two states: true or false. There return type in the form of (1 or 0)"<<endl<<endl;
	
	// This cout is used for just show data_type_use_there.
//	cout<<"int integer_number;\nstring string_name;\ndouble double_number;\nchar character_keyword;\nbool boolen_value;"<<endl<<endl;
	
	int integer_number;
	string string_name;
	double double_number;
	char character_keyword;
	bool boolen_value;
	
	// This cout is used for just show data_type_use_there.
//	cout<<"cout<<\"Enter a Integer_Number : \";"<<endl<<"cin>>integer_number;"<<endl<<"cout<<\"Integer_Number is \"<<integer_number<<endl;"<<endl;
//	cout<<"cout<<\"Enter a String_Name : \";"<<endl<<"cin>>string_name;"<<endl<<"cout<<\"String_Name is \"<<string_name<<endl;"<<endl;
//	cout<<"cout<<\"Enter a Double_Number : \";"<<endl<<"cin>>double_number;"<<endl<<"cout<<\"Double_Number is \"<<double_number<<endl;"<<endl;
//	cout<<"cout<<\"Enter a Character_Keyword : \";"<<endl<<"cin>>character_keyword;"<<endl<<"cout<<\"Character_Keyword is \"<<character_keyword<<endl;"<<endl;
//	cout<<"if(1==1){ boolen_value=true; } else{ boolen_value=false; }"<<endl<<"cout<<\"Boolen_Value is \"<<boolen_value<<endl;"<<endl<<endl<<endl;
//	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tInformation enter from User";
	cout<<endl<<endl;
	cout<<"Enter a Integer_Number : ";
	cin>>integer_number;
	cout<<"Integer_Number is "<<integer_number<<endl;
	cout<<"Enter a String_Name : ";
	cin>>string_name;
	cout<<"String_Name is "<<string_name<<endl;
	cout<<"Enter a Double_Number : ";
	cin>>double_number;
	cout<<"Double_Number is "<<double_number<<endl;
	cout<<"Enter a Character_Keyword : ";
	cin>>character_keyword;
	cout<<"Character_Keyword is "<<character_keyword<<endl;
	
	// Boolen method. The true condition is (if_statement) and false condition is (else_statement).
	if(1==1){
		boolen_value=true;
	}
	else{
		boolen_value=false;
	}
	cout<<"Boolen_Value is "<<boolen_value<<endl;
	///////////////////////////////  END	/////////////////////////////////////////

	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"\t\t\t\tInformation enter to Self";
	cout<<endl<<endl;	
	int age_1; 
	string name_1;
	age_1=20;
	name_1="Muhammad Allah Rakha";
	cout<<"Age_1 is initialize : "<<age_1<<endl;
	cout<<"Name_1 is initialize : "<<name_1<<endl;
	
	
	const int age_2=21;             // constant type does not change.
	cout<<"My Age is also "<<age_2<<" year."<<endl;
	///////////////////////////////  END	/////////////////////////////////////////
}
