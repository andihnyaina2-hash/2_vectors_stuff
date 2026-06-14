#include <stdio.h>
#include <string.h>
#include "scalaire_vecteur/scalaire.h"
#include "somme_vecteur/somme.h"

//euh yyeah,it's just only for two vectors rn.

void choice(char choosed[],double V[],double U[],double W[],int *dimension1,int *dimension2);
void choice(char choosed[],double V[],double U[],double W[],int *dimension1,int *dimension2)
{
	/*this function is used to perform the action to make */
	double S=0;//assigning value 0 to S to avoid false memory allocation (i k i should learn to use malloc)
	printf("Do You want to find the dot product or the sum of the 2 vectors : ");
        scanf(" %[^\n]",choosed);
        if(strcasecmp(choosed,"the sum")==0)//sum function
        {
                sum(V,U,W,dimension1,dimension2);
                afficher(W,dimension1);
        }
        else if(strcasecmp(choosed,"the dot product")==0)//dot product
        {
                S=dot_product(V,U,dimension1,dimension2);
                print(S);
        }
	else
	{
		printf("Choose between 'the dot product'or'the sum'\n");
	}
	       		
}

int main()
{	
	double V[100],U[100],W[100];
	int dV,dU;
	char choosed[13];
        take_value(V,&dV);
        take_value(U,&dU);
	choice(choosed,V,U,W,&dV,&dU);
	return(0);
}	


