#include <stdio.h>
#include "scalaire.h"
void take_value(double V[],int *dimension)
{
	int i;
	printf("What's the dimension of u re vector :");
	scanf("%d",dimension);
	printf("Enter all coordonate for the vecteur of the dimension %d\n",*dimension);
	for(i=0;i<(*dimension);i++)
	{
		printf("%d : ",i);
		scanf("%lf",&V[i]);
	}
}

double dot_product(double V[],double U[],int *dimension1,int *dimension2)
{
	double W[100];
	int i;
	double scalaire=0;
	if((*dimension1)<(*dimension2))
	{
		for(i=0;i<(*dimension2);i++)
		{
			W[i]=U[i]*V[i];
		}
		*(dimension1)=*(dimension2);
	}
	else if((*dimension1)>=(*dimension2))
	{
		for(i=0;i<(*dimension1);i++)
		{
			W[i]=U[i]*V[i];
		}

	}
	printf("W = \n");
	for(i=0;i<(*dimension1);i++)
	{
		scalaire=scalaire + W[i];
	}
	return scalaire;
}
void print(double S)
{
	printf("produit scalaire de U V = %.2lf\n",S);
}

