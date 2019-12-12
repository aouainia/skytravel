#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "vol.h"
#include<string.h>
#include<stdlib.h>
void
on_ajouter_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data)
{

vol v;

GtkWidget *input1,*input2,*input3,*jour,*mois,*annee,*classe,*input4,*num_vol,*output1;
GtkWidget *window2;
GtkWidget *window1;
GtkWidget *output2,*output3,*output4,*output5,*output6;
char empty[]="\0";

window2=lookup_widget(objet,"window2");


output2=lookup_widget(objet,"label100");//control saisie
output3=lookup_widget(objet,"labe101");
output4=lookup_widget(objet,"label102");
output5=lookup_widget(objet,"label103");
output6=lookup_widget(objet,"label105");



input1=lookup_widget(objet,"compagnie_aerienne");
input2=lookup_widget(objet,"destination");
input3=lookup_widget(objet,"depart");
jour=lookup_widget(objet,"jour");
mois=lookup_widget(objet,"mois");
annee=lookup_widget(objet,"annee");
classe=lookup_widget(objet,"classe");
input4=lookup_widget(objet,"tarif");
num_vol=lookup_widget(objet,"num_vol");

output1=lookup_widget(objet,"label95");
strcpy(v.compagnie_aerienne,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(v.destination,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(v.depart,gtk_entry_get_text(GTK_ENTRY(input3)));
v.date_depart.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
v.date_depart.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
v.date_depart.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
strcpy(v.classe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(classe)));
strcpy(v.tarif,gtk_entry_get_text(GTK_ENTRY(input4)));
v.num_vol=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_vol));

gtk_label_set_text(GTK_LABEL(output1),"Ajout terminé");


if(strcmp(v.compagnie_aerienne,empty)==0)//CONTROLE SAISIE
{
gtk_label_set_text(GTK_LABEL(output2),"ce champ est obligatoire");
}
else if(strcmp(v.destination,empty)==0)
{
gtk_label_set_text(GTK_LABEL(output3),"ce champ est obligatoire");
}
else if(strcmp(v.depart,empty)==0)
{
gtk_label_set_text(GTK_LABEL(output4),"ce champ est obligatoire");
}
else if(strcmp(v.classe,empty)==0)
{
gtk_label_set_text(GTK_LABEL(output5),"ce champ est obligatoire");
}
else if(strcmp(v.tarif,empty)==0)
{
gtk_label_set_text(GTK_LABEL(output6),"ce champ est obligatoire");
}




else{




ajouter_vol(v);
}
}
/*void
on_afficher_clicked                    (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet,"window2");

gtk_widget_destroy(window1);
window1=lookup_widget(objet,"window2");
window1=create_window2();

gtk_widget_show(window2);

treeview1=lookup_widget(window2,"treeview1");

afficher_vol(treeview1);

}*/



/*void
on_retour_clicked                      (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window1,*window2;

window2=lookup_widget(objet,"window2");

gtk_widget_destroy(window2);

window1=create_window1();
gtk_widget_show (window1);
}*/










void
on_modifier_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window3,*output1,*output2,*output3,*output;



window2=lookup_widget(objet,"window2");

gtk_widget_destroy(window2);
window3=lookup_widget(objet,"window3");
window3=create_window3();
gtk_widget_show(window3);





}


/*void
on_supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *num_vol;
num_vol=lookup_widget(objet,"num_vol");
num_vol=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_vol));
supprimer_vol (num_vol);
}*/





void
on_ajoutera_clicked                    (GtkWidget       *objet,
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




void
on_affichera_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet,"window1");

gtk_widget_destroy(window1);
window2=lookup_widget(objet,"window2");
window2=create_window2();

gtk_widget_show(window2);

treeview1=lookup_widget(window2,"treeview1");

afficher_vol(treeview1);
}




void
on_supprimer_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *numh,*output2;
int num;
numh=lookup_widget(objet,"num");

output2=lookup_widget(objet,"label94");
num=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(numh));
gtk_label_set_text(GTK_LABEL(output2),"Supprission terminée");
supprimer_vol (num);
}





void
on_retour_clicked                      (GtkWidget      *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window1;


window1=lookup_widget(objet,"window1");


gtk_widget_destroy(window1);
window2=create_window2();
gtk_widget_show(window2);
}



void
on_debut_clicked                       (GtkWidget       *objet,
                                        gpointer         user_data)
{

GtkWidget *window2;
GtkWidget *window3;
GtkWidget *treeview1;

window3=lookup_widget(objet,"window3");

gtk_widget_destroy(window3);
window2=create_window2();
gtk_widget_show(window2);
treeview1=lookup_widget(window2,"treeview1");

afficher_vol(treeview1);

}


void
on_valider_clicked                     (GtkWidget      *objet,
                                        gpointer         user_data)
{

vol v;
GtkWidget window3;
GtkWidget *input1,*output1,*output2,*output3,*output8,*output4,*output5,*output6,*output7;

char ch1[20];
char ch2[20];
char ch3[20];


int num_vola;
output1=lookup_widget(objet,"compagnie_aeriennea");
output2=lookup_widget(objet,"destinationa");
output3=lookup_widget(objet,"departa");
output4=lookup_widget(objet,"classea");

output5=lookup_widget(objet,"joura");
output6=lookup_widget(objet,"moisa");
output7=lookup_widget(objet,"anneea");
output8=lookup_widget(objet,"tarifa");
input1=lookup_widget(objet,"num_vola");
num_vola=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(input1));
/*
strcpy(v.compagnie_aerienne,gtk_entry_get_text(GTK_ENTRY(output1)));/////
strcpy(v.destination,gtk_entry_get_text(GTK_ENTRY(output2)));
strcpy(v.depart,gtk_entry_get_text(GTK_ENTRY(output3)));
strcpy(v.classe,gtk_entry_get_text(GTK_ENTRY(output4)));
v.date_depart.jour=gtk_entry_get_text(GTK_ENTRY(output5));
v.date_depart.mois=gtk_entry_get_text(GTK_ENTRY(output6));
v.date_depart.annee=gtk_entry_get_text(GTK_ENTRY(output7));
strcpy(v.tarif,gtk_entry_get_text(GTK_ENTRY(output8)));
*/


FILE *f;
	f=fopen("/home/esprit/Desktop/ajout vol finale/src/vol.txt","r");
	if(f!=NULL)
{
while(fscanf(f,"%s %s %s %d %d %d %s %s %d \n",v.compagnie_aerienne,v.destination,v.depart,&v.date_depart.jour,&v.date_depart.mois,&v.date_depart.annee,v.classe,v.tarif,&v.num_vol)!=EOF)
{
	if (v.num_vol==num_vola)
{
printf("%d",v.date_depart.jour);
sprintf(ch1,"%d",v.date_depart.jour);
sprintf(ch2,"%d",v.date_depart.mois);
sprintf(ch3,"%d",v.date_depart.annee);

gtk_entry_set_text (GTK_ENTRY (output1),v.compagnie_aerienne);
gtk_entry_set_text (GTK_ENTRY (output2),v.destination);
gtk_entry_set_text (GTK_ENTRY (output3),v.depart);
gtk_entry_set_text (GTK_ENTRY (output4),v.classe);
gtk_entry_set_text (GTK_ENTRY (output5),ch1);
gtk_entry_set_text (GTK_ENTRY (output6),ch2);
gtk_entry_set_text (GTK_ENTRY (output7),ch3);

gtk_entry_set_text (GTK_ENTRY (output8),v.tarif);

}
}
}



}
void
on_modifiera_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
vol v;

GtkWidget *window3; 


GtkWidget *output, *input1,*input2,*input3,*jour,*mois,*annee,*classe,*input4,*num_vol,*output1,*output2,*output3,*output4,*output5,*output6,*output7,*output8;

window3=lookup_widget(objet,"window3");

input1=lookup_widget(objet,"compagnie_aeriennea");
input2=lookup_widget(objet,"destinationa");
input3=lookup_widget(objet,"departa");
jour=lookup_widget(objet,"joura");
mois=lookup_widget(objet,"moisa");
annee=lookup_widget(objet,"anneea");
classe=lookup_widget(objet,"classea");
input4=lookup_widget(objet,"tarifa");
num_vol=lookup_widget(objet,"num_vola");




v.num_vol=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_vol));





output=lookup_widget(objet,"label73");

strcpy(v.compagnie_aerienne,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(v.destination,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(v.depart,gtk_entry_get_text(GTK_ENTRY(input3)));
v.date_depart.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
v.date_depart.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
v.date_depart.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
strcpy(v.classe,gtk_entry_get_text(GTK_ENTRY(classe)));
strcpy(v.tarif,gtk_entry_get_text(GTK_ENTRY(input4)));
v.num_vol=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(num_vol));







modifier_vol(v);
gtk_label_set_text(GTK_LABEL(output),"modification terminée");
}



void
on_actualisation_clicked               (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *treeview1;

window2=lookup_widget(objet,"window2");

gtk_widget_destroy(window2);

window2=create_window2();
gtk_widget_show (window2);
treeview1=lookup_widget(window2,"treeview1");

afficher_vol(treeview1);
}

