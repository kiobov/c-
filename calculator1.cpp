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
	cout<< "-               SCIENTIFIC                -\n";
	cout<< "-               CALCULATOR                -\n";
	cout<< "---                                     ---\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-     +    |        -    |       *    -"<<"\n";
	cout<< "-    Add   |      Minus  |    Multiply-"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-     /    |        S    |       C    -"<<"\n";
	cout<< "-   Divide |    Square   |      Cube  -"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-    r     |        x    |       q    -"<<"\n";
	cout<< "-  sq root |       clear |     quit   -"<<"\n";
	cout<< "---------------------------------------"<<"\n";
}

void display_output(double answer ){
	cout<< "---------------------------------------"<<"\n";
	cout<< "---                                 ---"<<"\n";
	cout<< "-               Answer     |          -"<<"\n";
	cout<< "-               Output:    |"<<answer<<"   \n";
	cout<< "---                                 ---"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-     +    |        -    |       *    -"<<"\n";
	cout<< "-    Add   |      Minus  |    Multiply-"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-     /    |        S    |       C    -"<<"\n";
	cout<< "-   Divide |    Square   |      Cube  -"<<"\n";
	cout<< "---------------------------------------"<<"\n";
	cout<< "-    r     |        x    |       q    -"<<"\n";
	cout<< "-  sq root |       clear |     quit   -"<<"\n";
	cout<< "---------------------------------------"<<"\n";
}
int main(){
	double lval=0.0, rval=0.0;
	double answer=0.0;
	char oper_inp  = '\0';
	show_calculator();
	while (oper_inp != 'q')
	{
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
		case '+': answer = lval+rval; break;
			  case '-': answer = lval-rval; break;
				    case '*': answer = lval*rval; break;
					      case '/': answer = lval/rval; break;
					      default:cout<<"Answer: "<<answer <<'\n';break;}
						      if(oper_inp!='q'){
						      display_output(answer); }
						      else{cout<<"Bye.";};
	}
}
