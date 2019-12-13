#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "hotel.h"


void
on_afficher_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window2=lookup_widget(objet,"window1");

gtk_widget_destroy(window1);
window2=lookup_widget(objet,"window2");
window2=create_window2();

gtk_widget_show(window2);

treeview1=lookup_widget(window2,"treeview1");

afficher_hotel(treeview1);





}


/*void
on_ajouter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

hotel h;
GtkWidget *input1,*input2,*rank,*input3,*num_hotel;
GtkWidget *window1;

window1=lookup_widget(objet,"window1");

input1=lookup_widget(objet,"nom_hotel");
input2=lookup_widget(objet,"lieu");

rank=lookup_widget(objet,"rank");
input3=lookup_widget(objet,"prix_par_nuit");
num_hotel=lookup_widget(objet,"num_hotel");

strcpy(h.nom_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.lieu,gtk_entry_get_text(GTK_ENTRY(input2)));

strcpy(h.rank,gtk_combo_box_get_active_text(GTK_COMBO_BOX(rank)));
strcpy(h.prix_par_nuit,gtk_entry_get_text(GTK_ENTRY(input3)));
h.num_hotel=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_hotel));

ajouter_hotel(h);

}*/


void
on_retour_clicked                      (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,*window2;

window2=lookup_widget(objet,"window2");

gtk_widget_destroy(window2);
window1=create_window1();
gtk_widget_show (window1);
}




/*void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *window3;

window1=lookup_widget(objet,"window1");

gtk_widget_destroy(window1);
window3=lookup_widget(objet,"window3");
window3=create_window3();
gtk_widget_show(window3);
}


/*void
on_modifiera_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
hotel h;

GtkWidget *window3; 


GtkWidget *input1,*input2,*rank,*input3,*num_hotel,*output;

window3=lookup_widget(objet,"window3");

input1=lookup_widget(objet,"nom_hotela");
input2=lookup_widget(objet,"lieua");
rank=lookup_widget(objet,"ranka");
input3=lookup_widget(objet,"prix_par_nuita");
num_hotel=lookup_widget(objet,"num_vola");


///output=lookup_widget(objet,"label73");

strcpy(h.nom_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.lieu,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(h.rank,gtk_entry_get_text(GTK_ENTRY(input3)));

strcpy(h.rank,gtk_combo_box_get_active_text(GTK_COMBO_BOX(rank)));

h.num_hotel=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_hotel));

strcpy(h.prix_par_nuit,gtk_entry_get_text(GTK_ENTRY(input3)));






modifier_hotel (h);
gtk_label_set_text(GTK_LABEL(output),"modification terminer");
}




/*void
on_supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *num_hotel;
num_hotel=lookup_widget(objet,"num_hotel");
num_hotel=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_hotel));
supprimer_hotel (num_hotel);
}


/*void
on_retour_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_affichera_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


/*void
on_modifiera_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_supprimerarij_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}*/


/*void
on_modifierarij_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}*/


void
on_ajouterarij_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window3;
GtkWidget *window1;

window2=lookup_widget(objet,"window2");

gtk_widget_destroy(window2);
window1=lookup_widget(objet,"window1");
window1=create_window1();
gtk_widget_show(window1);

}


/*void
on_ajouterr_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}*/

