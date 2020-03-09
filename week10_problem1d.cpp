#include <iostream>
using namespace std;

int average(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i< size; i++)
        sum += arr[i];

    return sum/size;
}

int minimum(int arr[], int size)
{
    int min;
    for(int i=0; i<size; i++){
        if(i==0) min=arr[i];
        else if(min > arr[i]) min = arr[i];
    }

        return min;
}

int maximum(int arr[], int size)
{
    int max;
     for(int i=0; i<size; i++){
        if(i==0) max=arr[i];
        else if(max < arr[i]) max = arr[i];
    }

        return max;

}

int main()
{
    int size = 6;
    int grades[size];

    for(int i=0; i<size; i++){
        cout << "Grade " << i+1 << ": ";
        cin >> grades[i];
    }

    cout << "Average grade: " << average(grades, size) << endl;
    cout << "Lowest grade: " << minimum(grades, size) << endl;
    cout << "Highest grade: " << maximum(grades, size) << endl;

}