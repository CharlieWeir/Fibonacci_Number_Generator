#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start[2] = {0,1};
    int temp = 0;
    int usrEndPoint = 0;

    printf("Fibonacci Sequence Generator 1.0\n");

    printf("Enter sequence end point:\n");
    scanf("%d", &usrEndPoint);

    printf("End point %d selected:\n", usrEndPoint);

    for(int i=0;i<usrEndPoint;i++)
        {
            temp = start[0] + start[1];
            printf("%d\n",start[1]);

            start[0] = start[1];
            start[1] = temp;

        }


    return 0;
}
