#include <gtk/gtk.h>
 

typedef struct
{ int jour;
int mois;
int annee;
}Date;



typedef struct
{

char  compagnie_aerienne[20];
char destination[20];
char depart[30];
Date date_depart ;
char classe [20];
char tarif[10];
int num_vol;

}vol;

void ajouter_vol (vol v);
void afficher_vol (GtkWidget *liste);
void modifier_vol (vol v);

void supprimer_vol (int num);
