#include <stdio.h>
#include <string.h>
#include "excur.h"
#include <gtk/gtk.h>


enum
{
	NUM_EXCUR,
	LIEU,
	DEP,
	JOUR,
	MOIS,
	ANNEE,
	PRIX_PAR_NUIT,
	PROG,
	COLUMNS
};

void ajouter_excur (exc h)
{

 FILE *f;
 f=fopen("src/excure.txt","a+");
 if(f!=NULL)
 {
 fprintf(f,"%d %s %s %d %d %d %s %s \n",h.num_excur,h.lieu,h.dep,h.dt.jour,h.dt.mois,h.dt.annee,h.prix,h.prog);
 fclose(f);
 }

}

void afficher_excur (GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;



char num_excur[20];
char lieu[20];
char dep[30];
char jour[20];
char mois[20];
char annee[20];
char prix[20];
char prog[20];
store =NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("num excur",renderer,"text",NUM_EXCUR,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("lieu",renderer,"text",LIEU,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("nb_jour",renderer,"text",DEP,NULL);
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
	column=gtk_tree_view_column_new_with_attributes("prix",renderer,"text",PRIX_PAR_NUIT,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("prog",renderer,"text",PROG,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
        
	

	store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

	f=fopen("src/excure.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	
	{ 
	f=fopen("src/excure.txt","a+");
		while(fscanf(f,"%s %s %s %s %s %s %s %s \n",num_excur,lieu,dep,jour,mois,annee,prix,prog)!=EOF)
		{
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,NUM_EXCUR,num_excur,LIEU,lieu,DEP,dep,JOUR,jour,MOIS,mois,ANNEE,annee,PRIX_PAR_NUIT,prix,PROG,prog,-1);
		}
	   fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);

	}
}
}



void modifier_excur(exc h)
{	
int num_excur;
char lieu[20];
char dep[30];
int jour;
int mois;
int annee;
char prix[20];
char prog[20];

	

FILE *f;
FILE *f1;
int test=-1;
f=fopen("src/excure.txt","r");
f1=fopen("src/exmodif.txt","a+");

while(fscanf(f,"%d %s %s %d %d %d %s %s \n",&num_excur,lieu,dep,&jour,&mois,&annee,prix,prog)!=EOF)

{
if (h.num_excur==num_excur)
fprintf(f1,"%d %s %s %d %d %d %s %s \n",h.num_excur,h.lieu,h.dep,h.dt.jour,h.dt.mois,h.dt.annee,h.prix,h.prog);

else
fprintf(f1,"%d %s %s %d %d %d %s %s \n",num_excur,lieu,dep,&jour,&mois,&annee,prix,prog);
}
fclose(f);
fclose(f1);
rename("src/exmodif.txt","src/excure.txt");
}

void supprimer_excur (int num_e)
{
FILE *f;
FILE *f1;
exc h;
f=fopen("src/excure.txt","r+");
f1=fopen("src/supexcure.txt","w+");
while(fscanf(f,"%d %s %s %d %d %d %s %s \n",&h.num_excur,h.lieu,h.dep,&h.dt.jour,&h.dt.mois,&h.dt.annee,h.prix,h.prog)!=EOF)
{
	if (h.num_excur!=num_e)	
	fprintf(f1,"%d %s %s %d %d %d %s %s \n",h.num_excur,h.lieu,h.dep,h.dt.jour,h.dt.mois,h.dt.annee,h.prix,h.prog);
}
fclose(f);
fclose(f1);
rename("src/supexcure.txt","src/excure.txt");
}








