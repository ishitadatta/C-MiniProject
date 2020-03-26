#include<stdio.h>

struct date 
{	int dd;
	int mm;
	int yy;
};

void read(struct date *d)
{	scanf("%d %d %d", &d->dd, &d->mm, &d->yy);
}

int main()
{	struct date d1,d2;
	printf("Enter date 1:");
	read(&d1);
	printf("Enter date 2:");
	read(&d2);
	if(d1.yy==d2.yy)
	{	if(d1.mm==d2.mm)
		{	if(d1.dd==d2.dd)
				printf("Date 1 is equal to Date2");
			else if(d1.dd>d2.dd)
				printf("Date 1 is greater than Date 2");
			else
				printf("Date 1 is smaller tham Date 2");
		}
		else if(d1.mm>d2.mm)
		{	printf("Date 1 is greater than Date 2");
		}
		else
			printf("Date 1 is smaller than date 2");
	}
	else if(d1.yy>d2.yy)
		printf("Date 1 is greater than Date 2");
	else
		printf("Date 1 is smaller than Date 2");
	return 0;
}