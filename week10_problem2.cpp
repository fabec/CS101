#include <iostream>
using namespace std;

void print(int arr[][4], int size)
{
    for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
    cout << arr[i][j] << " ";
    }cout << endl;
    }
}

int main()
{
    int size = 4;
    int arr[4][4];
    int a = 1;
     for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
    arr[i][j] = a++;
    }
    }


     print(arr, size);
     
     for(int i=0; i<size; i++){
         arr[i][i]=0;
     }

     print(arr, size);

}