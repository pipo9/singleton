
#include<stdio.h>

#include<stdlib.h>

#include "TerreClass.h"

 static terre This;
 int first_terre_age=0; // rolle de symaphore pour ne pas creer plus qu'une seule terre 

 static void terre_init(terre *This){
 	This->terre_clear=terre_clear;
	This->terre_edit=terre_edit;
	This->terre_show=terre_show;
 }

terre  terre_create(int population,int age){  // methode pour gerer la creation de la terre 
     
 	if(first_terre_age==0){ //check if an other 'terre' exist
	first_terre_age++;
	This.age=age;
	This.population=population;
	terre_init(&This);
    }
    else{
    	puts("ERROR:il y a deja une terre \n");
	}
	return This;
 }
 
 void terre_show(terre *This){
 	  printf("l'age de la terre est:%d \n",This->age);
 	  printf("la population de la terre est:%d \n",This->population);
 }
 
 void terre_edit(terre *This,int population,int age){
 	This->age=age;
 	This->population=population;
 }
 
 
 void terre_clear(){
       first_terre_age--;
 }
 
 

 
 
 
 
 
 
 
 
 
