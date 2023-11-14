#include<stdio.h>
int main() {
	int n,i;
	printf("nhap n");
	 scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	int max = a[1], min = a[1];
	for (i=0;i<n;i++) {
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	printf("max trong mang la %d, min trong mang la %d",max,min);
}
