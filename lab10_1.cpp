#include<iostream>
using namespace std;

int main(){
	int count[5] = {0}; 
	char grade;
	int student = 1;
	int total = 0;

	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << student << "]: ";
		cin >> grade; 
		if(grade == '0'){
			break;
		}else if(grade == 'A'){
			count[0]++;
			student ++;
			total++;
		}else if(grade == 'B'){
			count[1]++;
			student ++;
			total++;
		}else if(grade == 'C'){
			count[2]++;
			student ++;
			total++;
		}else if(grade == 'D'){
			count[3]++;
			student ++;
			total++;
		}else if(grade == 'F'){
			count[4]++;
			student ++;
			total++;
		}else{
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	
	cout << "In total " << total << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	
	return 0;
}
