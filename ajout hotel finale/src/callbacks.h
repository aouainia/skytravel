#ifndef HOTEL_H_INCLUDED
#define HOTEL_H_INCLUDED
#include <gtk/gtk.h>



void
modifierarij_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
modifierr_clicked                      (GtkButton       *button,
                                        gpointer         user_data);


void
ajouterr_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
retourr_clicked                        (GtkButton       *button,
                                        gpointer         user_data);

void
ajouter_clicked                        (GtkButton       *button,
                                        gpointer         user_data);


void
retourrr_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
supprimerarij_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
actualiserarij_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_valider_clicked                     (GtkButton       *button,
                                        gpointer         user_data);
#endif

