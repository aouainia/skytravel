#include <stdio.h>
#include <string.h>
#include "hotel.h"
#include <gtk/gtk.h>


enum
{
 NOM_HOTEL,
    LIEU,
       
     RANK,
      PRIX_PAR_NUIT,
 NUM_HOTEL,
      
	COLUMNS
};

void ajouter_hotel (hotel h)
{

 FILE *f;
 f=fopen("/home/esprit/Desktop/ajout hotel finale/src/hotel.txt","a+");
 if(f!=NULL)
 {
 fprintf(f,"%s %s %s %s %d  \n",h.nom_hotel,h.lieu,h.rank,h.prix_par_nuit,h.num_hotel);
 fclose(f);
 }

}

void afficher_hotel (GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;


char  nom_hotel[20];
char lieu[20];

char rank[30];
char prix_par_nuit[20];
char num_hotel[20];

store =NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("nomH",renderer,"text",NOM_HOTEL,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("lieuH",renderer,"text",LIEU,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("rank",renderer,"text",RANK,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("prixH",renderer,"text",PRIX_PAR_NUIT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("num_hotel",renderer,"text",NUM_HOTEL,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
        
	

	store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

	f=fopen("/home/esprit/Desktop/ajout hotel finale/src/hotel.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	
	{ 
	f=fopen("/home/esprit/Desktop/ajout hotel finale/src/hotel.txt","a+");
		while(fscanf(f,"%s %s %s %s %s  \n",nom_hotel,lieu,rank,prix_par_nuit,num_hotel)!=EOF)
		{
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,NOM_HOTEL,nom_hotel,LIEU,lieu,RANK,rank,PRIX_PAR_NUIT,prix_par_nuit,NUM_HOTEL,num_hotel,-1);
		}
	   fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);

	}
}
}



void modifier_hotel(hotel h)
{	
char  nom_hotela[20];
char lieua[20];

char ranka[30];
char prix_par_nuita[20];
int num_hotela;

	

FILE *f;
FILE *f1;
int test=-1;
f=fopen("/home/esprit/Desktop/ajout hotel finale/src/hotel.txt","r");
f1=fopen("/home/esprit/Desktop/ajout hotel finale/src/modif.txt","a+");

while(fscanf(f,"%s %s %s %s  %d \n",nom_hotela,lieua,ranka,prix_par_nuita,&num_hotela)!=EOF)

{
if (h.num_hotel==num_hotela)
fprintf(f1,"%s %s %s %s %d \n",h.nom_hotel,h.lieu,h.rank,h.prix_par_nuit,h.num_hotel);

else
fprintf(f1,"%s %s %s %s %d \n",nom_hotela,lieua,ranka,prix_par_nuita,num_hotela);
}
fclose(f);
fclose(f1);
rename("/home/esprit/Desktop/ajout hotel finale/src/modif.txt","/home/esprit/Desktop/ajout hotel finale/src/hotel.txt");
}

void supprimer_hotel (int num_h)
{
FILE *f;
FILE *f1;
hotel h;
f=fopen("/home/esprit/Desktop/ajout hotel finale/src/hotel.txt","r+");
f1=fopen("/home/esprit/Desktop/ajout hotel finale/src/doc.txt","w+");
while(fscanf(f,"%s %s %s %s  %d \n",h.nom_hotel,h.lieu,h.rank,h.prix_par_nuit,&h.num_hotel)!=EOF)
{
	if (h.num_hotel!=num_h)	
	fprintf(f1,"%s %s %s %s  %d \n",h.nom_hotel,h.lieu,h.rank,h.prix_par_nuit,h.num_hotel);
}
fclose(f);
fclose(f1);
rename("/home/esprit/Desktop/ajout hotel finale/src/doc.txt","/home/esprit/Desktop/ajout hotel finale/src/hotel.txt");
}








