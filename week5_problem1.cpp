#include <iostream>

using namespace std;

int main(){

	int num;
	cin >> num;
	int counter=0;
	
	while(num != 1){
		cout << num << " " << endl;
		counter++;
	
		if(num % 2 == 0)
			num/=2;
		else
			num=num*3+1;
		
	}
	
	cout << "Lenth of the sequence is: " << counter << endl;

}
