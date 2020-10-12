#include <stdio.h>
#include <string.h>

#include "TerreClass.c"
  static int earthiscreated=0;
  terre Terre;
int main( ) {
   char c;
   
    while(1){
    	printf("a:afficher,c:creer,s:supprimer,m:modifier,q:quitter  :\n");
    	scanf("%c",&c);
    	if(c=='a' || c=='A'){
    	  Terre.terre_show(&Terre);
    	   printf("terre_show \n");
		}
		if(c=='c' || c=='C'){
    	  Terre=terre_create(3,4);
    	   printf("terre_create\n");
		}
	    if(c=='s' || c=='S'){
    	   Terre.terre_clear(&Terre);
    	   printf("terre_clear \n");
		}
		if(c=='m' || c=='M'){
    	   Terre.terre_edit(&Terre,6,2);
    	   printf("terre_edit \n");
		}
		if(c=='q' || c=='Q'){
    	   printf("goodby");
    	   break;
		}
	}
    
   return 0;
}
