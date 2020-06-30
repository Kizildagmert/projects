#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	int i,j,n;
	
	int  array[7][5] ={ { 1, 1, 0, 0, 0 },
                             { 0, 0, 1, 1, 1 },
                             { 0, 0, 1, 0, 0 },
                             { 0, 1, 1, 0, 0 },
                             { 1, 0, 1, 0, 1 },
                             { 1, 0, 1, 1, 1 },
                             { 0, 0, 1, 0, 0}};
                             
                    
    for(i = 0;i <7 ;i++)
    {
    	for(j=0;j <5;j++){
    		cout << array[i][j]<<"\t";
		}
    	cout << endl;
	}
	cout << endl;
	for(i = 0;i <7 ;i++)
    {
    	for(j=0;j <5;j++){
    		if(array[i][j] == 0)
    		{
    			cout << "*";
			}
			else{
				cout << 1;
			}
    
		}
    	cout << endl;
	}
	
	return 0;
}
