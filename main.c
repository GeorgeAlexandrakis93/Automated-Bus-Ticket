#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//dhlwsh metablhtwn
	char user, ticket[8], carryon[10]="KO";
	int num, discount;
	float cost, price, cost2, poso, coin, total, change;
	
	//1o erwthma
	printf ("Kalws hr8ate sto neo susthma ekdoshs eishthriwn !\n\n");
	printf ("Parakalw eisagete A gia anhlikos, F gia foithths, E gia enhlikas h H gia hlikiwmenos.\n\n");
	scanf ("%c", &user);
	
	if (user!='A' && user!='F' && user!='E' && user!='H'){
		while (user!='A' && user!='F' && user!='E' && user!='H') {
			printf ("Plhktrologhsate la8os, parakalw dokimaste ksana.\n\n");
			scanf ("%c", &user);
		}
	}
			
	//2o erwthma
	system("cls");
	printf ("O8onh epiloghs eishthriou: \n\nPosa eishthria epi8umeite na agorasete ?\n\n");
	scanf ("%d", &num);
	
	while (num<1 || num>4) {
		printf ("Den mporeite na agorasete logitera apo 1 h perissotera apo 4 eishthria, parakalw dokimaste ksana.\n\n");
		scanf ("%d", &num);	
	}
	
	//3o erwthma
	printf ("Eniaio = 1.40 eurw \nMeiwmeno = 0.60 eurw\n\n");
	printf ("Parakalw eisagete Eniaino h Meiwmeno anistoixa.\n\n");
	scanf ("%s", &ticket);
	
	if (user=='A' || user=='F' || user=='H'){
		while (strcmp(ticket, "Meiwmeno")!=0) {
			printf ("Parakalw plhktrologhste Meiwmeno ka8ws eiste eite anhlikos, eite foithths, eite hlikiwmenos.\n\n");
			scanf ("%s", &ticket);
		}
	}
	else{
		while (strcmp(ticket, "Eniaio")!=0) {
			printf ("Parakalw plhktrologhste Eniaio, ka8ws eiste enhlikas.\n\n");
			scanf ("%c", &ticket);
		}
	}
	
	if (strcmp(ticket, "Eniaio")==0){
		cost = num*1.4;
		price = 1.4;
		if ( num=='4'){
			cost2 = cost-cost*10/100.0;
			discount = 10;
		}}
	else{
		cost = num*0.6;
		price = 0.6;
		if ( num >= '3'){
			cost2 = cost-cost*5/100.0;
			discount = 5;
		}
	}
	
	//4o & 5o erwthma
	system("cls");
	printf ("O8onh agoras eishthriou:\n\n");
	printf ("H ofeilh sas antistoixei se %f\n\n", cost2);	
	printf ("Parakalw eisagete to poso pou 8a kataballetai gia thn plhrwmh.\n");
	scanf ("%f", &poso);
	
	do{
		printf ("Parakalw eisagete ena ena ta kermata sas.\n\n");
		scanf ("%f", &coin);
			while ("coin!=0.01 && coin!=0.02 && coin!=0.05 && coin!=0.1 && coin!=0.2 && coin!=0.5 && coin!=1 && coin!=2"){
				printf ("Eisagate mh uparkto kerma, parakalw dokimaste ksana\n\n");
	 			scanf ("%f", &coin);
			}
		total = total + coin;	
		printf ("An h plhrwmh sas teleiwse, plhktrologhste OK, alliws otidhpote allo.\n\n");
		scanf ("%s", &carryon);
		if (strcmp(carryon, "OK")==0){
			change = total - cost2;
			if (change>0){
				printf ("Exete %f resta.\n\n", change);
				}
			else if (change=0){
				printf ("Den exete resta.\n\n");
			}
			else{
				change = (-1)*change;
				while (change>0){
					printf ("To poso auto den eparkei gia thn plhrwmh, parakalw eisagete ta ypolopoia kermata\n\n");
					scanf ("%f", &coin);
					change = change - coin;
				}
			}	
		}
	}while (strcmp(carryon, "OK")==0);

	
	if (change<0){
		change = (-1)*change;
	}
		
	//6o erwthma
	printf ("Thanks for your purchase.\nHere is the receipt of your purchase:\n\n\n");
	printf ("**************************************************************************\n\nPayment method: CASH\n\n\n");
	printf ("\t\t\t\t\t\t\t\t  Total tickets bought: %int\n\n", num);
	printf ("\t\t\t\t\t\t\t Fair (per ticket): %f\n\n", price);
	printf ("\t\t\t\t\t\t\t\t\t\t Discount: %d\n\n", discount);
	printf ("\t\t\t\t\t Total Price (before discount): %f\n\n", cost);
	printf ("\t\t\t\t\t Final Price (after discount): %f\n\n", cost2);
	printf ("\t\t\t\t\t\t\t Total euros inserted: %f\n\n", poso);
	printf ("\t\t\t\t\t\t\t\t\t Total change: %f\n\n\n\n", change);
	printf ("**************************************************************************");
	
	return 0;
}
