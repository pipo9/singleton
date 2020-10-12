#include <stdio.h>
#include <string.h>

#include "TerreClass.c"
  static int earthiscreated=0;
  terre Terre;
 
int main( ) {
   char c;
    while(1){
    	if(earthiscreated!=0){
	       printf("a:afficher,c:creer,s:supprimer,m:modifier,q:quitter  :\n");
    	   scanf("%c",&c);
    	if(c=='a' || c=='A'){
		   Terre.terre_show(&Terre);
    	   printf(" \n");
    	   
		}
	
	    if(c=='s' || c=='S'){
	    	earthiscreated--;
    	    Terre.terre_clear();
    	   printf("\n");
		}
		if(c=='m' || c=='M'){
    	   Terre.terre_edit(&Terre,6,2);
    	   printf("\n");
		}	
		}
		else {
			printf("il faut creer une terre ( maintenant vous pouvez que : q:quitter ou c:creer ):: \n");
			scanf("%c",&c);
		}
		if(c=='c' || c=='C'){
    	  Terre=terre_create(3,4);
    	  earthiscreated++;
    	   printf("\n");
		}
		if(c=='q' || c=='Q'){
    	   printf("goodby");
    	   break;
		}
	}
    
   return 0;
}
