#include <iostream>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i,j,temp;
	int n = 6;
	int arr[6] = {12,3,21,1,56,9};
	cout << "Array= ";
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << "\n";
	
	for(i=0;i<n-1;i++){
		for(j=0;j < n-i-1;j++){
			if(arr[j]> arr[j+1] )
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
	}
	cout << "Array= ";
	for(int i = 0;i < 6;i++){
		cout <<arr[i]<<"\t";
	}
		
	return 0;
}

