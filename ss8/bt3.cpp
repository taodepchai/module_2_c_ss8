#include<stdio.h>
int main() {
	int n,i,find_number,sum = 0;
	printf("nhap n");
	 scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	printf("nhap find_number");
	 scanf("%d",&find_number);
	printf("chi so cua cac phan tu bang find_number la ");
	for (i=0;i<n;i++) {
		if (a[i] == find_number) {
		  printf("%d ", i);
		  sum += a[i];
	    }
	}
	printf("\n");
	printf("tong cua cac phan tu bang find_number la %d", sum);
}
