#include <stdio.h>
#include <stdlib.h>
#define MAX_TOKENS 5
#include <string.h>
#include <math.h>
#include "reseau.h"

int main()
{
	char addresse[22];
	
	printf("Entrez l'ddresse IP V4 : ");
	scanf("%s",addresse);
	
	condition(addresse);
	
	int *tab=NULL;
	tab=malloc(40*sizeof(char));
	tab=tableau(addresse);
	
	class(addresse,tab);
	
	int *binaire=NULL;
	binaire=malloc(40*sizeof(char));
	binaire=calc_bin(tab);
	
	char mask[22];
	
	printf("Entrez le masque de sous reseau : ");
	scanf("%s",mask);
	
	condition(mask);
	
	int *tab_mask=NULL;
	tab_mask=malloc(40*sizeof(char));
	tab_mask=tableau(mask);

	int *bin_mask=NULL;
	bin_mask=malloc(40*sizeof(char));
	bin_mask=calc_bin(tab_mask);

	condition_mask(bin_mask);
	
	int *bin_reseau=NULL;
	bin_reseau=malloc(40*sizeof(char));
	bin_reseau=addresse_reseau_binaire(binaire,bin_mask);
	
	
	int *bin_tmp=NULL;
	bin_tmp=malloc(40*sizeof(char));
	bin_tmp=contraire(bin_mask);
	
	int *bin_broadcast=NULL;
	bin_broadcast=malloc(40*sizeof(char));
	bin_broadcast=addresse_broadcast_binaire(binaire,bin_tmp);
	
	printf("addresse reseau : ");
	addresse_reseau(bin_reseau);
	printf("\n");
	
	printf("addresse de broadcast : ");
	addresse_reseau(bin_broadcast);
	printf("\n");
	
	return (0);
}
