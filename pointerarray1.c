
#include <stdio.h>

int main()
{
    int arr[5]={5,10,15,20,25};
    int i;
    for(i=0;i<5;i++)
    {
        printf("value of arr[%d]=%d\n",i,*(arr+i));
        printf("adress off arr[%d]=%p\n",i,arr+i);
    }

    return 0;
}
