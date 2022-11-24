#include <iostream>

using namespace std;

int main()
{
    int a[10];
    int n,i;
    int sum1 = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        sum1 += a[i];
        // sum = sum + a[i]
    }

    printf("\n aver = %d", sum1 / n);
   

    return 0;
}
