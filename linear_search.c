/*linear Search*/

#include<stdio.h>
#include<conio.h>

int main()
{   
    //array
	int A[]={10,8,2,7,3,4,9,1,6,5};
	
	//variable
	int POS=-1; //to hold the position of the target element in the array
	int I=0; //lower bound of the array (to be used in the loop section)
    int N=sizeof(A)/sizeof(A[0]);// get the size of the array
    int VAL=5; //value to be searched in the array (alternatively target array)
    
    //loop
    while(I<N)
    {
    	if(A[I]==VAL)
    	{
    		POS=I;
    		printf("The target element is located at the index: %d\n",POS);
    		exit(0); //exit the program
		}
		
		I=I+1; //move to the next element present in the array
		
	}
	//loop ends
	//even if after checking all the elements in the array we are unable to locate the value then check for the same and print the result
	if(POS==-1)
	{
		printf("Element is not present in the array! Sorry");
	}
	return 0;
}
