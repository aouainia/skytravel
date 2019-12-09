#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"
#include <gtk/gtk.h>
#include "callbacks.h"
enum
{
	NOM,
	PRENOM,
	MDP,
	TYPE,
	IDA,
	COLUMNS
};
int id ;
int verifier_login(char user_name[],char password[]){
FILE*f;
char nom[20]; char mdp[20];char prenom[20];
int numero=0 ;

	f=fopen("utilisateurs.txt","r");//ouvertur du fichier en mode lecture
	if(f !=NULL) { //si le fichier est ouvert
		while(fscanf(f,"%s %s %s %d %d \n",nom,prenom,mdp,&numero,&id)!=EOF){ //parcours du fichier
			if(strcmp(nom,user_name)==0 && strcmp(mdp,password)==0){
			return (numero) ;
			} 
		}
	fclose(f);
	}
}

void ajouter_login(char user_name[],char user_pname[],char password[],char type[]){
FILE*f;
char nom[20];
char mdp[20];char prenom[20];
char t[20];
int numero=0 ;
	if(strcmp(type,"admin")==0){
	numero=1;}
	if(strcmp(type,"client")==0){
	numero=2;}
	if(strcmp(type,"agent_clientel")==0){
	numero=3;}
	if(strcmp(type,"agent_marketing")==0){
	numero=4;}
	f=fopen("utilisateurs.txt","a+");//ouverture du fichier en mode ecriture a la fin
	if(f !=NULL) { //si le fichier est ouvert
		fprintf(f,"%s %s %s %d %d \n",user_name,user_pname,password,numero,id+1);
	}
	fclose(f);
}
int modifier_login(char user_name[],char user_pname[],char password[],char type[],int idn){
FILE*f;
FILE*tmp;
char nom[20];
char mdp[20];char prenom[20];
int idm;
int numerom=0;
int numero=0;
int k=0;
	if(strcmp(type,"admin")==0){
	numero=1;}
	if(strcmp(type,"client")==0){
	numero=2;}
	if(strcmp(type,"agent_clientel")==0){
	numero=3;}
	if(strcmp(type,"agent_marketing")==0){
	numero=4;}
	f=fopen("utilisateurs.txt","r");//ouverture du fichier en mode ecriture a la fin
	tmp=fopen("utilisateurs.tmp","a+");
	while(fscanf(f,"%s %s %s %d %d \n",nom,prenom,mdp,&numerom,&idm)!=EOF){

		if(idn==idm){
			fprintf(tmp,"%s %s %s %d %d \n",user_name,user_pname,password,numero,idn);
			k=1;
		}
		else{
			fprintf(tmp,"%s %s %s %d %d \n",nom,prenom,mdp,numerom,idm);	
		}
		
			
	}
	fclose(f);
	fclose(tmp);
	rename("utilisateurs.tmp","utilisateurs.txt");
	return k ;
}
void supprimer_login(int idn){
FILE*f;
FILE*tmp;
char nom[20];
char mdp[20];char prenom[20];
int ids;
int numeros=0;
	f=fopen("utilisateurs.txt","r");//ouverture du fichier en mode ecriture a la fin
	tmp=fopen("utilisateurs.tmp","a+");
	while(fscanf(f,"%s %s %s %d %d \n",nom,prenom,mdp,&numeros,&ids)!=EOF){

		if(idn!=ids){
			fprintf(tmp,"%s %s %s %d %d \n",nom,prenom,mdp,numeros,ids);
			}
	}
	fclose(f);
	fclose(tmp);
	rename("utilisateurs.tmp","utilisateurs.txt");
}
void afficher_personne(GtkWidget *liste){
GtkCellRenderer *renderer ; //afficher des cellules
GtkTreeViewColumn *column; ; //visualisation des colonnes
GtkTreeIter iter;	//position
GtkListStore *store ; //creation du modele de type liste
char nom[20];
char mdp[20];
char prenom[20] ;
char ida[20];
char type[20];
int numero ;
store=NULL;
FILE *f;
store=gtk_tree_view_get_model(liste);
	if (store==NULL)
	{
		renderer=gtk_cell_renderer_text_new();
		column= gtk_tree_view_column_new_with_attributes("nom",renderer,"text",NOM,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW(liste),column);
		
		renderer=gtk_cell_renderer_text_new();
		column= gtk_tree_view_column_new_with_attributes("prenom",renderer,"text",PRENOM,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW(liste),column);

		renderer=gtk_cell_renderer_text_new();
		column= gtk_tree_view_column_new_with_attributes("mdp",renderer,"text",MDP,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW(liste),column);

		renderer=gtk_cell_renderer_text_new();
		column= gtk_tree_view_column_new_with_attributes("type",renderer,"text",TYPE,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW(liste),column);
		renderer=gtk_cell_renderer_text_new();
		column= gtk_tree_view_column_new_with_attributes("ida",renderer,"text",IDA,NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW(liste),column);
		
		//la ligne contient colonnes de type chaine de caractere
		store=gtk_list_store_new (COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
		f=fopen("utilisateurs.txt","r");
		if(f==NULL)
		{
		return;
		}
		else
		{
		f=fopen("utilisateurs.txt","a+");
			while(fscanf(f,"%s %s %s %s %s \n",nom,prenom,mdp,type,ida)!=EOF) //parcours du fichier
			{ /*if (numero ==1)
				{strcpy(type,"admin");}
			  if (numero ==2)
				{strcpy(type,"client");}
			  if (numero ==3)
				{strcpy(type,"agent_clientel");}
			  if (numero ==4)
				{strcpy(type,"agent_marketing");}*/
			gtk_list_store_append(store,&iter);
			
			gtk_list_store_set(store,&iter,NOM,nom,PRENOM,prenom,MDP,mdp,TYPE,type,IDA,ida,-1);
			}
			fclose(f);
		gtk_tree_view_set_model (GTK_TREE_VIEW (liste), GTK_TREE_MODEL(store));
		g_object_unref (store);
		}
	}
}	
