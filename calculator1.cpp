#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include<cmath>

inline void keep_window_open()
{char ch; cin>>ch;}

void show_calculator(){
	cout<< "-------------------------------------------\n";
	cout<< "---                                     ---\n";
	cout<< "-               BASIC                     -\n";
	cout<< "-               CALCULATOR                -\n";
	cout<< "---                                     ---\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-     +    |        -    |       *    -"<<"\n";
	cout<< "-    Add   |      Minus  |    Multiply-"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-    /     |        x    |       q    -"<<"\n";
	cout<< "-  Divide  |       clear |     quit   -"<<"\n";
	cout<< "---------------------------------------"<<"\n";
}

void display_output(double lval ){
	cout<< "---------------------------------------"<<"\n";
	cout<< "---                                 ---"<<"\n";
	cout<< "-               Answer     |          -"<<"\n";
	cout<< "-               Output:    |"<<lval<<"     \n";
	cout<< "---                                 ---"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-     +    |        -    |       *    -"<<"\n";
	cout<< "-    Add   |      Minus  |    Multiply-"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-    /     |        x    |       q    -"<<"\n";
	cout<< "-  Divide  |       clear |     quit   -"<<"\n";
	cout<< "---------------------------------------"<<"\n";
}
int main(){

	double lval=0.0, rval=0.0;
	char oper_inp  = '\0';
	show_calculator();
	while (oper_inp != 'q')
	{
		cout<<"This program does basic calculation(+,-,*,/)	"
			<<"Enter an operation, value1 and value 2 to calculate\n";

		cout<<"Enter operation: ";
		cin>>oper_inp;
	if(oper_inp=='+'||oper_inp=='-'||oper_inp=='*'||oper_inp=='/')
	{
		cout<<"Enter value1: ";
		cin >>lval;
		cout<<"Enter value2: ";
		cin >>rval;
	}
	

	switch(oper_inp){
		case '+':  lval+=rval; break;
			  case '-': lval-=rval; break;
				    case '*': lval*=rval; break;
					      case '/': lval/=rval; break;
					      default:cout<<"Answer: "<<lval <<'\n';break;}
						      if(oper_inp!='q'){
						      display_output(lval); }
						      else{cout<<"Happy learning!!!.";};
	}
}
