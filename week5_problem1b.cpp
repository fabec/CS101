#include <iostream>

using namespace std;

int main(){

	int num;
	int counter=0;
	int numWithLongestSequence=0;
	int longestSequence=0;
	
	for(int i=1; i<=100; i++){
	num=i;
	counter=1;
	while(num != 1){

		counter++;
	
		if(num % 2 == 0)
			num/=2;
		else
			num=num*3+1;
		
	}
		if(counter>longestSequence){
			longestSequence=counter;
			numWithLongestSequence=i;
		}
		
	}
	
	cout << "Longest sequence is: " << longestSequence << " for number " << numWithLongestSequence << endl;

}
