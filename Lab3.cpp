#include <stdio.h>

int main() {
	int h,m,s;
	int next;
	printf("Enter time (h:m:s): ");
	scanf("%d:%d:%d",&h,&m,&s);
	
	printf("Hour: %d\n",h);
	printf("Minute: %d\n",m);
	printf("second: %d\n",s);
	
	printf("Next minutes: ");
    scanf("%d", &next);
    
    m = m + next;

    h = h + (m / 60);
    m = m % 60;

    h = h % 24;
    
    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("Second:%d\n", s);
	
}
