#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
	char grade;
	double gradePoints =0,GPA =0;
	int counter =0;
	do 
	{
		cout<<"Enter the letter grade (Enter 'X' to exit ) \n";
		cin>>grade;
		if(grade =='A' || grade == 'a') gradePoints += 4;
		else if(grade =='B' || grade =='b') gradePoints += 3;
		else if(grade =='C' || grade =='c') gradePoints += 2;
		else if(grade =='D' || grade =='d') gradePoints += 1;
		else if(grade =='F' || grade =='f') gradePoints += 0;
		else if(grade =='X' || grade =='x') break;
		counter ++;
	}while (grade !='X' && grade !='x');
	GPA=gradePoints/counter;
	cout<<"gradePoints= "<<gradePoints<<endl;
	cout<<"GPA = "<<GPA<<endl;

}