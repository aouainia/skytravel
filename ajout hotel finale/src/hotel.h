#include <gtk/gtk.h>

typedef struct
{
char  nom_hotel[20];
char lieu[20];

char rank[30];
char prix_par_nuit[20];
int num_hotel;


}hotel;

void ajouter_hotel (hotel h);
void afficher_hotel (GtkWidget *liste);
void modifier_hotel (hotel h);
void supprimer_hotel (int num_h);
