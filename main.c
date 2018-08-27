#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,k;
    printf("Enter the size of array:\n");
    scanf("%d",&N);
    int myArray[N];
    printf("Enter the elements of array:\n");
    for(i=0;i<N;i++) {
        scanf("%d",&myArray[i]);
    }
    int firstLarge,secondLarge,secondSmall,firstSmall;
    firstLarge=secondLarge=myArray[0];
    for (i=1;i<N;i++){
        if(myArray[i]>firstLarge){
                secondLarge=firstLarge;
                firstLarge=myArray[i];

        }
    }
    firstSmall,secondSmall=firstLarge;
    /*for (j=1;j<N;j++){
            if (myArray[j]<firstSmall){
                secondSmall=firstSmall;
                firstSmall=myArray[j];
            }

        }*/




        for ( j = 0; j < N; j++)
    {
        for (int k = 1; k < N; k++)
        {
            if (myArray[j] < firstSmall)
            {
                firstSmall = myArray[j];

                if (myArray[k] < secondSmall)
                {
                    secondSmall = myArray[k];
                }
            }
        }

    }

























        printf("Second Largest Element of the array is:\n%d\n",secondLarge);
    printf("Second Smallest Element of the array is:\n%d\n",secondSmall);
    }




