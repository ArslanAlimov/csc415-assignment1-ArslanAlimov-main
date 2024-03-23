/**************************************************************
* Class:  CSC-415
* Name:	  Arslan Alimov	
* Student ID:916612104
* Project: Assignment 1 – Command Line Arguments
*
* File: Alimov_Arslan_HW1_main.c
*
* Description: This file helps to show how to use the Makefile.
*
**************************************************************/
#include <stdio.h>

// Note: This is a bad way to declare main.  Will discuss more later
int main(int counter,char* arguments[])  
//creating a function takes into account counter and a pointer that points to characters in the arguments
{

	printf("\nThere are %d arguments on the command line.\n",counter);
	//prints line There were # of arguments in the command line %d is to include the counter variable in the print function %d is also for integers
	for(int i=0;i<counter;i++)
	//creating simple for loop where i = 0 checks if i less than our counter(arguments) and then i increases by one on each loop
	{
		printf("\nArgument %02d:	%s",i,arguments[i]);
		//if this is true then we print out Argument # (integer %d) : string variable(%s stands for string) (\n new line). 
		//arguments[i] is the iterrations through the array of characters 
	}
	printf("\n");// for our student@student-Virtualbox stuff to be on new line
	return 0;
	//have to include to show that our software runs successfully without any errors since in C I don't think there is an error handling Complete Execution
}
	
