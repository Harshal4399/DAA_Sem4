#include<stdio.h>
#include<math.h>

void n()
{
	for (int i = 0; i <= 100; i++)
	{
		printf("%d, %d\n",i,i);
	}
}
void n3()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=pow(i,3.0);
		printf("%f, %f\n",i,s);
	}
}
void p_2n()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=pow(2,i);
		printf("%f, %f\n",i,s);
	}
}
void n2n()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=i*pow(2,i);
		printf("%f, %f\n",i,s);
	}
}
void en()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=exp(i);
		printf("%f, %f\n",i,s);
	}
}
void p_32n()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=pow(1.5,i);
		printf("%f, %f\n",i,s);
	}
}
void p_2log()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=log2(i);
		s=pow(2,s);
		printf("%f, %f\n",i,s);
	}
}
void loglogn()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=log2(i);
		s=log2(s);
		printf("%f, %f\n",i,s);
	}
}
void log2n()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=log2(i);
		s=pow(s,2);
		printf("%f, %f\n",i,s);
	}
}
void log_2n()
{
	double s;
	for (double i = 0; i <= 100; ++i)
	{
		s=log2(i);
		s=pow(s,0.5);
		printf("%f, %f\n",i,s);
	}
}
void fact()
{
	double s;
	for (double i = 0; i <= 20; ++i)
	{
		s=1;
		for (double j = 1; j <= i; ++j)
		{
			s=s*j;
		}
		printf(" %f\n",s);
	}
}
void main()
{
	n();
	n3();
	p_2n();
	n2n();
	en();
 	p_32n();
 	p_2log();
 	loglogn();
 	log2n();
 	log_2n();
	fact();
	int m;
	scanf("%d",m); 	
}