#include <iostream>

using namespace std;

int main(){
	
	int a;
	int b;
	
	cout << "Input num." << endl;
	cin >> a;
	cin >> b;
	int counter=1;
	
	while(counter <= a){
		
		if( counter % b == 0)
			cout << counter << endl;
			
		counter++;
		}

}
