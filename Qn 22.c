#include<stdio.h>
int main(){
	int arr[50], range, n, head, i, sum=0, sum1=0;
	printf("Enter max range of Disk: ");
	scanf("%d", &range);
	printf("Enter number of queue requests: ");
	scanf("%d", &n);
	printf("Enter head position: ");
	scanf("%d", &head);
	printf("Enter the queue requests in order: ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		printf("Disk head moves from %d to %d", head, arr[i]);
		printf("\n");
		if(head>arr[i]){
			sum=head-arr[i];
		}
		else if(head<arr[i]){
			sum=arr[i]-head;
		}
		sum1+=sum;
		head=arr[i];
	}
	printf("\n Seek time: %d", sum1);
}
