#include <stdio.h>

int main() 
{
    int i;
    int arr[6]={1,2,3,4,5,6};
    int max=arr[0];
    for(i=1;i<6;i++)
    {
        if (arr [i]>max);
        {
        max=arr[i];
    }
    }
    printf("%d", max);
    
}
