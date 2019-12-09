#include <gtk/gtk.h>
int verifier_login(char user_name[],char password[]) ;
void ajouter_login(char user_name[],char user_pname[],char password[],char type[]);
int modifier_login(char user_name[],char user_pname[],char password[],char type[],int idn);
void supprimer_login(int idn);
void afficher_personne(GtkWidget *liste);

