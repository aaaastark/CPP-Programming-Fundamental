#include <iostream>
#include <fstream>  
// This fstream is use for File Handling.
using namespace std;

void object_file_1();
void object_file_2();

void filehandling(){
	object_file_1();
	object_file_2();
}

void object_file_1(){
	ofstream output_file;
	output_file.open("FileData.txt");
	output_file<<"Muhammad Allah Rakha"; // this << is use as COUT for data store in file.
	output_file.close();
	
	
	ifstream input_file;
	input_file.open("FileData.txt");
	string name;
	getline(input_file,name);  // Get data from TextFile as character_wise.
	cout<<"Name is "<<name<<endl;
	input_file.close();
	 
}

void object_file_2(){
	fstream output_file;
	output_file.open("FileData.txt",ios::out);
	output_file<<"M.A.R"; // this << is use as COUT for data store in file.
	output_file<<endl;
	output_file<<20;
	output_file.close();
	
	
	fstream input_file;
	input_file.open("FileData.txt",ios::in);
	string name;  int age;
	getline(input_file,name);  // Get data from TextFile as character_wise.
	input_file>>age;
	cout<<"Name is "<<name<<endl;
	cout<<"Age is "<<age<<endl;
	input_file.close();
	 
}
