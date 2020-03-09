#include <iostream>
using namespace std;

bool mutually_prime(int a, int b){
	bool result;
	
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
		}
		
		result=true;
	
	for(int i=2; i<b; i++){
		if(a==1 || b==1)
			result = false;
		
		else if(a % i == 0 && b % i == 0){
			result = false;
			
			}
	}
	
	return result;
}

void mutually_prime(int a, int b, bool& result){
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
		}
		
		result=true;
	
	for(int i=2; i<a; i++){
		if(a==1 || b==1)
			result = false;
		
		else if(a % i == 0 && b % i == 0){
			result = false;
			}
	}
	
}

int main(){
	
	int a, b;
	cin >> a >> b;
	bool result = mutually_prime(a, b);
	cout << result << endl;
	mutually_prime(a, b, result);
	cout << result << endl;

}
