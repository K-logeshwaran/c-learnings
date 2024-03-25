#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	triangle * areas[n];
    int min =0;
    for (int i=0; i<n; i++) {
        int p =(tr[i].a+tr[i].b+tr[i].c)/2;
        int a=sqrt((p*p-tr[i].a*(p-tr[i].b)*(p-tr[i].c)));
        a>min;
    }
    for (int i=0; i<n; i++) {
        printf("%d ",areas[i]);
        
    }

    /**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}