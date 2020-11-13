#include <iostream>
using namespace std;
void operators(){
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<"Arithmetic operators are used to perform common mathematical operations."<<endl;
	cout<<"Arithmetif operators is ( + , - , * , / , % , ++ , -- )"<<endl<<endl;
	
	int integer_number=0;
	
	cout<<"The Arithmetic Operators is x=+2 "<<endl;
	integer_number=+2;
	cout<<"Arithmetic Operators  + : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is x=-1 "<<endl;
	integer_number=-1;
	cout<<"Arithmetic Operators  - : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is x=x* (-2) "<<endl;
	integer_number=integer_number*2;
	cout<<"Arithmetic Operators  * : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is x=x/1 "<<endl;
	integer_number=integer_number/1;
	cout<<"Arithmetic Operators  / : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is x=x%1 "<<endl;
	integer_number=integer_number%1;
	cout<<"Arithmetic Operators  % : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is ++x "<<endl;
	++integer_number;
	cout<<"Arithmetic Operators  ++ : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is x++ "<<endl;
	integer_number++;
	cout<<"Arithmetic Operators  ++ : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is --x "<<endl;
	--integer_number;
	cout<<"Arithmetic Operators  -- : "<<integer_number<<endl;
	cout<<"The Arithmetic Operators is x-- "<<endl;
	integer_number--;
	cout<<"Arithmetic Operators  -- : "<<integer_number<<endl;

	///////////////////////////////  END	/////////////////////////////////////////

	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"Assignment operators are used to perform common mathematical operations."<<endl;
	cout<<"Assignment operators is ( = , += , -= , *= , /= , %= , &= , |= , >>= , <<= , ^= )"<<endl<<endl;
	
	int integer_number_1=0;
	
	cout<<"The Assignment Operators is x=10 "<<endl;
	integer_number_1=10;
	cout<<"Assignment Operators  = : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x+=1 "<<endl;
	integer_number_1 +=1;
	cout<<"Assignment Operators  += : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x-=2 "<<endl;
	integer_number_1 -=2;
	cout<<"Assignment Operators  -= : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x*=1 "<<endl;
	integer_number_1*=1;
	cout<<"Assignment Operators  *= : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x/=1 "<<endl;
	integer_number_1 /=1;
	cout<<"Assignment Operators  /= : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x%=2 "<<endl;
	integer_number_1 %=2;
	cout<<"Assignment Operators  %= : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x&=10 "<<endl;
	integer_number_1 &=10;
	cout<<"Assignment Operators  &= : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is x|=12 "<<endl;
	integer_number_1 |=12;
	cout<<"Assignment Operators  |= : "<<integer_number_1<<endl;
	cout<<"The Assignment Operators is >>=1 "<<endl;
	integer_number_1>>=1;
	cout<<"Assignment Operators  >>= : "<<integer_number<<endl;
	cout<<"The Assignment Operators is <<=1 "<<endl;
	integer_number_1<<=1;
	cout<<"Assignment Operators  <<= : "<<integer_number<<endl;
	cout<<"The Assignment Operators is ^=2 "<<endl;
	integer_number_1^=2;
	cout<<"Assignment Operators  >>= : "<<integer_number<<endl;
	
	///////////////////////////////  END	/////////////////////////////////////////
	
	///////////////////////////////  START	/////////////////////////////////////////
	cout<<endl<<endl<<endl;
	cout<<"Comparison operators are used to perform common mathematical operations."<<endl;
	cout<<"Comparison operators is ( == , != , > , < , >= , <= )"<<endl<<endl;
	
	int integer_number_2=10;
	
	cout<<"The Comarison Operators is x==10 "<<endl;
	if (integer_number_2 == 10){
		cout<<"Comarison Operators  == : "<<integer_number_2<<endl;
	}
	cout<<"The Comarison Operators is x!=1 "<<endl;
	if (integer_number_2 != 1){
		cout<<"Comarison Operators  != : "<<integer_number_2<<endl;
	}
	cout<<"The Comarison Operators is x>5 "<<endl;
	if (integer_number_2 > 5){
		cout<<"Comarison Operators  > : "<<integer_number_2<<endl;
	}
	cout<<"The Comarison Operators is x<15 "<<endl;
	if (integer_number_2 < 15){
		cout<<"Comarison Operators  < : "<<integer_number_2<<endl;
	}
	cout<<"The Comarison Operatorss is x>=5 "<<endl;
	if (integer_number_2 >= 5){
		cout<<"Comarison Operators  >= : "<<integer_number_2<<endl;
	}
	cout<<"The Comarison Operators is x<=15 "<<endl;
	if (integer_number_2 <= 15){
		cout<<"Comarison Operators  <= : "<<integer_number_2<<endl;
	}
	///////////////////////////////  END	/////////////////////////////////////////
	
	///////////////////////////////  START	/////////////////////////////////////////	
	cout<<endl<<endl<<endl;
	cout<<"Logical operators are used to perform common mathematical operations."<<endl;
	cout<<"Logical operators is ( && , || , ! )"<<endl<<endl;
	
	int integer_number_3=15;
	
	cout<<"The Logical Operators is x && 15 "<<endl;
	if (integer_number_3 && 15){
		cout<<"Logical Operators  && : "<<integer_number_3<<endl;
	}
	cout<<"The Logical Operators is x || 10 "<<endl;
	if (integer_number_3 || 10){
		cout<<"Logical Operators  || : "<<integer_number_3<<endl;
	}
	cout<<"The Logical Operators is !(x==15) "<<endl;
	if (!(integer_number_3 == 15)){
		cout<<"Logical Operators  ! : "<<integer_number_3<<endl;
	}
	///////////////////////////////  END	/////////////////////////////////////////
	
}
