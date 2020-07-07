#include <stdio.h>
#include <malloc.h>
void swap(int *a,int n)
{

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }

}
int main()
{
    int n;
    int *a=0;
    int i;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);

    for(i=0; i<n; i++)
    {
        a[i]=rand();
    }
    swap(a,n);
    for(i=0; i<n; i++)
    {
        printf ("p[%d]=%d\n",i,a[i]);
    }
    free(a);
    printf("Hello World!\n");
    return 0;
}
