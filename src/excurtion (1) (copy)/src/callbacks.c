#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "excur.h"




void
modifierarij_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *modifexcurssionarij;
GtkWidget *excurssionmodarij;

modifexcurssionarij=lookup_widget(button,"modifexcurssionarij");

gtk_widget_destroy(modifexcurssionarij);
excurssionmodarij=lookup_widget(button,"excurssionmodarij");
excurssionmodarij=create_excurssionmodarij();
gtk_widget_show(excurssionmodarij);
}






void
ajouter_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *modifexcurssionarij;
GtkWidget *excurssionmodarij;
GtkWidget *ajoutexcurssionarijmtar;

modifexcurssionarij=lookup_widget(button,"modifexcurssionarij");

gtk_widget_destroy(modifexcurssionarij);
ajoutexcurssionarijmtar=lookup_widget(button,"ajoutexcurssionarijmtar");
ajoutexcurssionarijmtar=create_ajoutexcurssionarijmtar();
gtk_widget_show(ajoutexcurssionarijmtar);

}






void
actualiserarij_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *treeview;
GtkWidget *window;

window=lookup_widget(button,"modifexcurssionarij");
gtk_widget_destroy(window);
window=create_modifexcurssionarij();
gtk_widget_show(window);
treeview=lookup_widget(window,"wafa");
afficher_excur(treeview);
}


void
on_valider_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *input;
GtkWidget *output;
FILE *f;
exc h;
int num;
input = lookup_widget(button,"mod_num_ex");
num=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input));

f=fopen("src/excure.txt","r");

while(fscanf(f,"%d %s %s %d %d %d %s %s \n",&h.num_excur,h.lieu,h.dep,&h.dt.jour,&h.dt.mois,&h.dt.annee,h.prix,h.prog)!=EOF){
	if(h.num_excur==num){
		output = lookup_widget(button,"exlieu_mod");
		gtk_entry_set_text(GTK_ENTRY(output),h.lieu);
		output = lookup_widget(button,"depex_mod");
		gtk_entry_set_text(GTK_ENTRY(output),h.dep);
		output = lookup_widget(button,"prixex_mod");
		gtk_entry_set_text(GTK_ENTRY(output),h.prix);
		output = lookup_widget(button,"proex_mod");
		gtk_entry_set_text(GTK_ENTRY(output),h.prog);
		output = lookup_widget(button,"mod_ex_jour");
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(output),h.dt.jour);
		output = lookup_widget(button,"mod_ex_mois");
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(output),h.dt.mois);
		output = lookup_widget(button,"mod_ex_annee");
		gtk_spin_button_set_value(GTK_SPIN_BUTTON(output),h.dt.annee);
		}
	}

}


void
ar_ex_ajouterr_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
exc h;
GtkWidget *input1,*input2,*prix,*input3,*num;
GtkWidget *ajoutexcurssionarijmtar;

ajoutexcurssionarijmtar=lookup_widget(button,"ajoutexcurssionarijmtar");

input1=lookup_widget(button,"exlieu");
input2=lookup_widget(button,"depex");

prix=lookup_widget(button,"prixex");
input3=lookup_widget(button,"proex");
num=lookup_widget(button,"aj_num_ex");
h.num_excur=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

strcpy(h.lieu,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.dep,gtk_entry_get_text(GTK_ENTRY(input2)));

strcpy(h.prix,gtk_entry_get_text(GTK_ENTRY(prix)));
strcpy(h.prog,gtk_entry_get_text(GTK_ENTRY(input3)));
num=lookup_widget(button,"ex_jour");
h.dt.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

num=lookup_widget(button,"ex_mois");
h.dt.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

num=lookup_widget(button,"ex_annee");
h.dt.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));


ajouter_excur(h);

}


void
retourr_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *modifexcurssionarij;
GtkWidget *ajoutexcurssionarijmtar;
GtkWidget *wafa;

ajoutexcurssionarijmtar=lookup_widget(button,"ajoutexcurssionarijmtar");


gtk_widget_destroy(ajoutexcurssionarijmtar);
modifexcurssionarij=create_modifexcurssionarij();
gtk_widget_show(modifexcurssionarij);
wafa=lookup_widget(modifexcurssionarij,"wafa");

afficher_excur(wafa);

}


void
ex_ajout_retourr_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *modifexcurssionarij;
GtkWidget *ajoutexcurssionarijmtar;
GtkWidget *wafa;

ajoutexcurssionarijmtar=lookup_widget(button,"ajoutexcurssionarijmtar");


gtk_widget_destroy(ajoutexcurssionarijmtar);
modifexcurssionarij=create_modifexcurssionarij();
gtk_widget_show(modifexcurssionarij);
wafa=lookup_widget(modifexcurssionarij,"wafa");

afficher_excur(wafa);

}


void
ar_ex_modifierr_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
exc h;
GtkWidget *input1,*input2,*prix,*input3,*num;
GtkWidget *ajoutexcurssionarijmtar,*output;

ajoutexcurssionarijmtar=lookup_widget(button,"excurssionmodarij");

input1=lookup_widget(button,"exlieu_mod");
input2=lookup_widget(button,"depex_mod");

prix=lookup_widget(button,"prixex_mod");
input3=lookup_widget(button,"proex_mod");
num=lookup_widget(button,"mod_num_ex");
h.num_excur=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

strcpy(h.lieu,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(h.dep,gtk_entry_get_text(GTK_ENTRY(input2)));

strcpy(h.prix,gtk_entry_get_text(GTK_ENTRY(prix)));
strcpy(h.prog,gtk_entry_get_text(GTK_ENTRY(input3)));
num=lookup_widget(button,"mod_ex_jour");
h.dt.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

num=lookup_widget(button,"mod_ex_mois");
h.dt.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

num=lookup_widget(button,"mod_ex_annee");
h.dt.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num));

output=lookup_widget(button,"label73");

modifier_excur(h);
gtk_label_set_text(GTK_LABEL(output),"modification terminée");

}


void
ex_mod_retourrr_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *modifexcurssionarij;
GtkWidget *ajoutexcurssionarijmtar;
GtkWidget *wafa;

ajoutexcurssionarijmtar=lookup_widget(button,"excurssionmodarij");


gtk_widget_destroy(ajoutexcurssionarijmtar);
modifexcurssionarij=create_modifexcurssionarij();
gtk_widget_show(modifexcurssionarij);wafa=lookup_widget(modifexcurssionarij,"wafa");

afficher_excur(wafa);

}


void
ex_supprimerarij_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *input;
int hot;
input=lookup_widget(button,"num_ex");
hot=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input));

supprimer_excur(hot);
input=lookup_widget(button,"label27");
gtk_label_set_text(GTK_LABEL(input),"Excurssion supprimer veuillez actualiser");

}

