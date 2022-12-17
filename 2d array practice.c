//Ilke D.	16.12.2022

#include <stdio.h>

void sum(int array[], int size)
{
int sum = 0;
for (int i = 0; i < size; i++)
{
sum += array[i];
}

printf("\nTheir sum = %d \n",sum);
return ;
}


int main()
{
	int rownum=0, columnnum=0;
	int arr[rownum][columnnum];
	int con=0;
do
{

	printf("Enter number of rows:");
	scanf("%d",&rownum);
	
	printf("Enter number of columns:");
	scanf("%d",&columnnum);
	
	int diagonalArr[rownum]; 

	if (columnnum != rownum)
		{
		printf("Error. The input must be a square matrix \n");
		int con=1;
		}

	else
	{
	printf("Fill the array: \n");
	
	for (int i=0 ; i<rownum ; i++)
	{
		for(int j=0 ; j<columnnum ; j++)
		{
			scanf("%d",&arr[i][j]);
			if (i == j)
			{
				diagonalArr[i] = arr[i][j];
			}

		}
	}

	printf("\n");

	printf("The elements of the main diagonal are: ");
	for (int i=0 ; i<rownum ; i++)
	{
		printf("%d ",diagonalArr[i]);
	}
	
	sum(diagonalArr,rownum);

	con = 1;
	}

}
while(con != 1);
	
return 0;
}
