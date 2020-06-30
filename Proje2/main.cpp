#include <iostream>
#include <time.h>
#include <stdlib.h>
// algoritmayı çözdüm fakat sonucu yanlış buluyor.
using namespace std;


int addNumber(int a,int b){
	return a+b;
}
int main(int argc, char** argv) {
	int n,temp,i;
	
	cout<< "Please enter number : ";
	cin>>n;
	int num[n];
	int sum = 0;
	int firstSum;
	srand(time(NULL));
	for (int i=0;i<n;i++)
	{
		
		num[i]=1+rand() % 10;
	}
	cout << "Array= ";
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<"\t";
	}
	cout << "\n";
	for(int i=0; i < n-1;i++){
		for(int j=0; j <n-i-1;j++){
			if(num[j]> num[j+1] )
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	firstSum = num[0] + num[1];
	cout << "Array= ";
	for(int i = 0;i < n;i++){
		cout << num[i]<<"\t";
	}
	int min1 = num[0];
	int min2 = num[1];
	
	for(int i=0; i < n-1;i++){
		for(int j=0; j <n-1;j++){
			if(num[j]> num[j+1] )
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
		
			sum = sum + num[0]+num[1];
        	num[0]=sum;
        	sum = num[0] + num[1];
        //num[1]='/0';
	
	}
	cout << sum;
	/*	if(n%2 == 0){
        sum = sum- firstSum;
        cout << sum;
    }
    else{
          cout << sum;
    }*/
    
    return 0;
}
	











































