#include<stdio.h>
#include<stdlib.h>

 typedef struct terre {  //class terre
 	int population;
 	int age;
 	void (*terre_show)(struct terre*);
 	void (*terre_edit) (struct terre*,int,int);
 	void (*terre_clear) ();
 }terre;

 terre  terre_create(int,int);

 
 void terre_show(terre*);
 
 
 void terre_edit(terre*,int,int);
 
 
 void terre_clear();
 
 
 
 
 
 
 
 
 
 
