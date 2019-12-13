#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "hotel.h"




void
modifierarij_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window2;
GtkWidget *window3;

window2=lookup_widget(button,"window2");

gtk_widget_destroy(window2);
window3=lookup_widget(button,"window3");
window3=create_window3();
gtk_widget_show(window3);
}


void
modifierr_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{hotel h;

GtkWidget *window3; 


GtkWidget *input1,*input2,*input3,*rank,*input4,*num_hotel,*output;

window3=lookup_widget(button,"window3");

input1=lookup_widget(button,"nom_hotela");
input2=lookup_widget(button,"lieua");
input3=lookup_widget(button,"prix_par_nuita");

rank=lookup_widget(button,"ranka");

num_hotel=lookup_widget(button,"num_hotela");


output=lookup_widget(button,"label73");

strcpy(h.nom_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.lieu,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(h.prix_par_nuit,gtk_entry_get_text(GTK_ENTRY(input3)));

strcpy(h.rank,gtk_combo_box_get_active_text(GTK_COMBO_BOX(rank)));

h.num_hotel=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_hotel));







modifier_hotel(h);
gtk_label_set_text(GTK_LABEL(output),"modification terminée");

}


void
ajouterr_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{hotel h;
GtkWidget *input1,*input2,*rank,*input3,*num_hotel;
GtkWidget *window1;

window1=lookup_widget(button,"window1");

input1=lookup_widget(button,"nomH");
input2=lookup_widget(button,"lieuH");

rank=lookup_widget(button,"rank");
input3=lookup_widget(button,"prixH");
num_hotel=lookup_widget(button,"num_hotel");

strcpy(h.nom_hotel,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.lieu,gtk_entry_get_text(GTK_ENTRY(input2)));

strcpy(h.rank,gtk_combo_box_get_active_text(GTK_COMBO_BOX(rank)));
strcpy(h.prix_par_nuit,gtk_entry_get_text(GTK_ENTRY(input3)));
h.num_hotel=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_hotel));

ajouter_hotel(h);

}


void
retourr_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window2;
GtkWidget *window1;
GtkWidget *treeview1;

window1=lookup_widget(button,"window1");


gtk_widget_destroy(window1);
window2=create_window2();
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview1");

afficher_hotel(treeview1);

}


void
ajouter_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window2;
GtkWidget *window3;
GtkWidget *window1;

window2=lookup_widget(button,"window2");

gtk_widget_destroy(window2);
window1=lookup_widget(button,"window1");
window1=create_window1();
gtk_widget_show(window1);

}


void
retourrr_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window2;
GtkWidget *window1;
GtkWidget *treeview1;

window1=lookup_widget(button,"window3");


gtk_widget_destroy(window1);
window2=create_window2();
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview1");

afficher_hotel(treeview1);


}


void
supprimerarij_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *input;
int hot;
input=lookup_widget(button,"num_h");
hot=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input));

supprimer_hotel(hot);
input=lookup_widget(button,"label27");
gtk_label_set_text(GTK_LABEL(input),"hotel supprimer veuillez actualiser");

}

void
actualiserarij_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *treeview;
GtkWidget *window;

window=lookup_widget(button,"window2");
gtk_widget_destroy(window);
window=create_window2();
gtk_widget_show(window);
treeview=lookup_widget(window,"treeview1");
afficher_hotel(treeview);
}


void
on_valider_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *input;
GtkWidget *output;
FILE *f;
hotel h;
int num;
input = lookup_widget(button,"num_hotela");
num=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input));

f=fopen("/home/esprit/Desktop/ajout hotel finale/src/hotel.txt","r");

while(fscanf(f,"%s %s %s %s  %d \n",h.nom_hotel,h.lieu,h.rank,h.prix_par_nuit,&h.num_hotel)!=EOF){
	if(h.num_hotel==num){
		output = lookup_widget(button,"nom_hotela");
		gtk_entry_set_text(GTK_ENTRY(output),h.nom_hotel);
		output = lookup_widget(button,"lieua");
		gtk_entry_set_text(GTK_ENTRY(output),h.lieu);
		output = lookup_widget(button,"prix_par_nuita");
		gtk_entry_set_text(GTK_ENTRY(output),h.prix_par_nuit);
		output = lookup_widget(button,"ranka");
		if(strcmp(h.rank,"3étoile"))
		gtk_combo_box_set_active(GTK_COMBO_BOX(output),0);
		else if(strcmp(h.rank,"4étoile"))
		gtk_combo_box_set_active(GTK_COMBO_BOX(output),1);
		if(strcmp(h.rank,"5étoile"))
		gtk_combo_box_set_active(GTK_COMBO_BOX(output),2);
		}
	}

}

