#include<stdio.h>

int main(){
    int arr[100];
    int n;
    printf("Enter the number of Elemenets: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max,min;
    int sum=0;
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
        sum+=arr[i];
    }
    printf("Maximum Element: %d\n",max);
    printf("Minimum Element: %d\n",min);
    printf("The Maximum difference is %d",max-min);


    printf("\nThe array in reverse order is : ");
    for(int i=n-1;i>=0;i--) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The sum of array elements are %d.",sum);

    return 0;
}