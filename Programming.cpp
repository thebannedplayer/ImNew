#include <iostream>
#include <string>
#include <windows.h>

using std::string;

int test();
int typecasting();

int num1,num2;
double definefunctiontest();
string Enter_name();
string Enter_name_rival();
string protagonistname;
string name_rival;




int main() {

//Truth
Enter_name();
Enter_name_rival();

//Junk
int c;
c = definefunctiontest(num1,num2);


std::cout <<"\n\n Here Comes the Junk \n";
std::cout << name_rival << protagonistname <<"\n";

typecasting();
return 0;
}

int typecasting()
{
	double double_to_int = 25.6;
	std::cout << int(double_to_int); //int prints 25 because its so
}

int test()
{
	string protagonistname;
	std::cin >> protagonistname;
	std::cout <<"Your names "<< protagonistname << ", is this right? y/n\n";
}

string Enter_name()
{
	for(int i = 9;i > 0;i--)
	{
	
	
	std::cout <<"Please enter your name\n";
	std::cin >> protagonistname;
	std::cout <<"Your names "<< protagonistname << ", is this right? y/n\n";
	
	char confirmName;
	std::cin >>confirmName;
		if(confirmName == 'y')
		{
			std::cout<<"Ok  " << protagonistname <<" I think i dont remember your rival name could you say it?\n\n";
			break;
		}
		else if(confirmName == 'n')
		{
			std::cout <<"OK i will ask again\n";
			Sleep(2000); //wait 2 seconds ;)
		}
		else
		{
			std::cout <<"Did you use y or n? no Y or N tho\n";
		}
	} return protagonistname;
}

string Enter_name_rival()
{

	for(int i = 9;i > 0;i--)
	{
	std::cout <<"Please enter your rival name\n";
	std::cin >> name_rival;
	std::cout <<"Your friend name is "<< name_rival << " right? y/n\n";
	
	char confirmName;
	std::cin >>confirmName;
		if(confirmName == 'y')
		{
			std::cout<<"Ok  " << name_rival <<"  Is your rival and you two want to be the champion good luck on your journal.\n\n";
			break;
		}
		else if(confirmName == 'n')
		{
			std::cout <<"OK i will ask again\n";
			Sleep(2000); //wait 2 seconds ;)
		}
		else
		{
			std::cout <<"Did you use y or n? no Y or N tho\n";
		}
	} return name_rival;
}

int definefunctiontest(int num1,int num2)
{
	float dft;
	dft =(num1*num2);
	return dft;
}
