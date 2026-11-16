
#include <stdio.h>

int main() {
    int b, c;
    float x;

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    if (b == 0) 
	{     
        if (c == 0) 
		{     
	        printf("Phuong trinh vo so nghiem");
	    } 
	    else
	    {
	    	printf("Phuong trinh vo nghiem");
	    }
    } 
	else 
	{
        x = (float)-c / b;
        printf("Phuong trinh co nghiem x = %0.2f", x);
    }

    return 0;
}


