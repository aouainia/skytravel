#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <gtk/gtkclist.h>
#include <gdk/gdkkeysyms.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "login.h"

/**1**modifier l'entete de button****/
void
on_button1anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{ /**2**declarer les poiteurs su gtkwidget****/
GtkWidget *input1anouer;	//entry1anouer
GtkWidget *input2anouer;	//entry2anouer
GtkWidget *output1anouer;	//label3anouer
GtkWidget *output2anouer;	//label4anouer
GtkWidget *output5anouer;	//label5anouer
GtkWidget *window1anouer;
GtkWidget *window2anouer;
GtkWidget *window3anouer;
GtkWidget *window4anouer;
GtkWidget *window5anouer;
 /**3**declarer les chaines de caracteres login et password****/
char user_name[20] ;
char password[20] ;
char message[100] ;
int v ;
/**4**liez les poiteurs *input *output au objet graphiques****/
input1anouer = lookup_widget(objet_graphique, "entry1anouer") ;
input2anouer = lookup_widget(objet_graphique, "entry2anouer") ;
output1anouer = lookup_widget(objet_graphique, "label3anouer") ;
output2anouer = lookup_widget(objet_graphique, "label4anouer") ;
output5anouer = lookup_widget(objet_graphique, "label5anouer") ;
window1anouer = lookup_widget(objet_graphique, "window1anouer") ;
window2anouer = lookup_widget(objet_graphique, "window2anouer") ;
window3anouer = lookup_widget(objet_graphique, "window3anouer") ;
window4anouer = lookup_widget(objet_graphique, "window4anouer") ;
window5anouer = lookup_widget(objet_graphique, "window5anouer") ;
/**5**recuperer les text saisis dans entry****/
strcpy(user_name,gtk_entry_get_text(GTK_ENTRY(input1anouer)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2anouer)));
/**6** modifier label si login faut****/
	v=verifier_login(user_name,password);
	if (v==0){
	gtk_label_set_text(GTK_LABEL(output1anouer),"verifier vos donner");

	} 
	else if(v==1){		//admin

	window2anouer = create_window2anouer ();
	gtk_widget_show (window2anouer);
	gtk_widget_hide (window1anouer);
		
	}
	else if(v==2){		//client
	window3anouer = create_window3anouer ();
	gtk_widget_show (window3anouer);
	gtk_widget_hide (window1anouer);
	}
	else if(v==3){		//agent clientel
	window4anouer = create_window4anouer ();
	gtk_widget_show (window4anouer);
	gtk_widget_hide (window1anouer);
	}
	else if(v==4){		//agent marketing
	window5anouer = create_window5anouer ();
	gtk_widget_show (window5anouer);
	gtk_widget_hide (window1anouer);
	}
	
}
 


void	//retour espace admin
on_button2anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *window1anouer;
	GtkWidget *window2anouer;
	window1anouer = lookup_widget(objet_graphique, "window1anouer") ;
	window2anouer = lookup_widget(objet_graphique, "window2anouer") ;
	window1anouer = create_window1anouer ();
	gtk_widget_show (window1anouer);
	gtk_widget_hide (window2anouer);
}


void	//retour espace client
on_button3anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	
	GtkWidget *window1anouer;
	GtkWidget *window3anouer;
	window1anouer = lookup_widget(objet_graphique, "window1anouer") ;
	window3anouer = lookup_widget(objet_graphique, "window3anouer") ;
	window1anouer = create_window1anouer ();
	gtk_widget_show (window1anouer);
	gtk_widget_hide (window3anouer);
}


void	//retour espace agent clientelle
on_button4anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *window1anouer;
	GtkWidget *window4anouer;
	window1anouer = lookup_widget(objet_graphique, "window1anouer") ;
	window4anouer = lookup_widget(objet_graphique, "window4anouer") ;
	window1anouer = create_window1anouer ();
	gtk_widget_show (window1anouer);
	gtk_widget_hide (window4anouer);
}


void	//retour espace agent marketing
on_button5anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *window1anouer;
	GtkWidget *window5anouer;
	window1anouer = lookup_widget(objet_graphique, "window1anouer") ;
	window5anouer = lookup_widget(objet_graphique, "window5anouer") ;
	window1anouer = create_window1anouer ();
	gtk_widget_show (window1anouer);
	gtk_widget_hide (window5anouer);
	
}




void
on_button6anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *window2anouer;
	GtkWidget *window6anouer;
	GtkWidget *treeview1anouer;
	window2anouer = lookup_widget(objet_graphique, "window2anouer") ;
	gtk_widget_destroy (window2anouer);
	window6anouer = lookup_widget(objet_graphique, "window6anouer") ;
	window6anouer = create_window6anouer ();
	gtk_widget_show (window6anouer);
	treeview1anouer = lookup_widget(window6anouer, "treeview1anouer") ;
	afficher_personne(treeview1anouer);
	

}


void 
on_button7anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *window7anouer;
	GtkWidget *window6anouer;
	window7anouer = lookup_widget(objet_graphique, "window7anouer") ;
	window6anouer = lookup_widget(objet_graphique, "window6anouer") ;
	window7anouer = create_window7anouer ();
	gtk_widget_show (window7anouer);
	gtk_widget_hide (window6anouer);

}


void
on_button8anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *window9anouer;
	GtkWidget *window6anouer;
	window9anouer = lookup_widget(objet_graphique, "window9anouer") ;
	window6anouer = lookup_widget(objet_graphique, "window6anouer") ;
	window9anouer = create_window9anouer ();
	gtk_widget_show (window9anouer);
	gtk_widget_hide (window6anouer);


}


void
on_button9anouer_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void //valider l'ajoute
on_button11anouer_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *output8anouer;	//label8anouer
	GtkWidget *input3anouer;	//entry3anouer nom
	GtkWidget *input4anouer;	//entry4anouer mot de passe
	GtkWidget *input8anouer;	//entry8anouer prenom
	GtkWidget *combobox1anouer;	//combobox1anouer poste
	char user_name[25];
	char user_pname[25];
	char password[25];
	char type[25];
	char message[100];
	int test=0;

	/*liez les poiteurs *input *output au objet graphiques****/
	input3anouer = lookup_widget(objet_graphique, "entry3anouer") ;
	input4anouer = lookup_widget(objet_graphique, "entry4anouer") ;
	input8anouer = lookup_widget(objet_graphique, "entry8anouer") ;
	combobox1anouer = lookup_widget(objet_graphique, "combobox1anouer") ;
	output8anouer = lookup_widget(objet_graphique, "label8anouer") ;
	/*recuperer les text saisis dans entry****/
	strcpy(user_name,gtk_entry_get_text(GTK_ENTRY(input3anouer)));
	strcpy(user_pname,gtk_entry_get_text(GTK_ENTRY(input8anouer)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input4anouer)));

	strcpy(type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1anouer)));
	test=verifier_login(user_name,password);
	if (test==0)
	{
		if(strcmp(user_name,"")==0||strcmp(user_pname,"")==0||strcmp(password,"")==0||strcmp(password,"")==0)
		{
		gtk_label_set_text(GTK_LABEL(output8anouer),"remplir tout les champs");
		}
		else
		{
	ajouter_login(user_name,user_pname,password,type);
	gtk_label_set_text(GTK_LABEL(output8anouer),"ce compte est crée ");
		}
	}
	else if(test==1)
	{ 
	gtk_label_set_text(GTK_LABEL(output8anouer),"ce compte est deja inscrit comme admin");
	}
	else if(test==2)
	{ 
	gtk_label_set_text(GTK_LABEL(output8anouer),"ce compte est deja inscrit comme client");
	}
	else if(test==3)
	{ 
	gtk_label_set_text(GTK_LABEL(output8anouer),"ce compte est deja inscrit comme agent clientel");
	}
	else if(test==4)
	{ 
	gtk_label_set_text(GTK_LABEL(output8anouer),"ce compte est deja inscrit comme agent marketing");
	}
	
}


void 
on_button12anouer_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *window8anouer;
	GtkWidget *window1anouer;
	window8anouer = lookup_widget(objet_graphique, "window8anouer") ;
	window1anouer = lookup_widget(objet_graphique, "window1anouer") ;
	window8anouer = create_window8anouer ();
	gtk_widget_show (window8anouer);
	gtk_widget_hide (window1anouer);

}


void //valider l'inscription
on_button13anouer_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *output10anouer;	//label10anouer
	GtkWidget *input6anouer;	//entry6anouer
	GtkWidget *input7anouer;	//entry7anouer
	char user_name[25];
	char user_pname[25];
	char password[25];
	int test=0;

	/*liez les poiteurs *input *output au objet graphiques****/
	input6anouer = lookup_widget(objet_graphique, "entry6anouer") ;
	input7anouer = lookup_widget(objet_graphique, "entry7anouer") ;
	output10anouer = lookup_widget(objet_graphique, "label10anouer") ;
	/*recuperer les text saisis dans entry****/
	strcpy(user_name,gtk_entry_get_text(GTK_ENTRY(input6anouer)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input7anouer)));
	test=verifier_login(user_name,password);
	if(test==0)
	{	if(strcmp(user_name,"")==0||strcmp(password,"")==0)
		{
		gtk_label_set_text(GTK_LABEL(output10anouer),"remplir les champs");
		}
		else
		{
		ajouter_login(user_name,user_pname,password,"client");
		gtk_label_set_text(GTK_LABEL(output10anouer),"ce compte est crée ");
		}
	}
	else
	{ 
	gtk_label_set_text(GTK_LABEL(output10anouer),"ce compte est deja existe");
	}
	

}


void
on_button14anouer_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	GtkWidget *output16anouer;	//label16anouer
	GtkWidget *output17anouer;	//label17anouer
	GtkWidget *input9anouer;	//entry9anouer nom
	GtkWidget *input11anouer;	//entry11anouer mot de passe
	GtkWidget *input10anouer;	//entry10anouer prenom
	GtkWidget *combobox2anouer;	//combobox2anouer poste
	char user_name[25];
	char user_pname[25];
	char password[25];
	char type[25];
	char idc[25];
	char message[100];
	int test=0;
	int idn;
	int disponible;

	/*liez les poiteurs *input *output au objet graphiques****/
	input9anouer = lookup_widget(objet_graphique, "entry9anouer") ;
	input11anouer = lookup_widget(objet_graphique, "entry11anouer") ;
	input10anouer = lookup_widget(objet_graphique, "entry10anouer") ;
	combobox2anouer = lookup_widget(objet_graphique, "combobox2anouer") ;
	output16anouer = lookup_widget(objet_graphique, "label16anouer") ;
	output17anouer = lookup_widget(objet_graphique, "label17anouer") ;
	/*recuperer les text saisis dans entry****/
	strcpy(idc,gtk_label_get_text(GTK_LABEL(output17anouer)));
	idn=atoi(idc);
	strcpy(user_name,gtk_entry_get_text(GTK_ENTRY(input9anouer)));
	strcpy(user_pname,gtk_entry_get_text(GTK_ENTRY(input10anouer)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input11anouer)));
	strcpy(type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2anouer)));
	
		if(strcmp(user_name,"")==0||strcmp(user_pname,"")==0||strcmp(password,"")==0||strcmp(password,"")==0||strcmp(type,"")==0)
		{
		gtk_label_set_text(GTK_LABEL(output16anouer),"remplir tout les champs");
		}
		else
		{
		disponible=modifier_login(user_name,user_pname,password,type,idn);
			if (disponible==1){
			gtk_label_set_text(GTK_LABEL(output16anouer),"ce compte est modifier ");
			}
			else{
			gtk_label_set_text(GTK_LABEL(output16anouer),"ce compte a été supprimer vous pouvez ajouter un nouveau compte ");
			}
		}
	
	
}


void
on_treeview1anouer_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkWidget *window9anouer, *m_nom, *m_prenom, *m_mdp ,*m_id;
	GtkWidget *combobox2anouer;	//combobox2anouer poste
GtkWidget *output17anouer;	//entry17anouer prenom
gchar *nom, *prenom, *mdp ,*type,*id;
window9anouer = create_window9anouer();
	combobox2anouer = lookup_widget(window9anouer, "combobox2anouer") ;
m_nom=lookup_widget(window9anouer, "entry9anouer");
m_prenom=lookup_widget(window9anouer, "entry10anouer");
m_mdp=lookup_widget(window9anouer, "entry11anouer");
output17anouer = lookup_widget(window9anouer, "label17anouer") ;
GtkTreeIter iter;
GtkTreeModel *model=gtk_tree_view_get_model (treeview);
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get(model,&iter,0,&nom,1,&prenom,2, &mdp,3,&type,4,&id, -1);
printf("%s %s %s %s %s", nom,prenom,mdp,type,id);
gtk_entry_set_text(GTK_ENTRY (m_nom),_(nom));
gtk_entry_set_text(GTK_ENTRY (m_prenom),_(prenom));
gtk_entry_set_text(GTK_ENTRY (m_mdp),_(mdp));
	//gtk_combo_box_set_active_text(GTK_COMBO_BOX (combobox2anouer),type);
gtk_label_set_text(GTK_LABEL(output17anouer),_(id));

gtk_widget_show(window9anouer);
}


void
on_button15anouer_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	
	GtkWidget *output16anouer;	//label16anouer
	GtkWidget *output17anouer;	//label17anouer
	char idc[25];
	char message[100];
	int idn;
	/*liez les poiteurs *input *output au objet graphiques****/
	output16anouer = lookup_widget(objet_graphique, "label16anouer") ;
	output17anouer = lookup_widget(objet_graphique, "label17anouer") ;
	/*recuperer les text saisis dans entry****/
	strcpy(idc,gtk_label_get_text(GTK_LABEL(output17anouer)));
	idn=atoi(idc);
	strcpy(message,"le compte de l'identfiant : ");
	strcat(message,idc);
	strcat(message," a été supprimer");
		supprimer_login(idn);
		gtk_label_set_text(GTK_LABEL(output16anouer),message);
		
}

