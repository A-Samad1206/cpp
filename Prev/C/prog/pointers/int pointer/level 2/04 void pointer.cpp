#include<stdio.h>
main()
{
	int x=10;
	float y=20;
	double z=30;
	void *p=&x;
	p=&x;//it is not affecting the copmpilation

	printf("INTEGER IS %d\n\n",*(int *)(p));
	p=&y;
	printf("DECIMAL is %f\n\n",*(float *)(p));
	p=&z;
	printf("DOUBLE IS %lf",*(double *)(p));	
	return 0;
}
