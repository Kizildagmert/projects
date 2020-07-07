#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	int i,j,n,k;
	int count = 0;
	int bk[20];
	int  array[5][4] ={{	   1, 1, 1, 1 },
                             { 0, 0, 0, 0 },
                             { 1, 1, 1, 1 },
                             { 0, 0, 0, 0 },
                             { 1, 1, 1, 1 }
                             
                            };
                             
                    
    for(int row = 0; row<5 ;row++)
    {
    	for(int column=0;column <4;column++){
    		cout << array[row][column]<<"\t";
		}
    	cout << endl;
	}
	cout << endl;
	
	for(int row = 0; row<5 ;row++)
    {
    	for(int column=0;column <4;column++){
    		bk[k++] = array[row][column];
    				}
    	
    	
	}
	cout << endl;
	cout <<"1-D Matris is "<< " ";
	for(k=0;k<20;k++)
	cout << bk[k] << " ";
	
	for(k=0; k < 20; k++){
		if(bk[k] == 0 && bk[k+1] == 0 ){
			count++;
		}
	}
	cout << endl;
	
	cout << "count  = " << count / 2;
	
	
/*	for(i = 0;i <7 ;i++)
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
	}*/
	/*for(int row=0;row<7;row++){
		for(int column=0;column<5;column++){
			
			if(array[row][column] == 0 && array[row][column+1]  == 0){ count++;			}
			/*if(array[row][column] && array[row][column+1] == 0 ){
				count+=1;
			}*/
			
			/*if(array[i][j] && array[i][j+1] && array[i][j+2] == 0){
				if(array[i][j] && array[i+1][j] && array[i][j+1] && array[i+1][j+1] == 0){
					count++;
				}	
						
				}*/
		//	}
				
		//	}
	
	return 0;
}
