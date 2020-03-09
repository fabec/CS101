#include <iostream>

using namespace std;

int sequenceLength(int num){

	int counter=0;
	
	while(num != 1){
		counter++;
	
		if(num % 2 == 0)
			num/=2;
		else
			num=num*3+1;
		
	}
	
	return counter;
}

void welcome(){
	cout << "Welcome to 3n+1 game. please input your number!" << endl;
}

int main(){

	welcome();
	
	int num;
	cin >> num;
	
	cout << "Lenth of the sequence is: " << sequenceLength(num) << endl;
	
	return 1;

}

