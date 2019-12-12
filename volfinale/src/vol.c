#include <stdio.h>
#include <string.h>
#include "vol.h"
#include <gtk/gtk.h>


enum
{
 
 COMPAGNIE_AERIENNE,
    DESTINATION,
       
     DEPART,
      JOUR,
	MOIS,
	ANNEE,
       
      
      CLASSE,
       TARIF,  
NUM_VOL, 
      
	COLUMNS
};

void ajouter_vol (vol v)
{

 FILE *f;
 f=fopen("vol.txt","a+");
 if(f!=NULL)
 {
 fprintf(f,"%s %s %s %d %d %d %s %s %d \n",v.compagnie_aerienne,v.destination,v.depart,v.date_depart.jour,v.date_depart.mois,v.date_depart.annee,v.classe,v.tarif, v.num_vol);
 fclose(f);
 }

}

void afficher_vol (GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char  compagnie_aerienne[20];
char destination[20];
char depart[30];
char jour [20];
char mois [20];
char annee[20];
char classe [20];
char tarif[10];
char num_vol[20];

store =NULL;

FILE *f;
vol v;
store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("compagnie_aerienne",renderer,"text",COMPAGNIE_AERIENNE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("destination",renderer,"text",DESTINATION,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("depart",renderer,"text",DEPART,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
	
         
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("jour",renderer,"text",JOUR,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
          
        renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("mois",renderer,"text",MOIS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
        

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("annee",renderer,"text",ANNEE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
        
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("classe",renderer,"text",CLASSE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
        
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("tarif",renderer,"text",TARIF,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


        renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("num_vol",renderer,"text",NUM_VOL,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
        
        
	

	store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

	f=fopen("/home/esprit/Desktop/ajout vol finale/src/vol.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	
	{ 
	f=fopen("/home/esprit/Desktop/ajout vol finale/src/vol.txt","a+");
		while(fscanf(f,"%s %s %s %s %s %s %s %s %s \n",compagnie_aerienne,destination,depart,jour,mois,annee,classe,tarif,num_vol)!=EOF)
		{
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,COMPAGNIE_AERIENNE,compagnie_aerienne,DESTINATION,destination,DEPART,depart,JOUR,jour,MOIS,mois,ANNEE,annee,CLASSE,classe,TARIF,tarif
,NUM_VOL,num_vol,-1);
		}
	   fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);
	}
}
}




void modifier_vol(vol v)
{	
char  compagnie_aerienne1[20];
char destination1[20];
char depart1[30];
Date date_depart1;
char classe1 [20];
char tarif1[10];
int num_vol1;

	

FILE *f;
FILE *f1;
int test=-1;
f=fopen("/home/esprit/Desktop/ajout vol finale/src/vol.txt","r");
f1=fopen("/home/esprit/Desktop/ajout vol finale/src/modif.txt","a+");

while(fscanf(f,"%s %s %s %d %d %d %s %s %d \n",compagnie_aerienne1,destination1,depart1,&date_depart1.jour,&date_depart1.mois,&date_depart1.annee,classe1,tarif1,&num_vol1)!=EOF)

{
if (v.num_vol==num_vol1)
fprintf(f1,"%s %s %s %d %d %d %s %s %d \n",v.compagnie_aerienne,v.destination,v.depart,v.date_depart.jour,v.date_depart.mois,v.date_depart.annee,v.classe,v.tarif, v.num_vol);

else
fprintf(f1,"%s %s %s %d %d %d %s %s %d \n",compagnie_aerienne1,destination1,depart1,date_depart1.jour,date_depart1.mois,date_depart1.annee,classe1,tarif1, num_vol1);
}
fclose(f);
fclose(f1);
remove("/home/esprit/Desktop/ajout vol finale/src/vol.txt");
rename("/home/esprit/Desktop/ajout vol finale/src/modif.txt","/home/esprit/Desktop/ajout vol finale/src/vol.txt");
}

void supprimer_vol (int num)
{
FILE *f;
FILE *f1;
vol v;
f=fopen("/home/esprit/Desktop/ajout vol finale/src/vol.txt","r");
f1=fopen("/home/esprit/Desktop/ajout vol finale/src/doc.txt","a+");
while(fscanf(f,"%s %s %s %d %d %d %s %s %d \n",v.compagnie_aerienne,v.destination,v.depart,&v.date_depart.jour,&v.date_depart.mois,&v.date_depart.annee,v.classe,v.tarif,&v.num_vol)!=EOF)
{
	if (v.num_vol!=num)	
	fprintf(f1,"%s %s %s %d %d %d %s %s %d \n",v.compagnie_aerienne,v.destination,v.depart,v.date_depart.jour,v.date_depart.mois,v.date_depart.annee,v.classe,v.tarif, v.num_vol);
}
fclose(f);
fclose(f1);
remove("/home/esprit/Desktop/ajout vol finale/src/vol.txt");
rename("/home/esprit/Desktop/ajout vol finale/src/doc.txt","/home/esprit/Desktop/ajout vol finale/src/vol.txt");
}




