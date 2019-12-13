#include <gtk/gtk.h>

typedef struct{
int jour;
int mois;
int annee;
}date;

typedef struct
{
int num_excur;
char lieu[20];
char dep[30];
date dt;
char prix[20];
char prog[20];
}exc;

void ajouter_excur (exc h);
void afficher_excur (GtkWidget *liste);
void modifier_excur (exc h);
void supprimer_excur (int num_e);
