#include <stdio.h>
#include "somme.h"

void sum(double U[],double V[],double W[],int *dimension1,int *dimension2)
{
	int i;
	if((*dimension1)>(*dimension2))
	{
		for(i=0;i<(*dimension1);i++)
		{
			W[i]=V[i]+U[i];
		}
	}
	else if((*dimension1)<=(*dimension2))
	{
		for(i=0;i<(*dimension2);i++)
		{
			W[i]=V[i]+U[i];
		}
		(*dimension1)=(*dimension2);
	}
}

void afficher(double W[],int *dimension)
{
	printf("W()= \n");
	int i;
	for(i=0;i<(*dimension);i++)
	{
		printf("%lf,",W[i]);
	
	}
	printf("\n");
}
		
	


