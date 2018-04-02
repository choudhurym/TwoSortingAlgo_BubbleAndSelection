#include<stdio.h>
#include<stdlib.h>

//fucntion prototypes
void bubbleSort( int array1[], int size1 );
void selectionSort( int array2[], int size2 );

//main function
int main()
{
	int size1; //this is for taking user input to ask how many elements to sort
	printf("How many elements do you want to sort for first list? -> "); //asking user through this promt
	scanf("%d", &size1); //taking input from user

	int size2; //this is for taking user input to ask how many elements to sort
	printf("How many elements do you want to sort for second list? -> "); //asking user through this promt
	scanf("%d", &size2); //taking input from user
	
	// declared an array where we would hold the elements from user
	int *array1 = (int*)malloc(sizeof(int)*size1); 
	int *array2 = (int*)malloc(sizeof(int)*size2);
	
	int i = 0; // initialized for the loop
	
	//this for loop will continue until it checks the user input and store each element into array		
	for( i = 0; i < size1; i++)
	{
		scanf("%d",&array1[i]);
	}
	for( i = 0; i < size2; i++)
	{
		scanf("%d",&array2[i]);
	}
	printf("The list for bubble sort: ");
	for(i = 0; i < size1; i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");	
	
	printf("The list for selection sort: ");
	for(i = 0; i < size2; i++)
	{
		printf("%d ",array2[i]);
	}			
	printf("\n");

	bubbleSort(array1, size1);
	selectionSort(array2, size2);
	
	printf("The bubble sorted list is:\n");
	for( i = 0; i < size1; i++)
	{
		printf("%d\n", array1[i]);
		
	}

	printf("The selection sorted list is:\n");
	for( i = 0; i < size2; i++)
	{
		printf("%d\n", array2[i]);
		
	}
	free(array1);
	free(array2);
	return 0;		
}
//bubble sort function
void bubbleSort( int array1[], int size1 )
{
	int i , j ;
	//this for loop will go through the entire array 
	for(i = 0; i < size1 - 1; i++)
	{
		//this for loop will be checking the elements and swapping to rearrange
		for( j = 0; j < size1 - 1; j++)
		{
			//checking if the first element is greater than the next element
			if(array1[ j ] > array1[ j + 1 ])
			{
				//computation for swapping
				int swap = array1[ j ];
				array1[ j ] = array1[ j + 1 ];
				array1[ j + 1 ] = swap;
			}
		} 
	}
}
//selection sort function
void selectionSort( int array2[], int size2 )
{
	int i, j, min;
	for(i = 0; i < size2; i++)
	{
		min = i;
		//this for loop will be checking the elements and swapping to rearrange
		for( j = i + 1; j < size2; j++)
		{
			//checking if the first element is greater than the next element
			if(array2[ j ] < array2[ min ])
			{	
				min = j;
				//computation for swapping
				int temp = array2[ min ];
				array2[ min ] = array2[ i ];
				array2[ i ] = temp;
			}
		} 
	}
}
