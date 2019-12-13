/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_ajoutexcurssionarijmtar (void)
{
  GtkWidget *ajoutexcurssionarijmtar;
  GtkWidget *fixed1;
  GtkObject *aj_num_ex_adj;
  GtkWidget *aj_num_ex;
  GtkWidget *exlieu;
  GtkWidget *depex;
  GtkWidget *prixex;
  GtkWidget *proex;
  GtkObject *ex_jour_adj;
  GtkWidget *ex_jour;
  GtkObject *ex_mois_adj;
  GtkWidget *ex_mois;
  GtkObject *ex_annee_adj;
  GtkWidget *ex_annee;
  GtkWidget *num_e;
  GtkWidget *lieu;
  GtkWidget *label2;
  GtkWidget *label16;
  GtkWidget *label78;
  GtkWidget *label77;
  GtkWidget *label76;
  GtkWidget *label74;
  GtkWidget *label4;
  GtkWidget *label73;
  GtkWidget *label5;
  GtkWidget *retourr;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image4;
  GtkWidget *label14;
  GtkWidget *ajouterr;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image5;
  GtkWidget *label15;

  ajoutexcurssionarijmtar = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (ajoutexcurssionarijmtar, 700, 400);
  gtk_window_set_title (GTK_WINDOW (ajoutexcurssionarijmtar), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ajoutexcurssionarijmtar), fixed1);
  gtk_widget_set_size_request (fixed1, 635, 200);

  aj_num_ex_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  aj_num_ex = gtk_spin_button_new (GTK_ADJUSTMENT (aj_num_ex_adj), 1, 0);
  gtk_widget_show (aj_num_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), aj_num_ex, 552, 72);
  gtk_widget_set_size_request (aj_num_ex, 60, 27);

  exlieu = gtk_entry_new ();
  gtk_widget_show (exlieu);
  gtk_fixed_put (GTK_FIXED (fixed1), exlieu, 144, 120);
  gtk_widget_set_size_request (exlieu, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (exlieu), 8226);

  depex = gtk_entry_new ();
  gtk_widget_show (depex);
  gtk_fixed_put (GTK_FIXED (fixed1), depex, 480, 120);
  gtk_widget_set_size_request (depex, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (depex), 8226);

  prixex = gtk_entry_new ();
  gtk_widget_show (prixex);
  gtk_fixed_put (GTK_FIXED (fixed1), prixex, 144, 256);
  gtk_widget_set_size_request (prixex, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (prixex), 8226);

  proex = gtk_entry_new ();
  gtk_widget_show (proex);
  gtk_fixed_put (GTK_FIXED (fixed1), proex, 480, 256);
  gtk_widget_set_size_request (proex, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (proex), 8226);

  ex_jour_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  ex_jour = gtk_spin_button_new (GTK_ADJUSTMENT (ex_jour_adj), 1, 0);
  gtk_widget_show (ex_jour);
  gtk_fixed_put (GTK_FIXED (fixed1), ex_jour, 272, 184);
  gtk_widget_set_size_request (ex_jour, 60, 27);

  ex_mois_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  ex_mois = gtk_spin_button_new (GTK_ADJUSTMENT (ex_mois_adj), 1, 0);
  gtk_widget_show (ex_mois);
  gtk_fixed_put (GTK_FIXED (fixed1), ex_mois, 408, 184);
  gtk_widget_set_size_request (ex_mois, 60, 27);

  ex_annee_adj = gtk_adjustment_new (2019, 2019, 2050, 1, 10, 10);
  ex_annee = gtk_spin_button_new (GTK_ADJUSTMENT (ex_annee_adj), 1, 0);
  gtk_widget_show (ex_annee);
  gtk_fixed_put (GTK_FIXED (fixed1), ex_annee, 544, 184);
  gtk_widget_set_size_request (ex_annee, 60, 27);

  num_e = gtk_label_new (_("Num_Excurssion :"));
  gtk_widget_show (num_e);
  gtk_fixed_put (GTK_FIXED (fixed1), num_e, 408, 72);
  gtk_widget_set_size_request (num_e, 136, 25);

  lieu = gtk_label_new (_("Nombre_du_jour :"));
  gtk_widget_show (lieu);
  gtk_fixed_put (GTK_FIXED (fixed1), lieu, 320, 112);
  gtk_widget_set_size_request (lieu, 152, 40);

  label2 = gtk_label_new (_("lieux :"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 32, 112);
  gtk_widget_set_size_request (label2, 97, 32);

  label16 = gtk_label_new (_("Bienvenue dans votre espace Agent"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed1), label16, 184, 8);
  gtk_widget_set_size_request (label16, 408, 49);

  label78 = gtk_label_new (_("Ann\303\251e :"));
  gtk_widget_show (label78);
  gtk_fixed_put (GTK_FIXED (fixed1), label78, 480, 184);
  gtk_widget_set_size_request (label78, 49, 17);

  label77 = gtk_label_new (_("Mois :"));
  gtk_widget_show (label77);
  gtk_fixed_put (GTK_FIXED (fixed1), label77, 344, 184);
  gtk_widget_set_size_request (label77, 49, 17);

  label76 = gtk_label_new (_("Jour :"));
  gtk_widget_show (label76);
  gtk_fixed_put (GTK_FIXED (fixed1), label76, 208, 184);
  gtk_widget_set_size_request (label76, 65, 25);

  label74 = gtk_label_new (_("Date _excurssion :"));
  gtk_widget_show (label74);
  gtk_fixed_put (GTK_FIXED (fixed1), label74, 64, 176);
  gtk_widget_set_size_request (label74, 144, 48);

  label4 = gtk_label_new (_("Programme :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 360, 256);
  gtk_widget_set_size_request (label4, 104, 32);

  label73 = gtk_label_new ("");
  gtk_widget_show (label73);
  gtk_fixed_put (GTK_FIXED (fixed1), label73, 176, 320);
  gtk_widget_set_size_request (label73, 232, 25);

  label5 = gtk_label_new (_("Prix :"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 24, 256);
  gtk_widget_set_size_request (label5, 121, 33);

  retourr = gtk_button_new ();
  gtk_widget_show (retourr);
  gtk_fixed_put (GTK_FIXED (fixed1), retourr, 488, 352);
  gtk_widget_set_size_request (retourr, 120, 37);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (retourr), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image4 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox3), image4, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox3), label14, FALSE, FALSE, 0);

  ajouterr = gtk_button_new ();
  gtk_widget_show (ajouterr);
  gtk_fixed_put (GTK_FIXED (fixed1), ajouterr, 216, 352);
  gtk_widget_set_size_request (ajouterr, 120, 37);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (ajouterr), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image5 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox4), image5, FALSE, FALSE, 0);

  label15 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label15);
  gtk_box_pack_start (GTK_BOX (hbox4), label15, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) retourr, "clicked",
                    G_CALLBACK (ex_ajout_retourr_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouterr, "clicked",
                    G_CALLBACK (ar_ex_ajouterr_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ajoutexcurssionarijmtar, ajoutexcurssionarijmtar, "ajoutexcurssionarijmtar");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, aj_num_ex, "aj_num_ex");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, exlieu, "exlieu");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, depex, "depex");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, prixex, "prixex");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, proex, "proex");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, ex_jour, "ex_jour");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, ex_mois, "ex_mois");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, ex_annee, "ex_annee");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, num_e, "num_e");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, lieu, "lieu");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label2, "label2");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label16, "label16");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label78, "label78");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label77, "label77");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label76, "label76");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label74, "label74");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label4, "label4");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label73, "label73");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label5, "label5");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, retourr, "retourr");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, image4, "image4");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label14, "label14");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, ajouterr, "ajouterr");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, image5, "image5");
  GLADE_HOOKUP_OBJECT (ajoutexcurssionarijmtar, label15, "label15");

  return ajoutexcurssionarijmtar;
}

GtkWidget*
create_modifexcurssionarij (void)
{
  GtkWidget *modifexcurssionarij;
  GtkWidget *fixed2;
  GtkWidget *wafa;
  GtkObject *num_ex_adj;
  GtkWidget *num_ex;
  GtkWidget *modifierarij;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label11;
  GtkWidget *actualiserarij;
  GtkWidget *image3;
  GtkWidget *supprimerarij;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label12;
  GtkWidget *ajouter;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image8;
  GtkWidget *label79;
  GtkWidget *label27;
  GtkWidget *num_excur;

  modifexcurssionarij = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (modifexcurssionarij, 700, 400);
  gtk_window_set_title (GTK_WINDOW (modifexcurssionarij), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (modifexcurssionarij), fixed2);

  wafa = gtk_tree_view_new ();
  gtk_widget_show (wafa);
  gtk_fixed_put (GTK_FIXED (fixed2), wafa, 40, 16);
  gtk_widget_set_size_request (wafa, 640, 216);

  num_ex_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  num_ex = gtk_spin_button_new (GTK_ADJUSTMENT (num_ex_adj), 1, 0);
  gtk_widget_show (num_ex);
  gtk_fixed_put (GTK_FIXED (fixed2), num_ex, 616, 256);
  gtk_widget_set_size_request (num_ex, 60, 27);

  modifierarij = gtk_button_new ();
  gtk_widget_show (modifierarij);
  gtk_fixed_put (GTK_FIXED (fixed2), modifierarij, 192, 304);
  gtk_widget_set_size_request (modifierarij, 120, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (modifierarij), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox1), label11, FALSE, FALSE, 0);

  actualiserarij = gtk_button_new ();
  gtk_widget_show (actualiserarij);
  gtk_fixed_put (GTK_FIXED (fixed2), actualiserarij, 496, 304);
  gtk_widget_set_size_request (actualiserarij, 120, 37);

  image3 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_container_add (GTK_CONTAINER (actualiserarij), image3);

  supprimerarij = gtk_button_new ();
  gtk_widget_show (supprimerarij);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimerarij, 344, 304);
  gtk_widget_set_size_request (supprimerarij, 120, 37);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (supprimerarij), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox2), label12, FALSE, FALSE, 0);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), ajouter, 48, 304);
  gtk_widget_set_size_request (ajouter, 120, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image8 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox7), image8, FALSE, FALSE, 0);

  label79 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label79);
  gtk_box_pack_start (GTK_BOX (hbox7), label79, FALSE, FALSE, 0);

  label27 = gtk_label_new ("");
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed2), label27, 232, 272);
  gtk_widget_set_size_request (label27, 344, 24);

  num_excur = gtk_label_new (_("Num_excurssion :"));
  gtk_widget_show (num_excur);
  gtk_fixed_put (GTK_FIXED (fixed2), num_excur, 472, 256);
  gtk_widget_set_size_request (num_excur, 152, 25);

  g_signal_connect ((gpointer) modifierarij, "clicked",
                    G_CALLBACK (modifierarij_clicked),
                    NULL);
  g_signal_connect ((gpointer) actualiserarij, "clicked",
                    G_CALLBACK (actualiserarij_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimerarij, "clicked",
                    G_CALLBACK (ex_supprimerarij_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (ajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (modifexcurssionarij, modifexcurssionarij, "modifexcurssionarij");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, wafa, "wafa");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, num_ex, "num_ex");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, modifierarij, "modifierarij");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, image1, "image1");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, label11, "label11");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, actualiserarij, "actualiserarij");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, image3, "image3");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, supprimerarij, "supprimerarij");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, image2, "image2");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, label12, "label12");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, image8, "image8");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, label79, "label79");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, label27, "label27");
  GLADE_HOOKUP_OBJECT (modifexcurssionarij, num_excur, "num_excur");

  return modifexcurssionarij;
}

GtkWidget*
create_excurssionmodarij (void)
{
  GtkWidget *excurssionmodarij;
  GtkWidget *fixed3;
  GtkWidget *exlieu_mod;
  GtkWidget *depex_mod;
  GtkObject *mod_num_ex_adj;
  GtkWidget *mod_num_ex;
  GtkWidget *prixex_mod;
  GtkWidget *proex_mod;
  GtkObject *mod_ex_jour_adj;
  GtkWidget *mod_ex_jour;
  GtkObject *mod_ex_mois_adj;
  GtkWidget *mod_ex_mois;
  GtkObject *mod_ex_annee_adj;
  GtkWidget *mod_ex_annee;
  GtkWidget *label18;
  GtkWidget *label75;
  GtkWidget *label81;
  GtkWidget *label82;
  GtkWidget *label22;
  GtkWidget *label20;
  GtkWidget *label73;
  GtkWidget *retourrr;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image6;
  GtkWidget *label23;
  GtkWidget *modifierr;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image7;
  GtkWidget *label24;
  GtkWidget *label21;
  GtkWidget *label19;
  GtkWidget *valider;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image9;
  GtkWidget *label80;
  GtkWidget *label17;
  GtkWidget *label83;

  excurssionmodarij = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (excurssionmodarij, 700, 400);
  gtk_window_set_title (GTK_WINDOW (excurssionmodarij), _("window3"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (excurssionmodarij), fixed3);

  exlieu_mod = gtk_entry_new ();
  gtk_widget_show (exlieu_mod);
  gtk_fixed_put (GTK_FIXED (fixed3), exlieu_mod, 160, 128);
  gtk_widget_set_size_request (exlieu_mod, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (exlieu_mod), 8226);

  depex_mod = gtk_entry_new ();
  gtk_widget_show (depex_mod);
  gtk_fixed_put (GTK_FIXED (fixed3), depex_mod, 456, 128);
  gtk_widget_set_size_request (depex_mod, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (depex_mod), 8226);

  mod_num_ex_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  mod_num_ex = gtk_spin_button_new (GTK_ADJUSTMENT (mod_num_ex_adj), 1, 0);
  gtk_widget_show (mod_num_ex);
  gtk_fixed_put (GTK_FIXED (fixed3), mod_num_ex, 504, 48);
  gtk_widget_set_size_request (mod_num_ex, 60, 27);

  prixex_mod = gtk_entry_new ();
  gtk_widget_show (prixex_mod);
  gtk_fixed_put (GTK_FIXED (fixed3), prixex_mod, 160, 280);
  gtk_widget_set_size_request (prixex_mod, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (prixex_mod), 8226);

  proex_mod = gtk_entry_new ();
  gtk_widget_show (proex_mod);
  gtk_fixed_put (GTK_FIXED (fixed3), proex_mod, 464, 280);
  gtk_widget_set_size_request (proex_mod, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (proex_mod), 8226);

  mod_ex_jour_adj = gtk_adjustment_new (3, 1, 31, 1, 10, 10);
  mod_ex_jour = gtk_spin_button_new (GTK_ADJUSTMENT (mod_ex_jour_adj), 1, 0);
  gtk_widget_show (mod_ex_jour);
  gtk_fixed_put (GTK_FIXED (fixed3), mod_ex_jour, 280, 208);
  gtk_widget_set_size_request (mod_ex_jour, 60, 27);

  mod_ex_mois_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  mod_ex_mois = gtk_spin_button_new (GTK_ADJUSTMENT (mod_ex_mois_adj), 1, 0);
  gtk_widget_show (mod_ex_mois);
  gtk_fixed_put (GTK_FIXED (fixed3), mod_ex_mois, 408, 208);
  gtk_widget_set_size_request (mod_ex_mois, 60, 27);

  mod_ex_annee_adj = gtk_adjustment_new (2019, 2019, 2050, 1, 10, 10);
  mod_ex_annee = gtk_spin_button_new (GTK_ADJUSTMENT (mod_ex_annee_adj), 1, 0);
  gtk_widget_show (mod_ex_annee);
  gtk_fixed_put (GTK_FIXED (fixed3), mod_ex_annee, 536, 208);
  gtk_widget_set_size_request (mod_ex_annee, 64, 27);

  label18 = gtk_label_new (_("Programme :"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed3), label18, 336, 280);
  gtk_widget_set_size_request (label18, 121, 25);

  label75 = gtk_label_new (_("Date :"));
  gtk_widget_show (label75);
  gtk_fixed_put (GTK_FIXED (fixed3), label75, 152, 216);
  gtk_widget_set_size_request (label75, 49, 17);

  label81 = gtk_label_new (_("Jour :"));
  gtk_widget_show (label81);
  gtk_fixed_put (GTK_FIXED (fixed3), label81, 232, 216);
  gtk_widget_set_size_request (label81, 49, 17);

  label82 = gtk_label_new (_("Mois :"));
  gtk_widget_show (label82);
  gtk_fixed_put (GTK_FIXED (fixed3), label82, 360, 216);
  gtk_widget_set_size_request (label82, 49, 17);

  label22 = gtk_label_new (_("NB_du_jour :"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed3), label22, 336, 128);
  gtk_widget_set_size_request (label22, 97, 25);

  label20 = gtk_label_new (_("Lieu :"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 56, 128);
  gtk_widget_set_size_request (label20, 97, 24);

  label73 = gtk_label_new ("");
  gtk_widget_show (label73);
  gtk_fixed_put (GTK_FIXED (fixed3), label73, 232, 336);
  gtk_widget_set_size_request (label73, 232, 25);

  retourrr = gtk_button_new ();
  gtk_widget_show (retourrr);
  gtk_fixed_put (GTK_FIXED (fixed3), retourrr, 512, 368);
  gtk_widget_set_size_request (retourrr, 120, 37);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (retourrr), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image6 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox5), image6, FALSE, FALSE, 0);

  label23 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label23);
  gtk_box_pack_start (GTK_BOX (hbox5), label23, FALSE, FALSE, 0);

  modifierr = gtk_button_new ();
  gtk_widget_show (modifierr);
  gtk_fixed_put (GTK_FIXED (fixed3), modifierr, 272, 368);
  gtk_widget_set_size_request (modifierr, 120, 37);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (modifierr), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image7 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox6), image7, FALSE, FALSE, 0);

  label24 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label24);
  gtk_box_pack_start (GTK_BOX (hbox6), label24, FALSE, FALSE, 0);

  label21 = gtk_label_new (_("Bienvenue dans votre espace Agent"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed3), label21, 160, 8);
  gtk_widget_set_size_request (label21, 384, 40);

  label19 = gtk_label_new (_("Prix :"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed3), label19, 48, 280);
  gtk_widget_set_size_request (label19, 121, 33);

  valider = gtk_button_new ();
  gtk_widget_show (valider);
  gtk_fixed_put (GTK_FIXED (fixed3), valider, 576, 40);
  gtk_widget_set_size_request (valider, 120, 37);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (valider), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image9 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox8), image9, FALSE, FALSE, 0);

  label80 = gtk_label_new_with_mnemonic (_("valider"));
  gtk_widget_show (label80);
  gtk_box_pack_start (GTK_BOX (hbox8), label80, FALSE, FALSE, 0);

  label17 = gtk_label_new (_("Num_excursion :"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed3), label17, 368, 48);
  gtk_widget_set_size_request (label17, 136, 25);

  label83 = gtk_label_new (_("Ann\303\251e :"));
  gtk_widget_show (label83);
  gtk_fixed_put (GTK_FIXED (fixed3), label83, 480, 216);
  gtk_widget_set_size_request (label83, 49, 17);

  g_signal_connect ((gpointer) retourrr, "clicked",
                    G_CALLBACK (ex_mod_retourrr_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifierr, "clicked",
                    G_CALLBACK (ar_ex_modifierr_clicked),
                    NULL);
  g_signal_connect ((gpointer) valider, "clicked",
                    G_CALLBACK (on_valider_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (excurssionmodarij, excurssionmodarij, "excurssionmodarij");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, exlieu_mod, "exlieu_mod");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, depex_mod, "depex_mod");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, mod_num_ex, "mod_num_ex");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, prixex_mod, "prixex_mod");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, proex_mod, "proex_mod");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, mod_ex_jour, "mod_ex_jour");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, mod_ex_mois, "mod_ex_mois");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, mod_ex_annee, "mod_ex_annee");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label18, "label18");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label75, "label75");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label81, "label81");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label82, "label82");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label22, "label22");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label20, "label20");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label73, "label73");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, retourrr, "retourrr");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, image6, "image6");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label23, "label23");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, modifierr, "modifierr");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, image7, "image7");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label24, "label24");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label21, "label21");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label19, "label19");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, valider, "valider");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, image9, "image9");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label80, "label80");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label17, "label17");
  GLADE_HOOKUP_OBJECT (excurssionmodarij, label83, "label83");

  return excurssionmodarij;
}

