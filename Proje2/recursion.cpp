
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int addNumber(int a,int b){
    return a+b;
}
int toplam(int num[],int n){
	int sum = 0;
	int firstSum = num[0] + num[1];
	

	if(n == 0){
		return 0;
	}
		return toplam(num,n-1) + num[n-1];
		}
	

int main(){
	int n,temp,i;
	cout<< "Please enter number : ";
	cin>>n;
	/*if(n < 1 || n > 10)
	{
		cout << "Wrong number. Please enter number between 1 and 10"<<endl;
	}*/
	
	int num[n];
	int sum = 0;
	
	
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
	cout << "Array= ";
	for(int i = 0;i < n;i++){
		cout << num[i]<<"\t";
	}
	
	int sonuc = toplam(num,n);
	cout << sonuc << endl;

	return 0;
}
