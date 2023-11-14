#include<stdio.h>
int main() {
	int n,m,i,j,sum = 0;
	printf("nhap n , m");
	 scanf("%d%d", &n,&m);
	int a[n][m];
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
		   printf("a[%d,%d] = ",i,j);
	       scanf("%d",&a[i][j]);
	}
}   printf("cac phan tu chan la ");
    for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			if (a[i][j]%2==0) {
				printf ("%d ", a[i][j]);
				sum +=a[i][j];
			}
	    }
    }
	printf("\n");
	printf("tong cac phan tu chan la %d",sum); 
}
