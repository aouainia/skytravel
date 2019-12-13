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
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkObject *num_hotel_adj;
  GtkWidget *num_hotel;
  GtkWidget *nomH;
  GtkWidget *lieuH;
  GtkWidget *prixH;
  GtkWidget *rank;
  GtkWidget *num_h;
  GtkWidget *Lieu;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *label16;
  GtkWidget *label2;
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
  GtkWidget *label73;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);
  gtk_widget_set_size_request (fixed1, 155, 27);

  num_hotel_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  num_hotel = gtk_spin_button_new (GTK_ADJUSTMENT (num_hotel_adj), 1, 0);
  gtk_widget_show (num_hotel);
  gtk_fixed_put (GTK_FIXED (fixed1), num_hotel, 608, 56);
  gtk_widget_set_size_request (num_hotel, 60, 27);

  nomH = gtk_entry_new ();
  gtk_widget_show (nomH);
  gtk_fixed_put (GTK_FIXED (fixed1), nomH, 144, 120);
  gtk_widget_set_size_request (nomH, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (nomH), 8226);

  lieuH = gtk_entry_new ();
  gtk_widget_show (lieuH);
  gtk_fixed_put (GTK_FIXED (fixed1), lieuH, 432, 120);
  gtk_widget_set_size_request (lieuH, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (lieuH), 8226);

  prixH = gtk_entry_new ();
  gtk_widget_show (prixH);
  gtk_fixed_put (GTK_FIXED (fixed1), prixH, 144, 184);
  gtk_widget_set_size_request (prixH, 155, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (prixH), 8226);

  rank = gtk_combo_box_entry_new_text ();
  gtk_widget_show (rank);
  gtk_fixed_put (GTK_FIXED (fixed1), rank, 432, 184);
  gtk_widget_set_size_request (rank, 155, 35);
  gtk_combo_box_append_text (GTK_COMBO_BOX (rank), _("3\303\251toile"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (rank), _("4\303\251toile"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (rank), _("5\303\251toile"));

  num_h = gtk_label_new (_("num_hotel :"));
  gtk_widget_show (num_h);
  gtk_fixed_put (GTK_FIXED (fixed1), num_h, 464, 56);
  gtk_widget_set_size_request (num_h, 180, 30);

  Lieu = gtk_label_new (_("Lieu :"));
  gtk_widget_show (Lieu);
  gtk_fixed_put (GTK_FIXED (fixed1), Lieu, 296, 120);
  gtk_widget_set_size_request (Lieu, 180, 30);

  label4 = gtk_label_new (_("Rang :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 296, 184);
  gtk_widget_set_size_request (label4, 180, 30);

  label5 = gtk_label_new (_("Prix_par_nuit :"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 0, 184);
  gtk_widget_set_size_request (label5, 180, 30);

  label16 = gtk_label_new (_("Bienvenue dans votre espace Agent"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed1), label16, 184, 16);
  gtk_widget_set_size_request (label16, 312, 60);

  label2 = gtk_label_new (_("Nom_hotel :"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 0, 120);
  gtk_widget_set_size_request (label2, 180, 30);

  retourr = gtk_button_new ();
  gtk_widget_show (retourr);
  gtk_fixed_put (GTK_FIXED (fixed1), retourr, 512, 288);
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
  gtk_fixed_put (GTK_FIXED (fixed1), ajouterr, 352, 288);
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

  label73 = gtk_label_new ("");
  gtk_widget_show (label73);
  gtk_fixed_put (GTK_FIXED (fixed1), label73, 280, 256);
  gtk_widget_set_size_request (label73, 232, 25);

  g_signal_connect ((gpointer) retourr, "clicked",
                    G_CALLBACK (retourr_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouterr, "clicked",
                    G_CALLBACK (ajouterr_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, num_hotel, "num_hotel");
  GLADE_HOOKUP_OBJECT (window1, nomH, "nomH");
  GLADE_HOOKUP_OBJECT (window1, lieuH, "lieuH");
  GLADE_HOOKUP_OBJECT (window1, prixH, "prixH");
  GLADE_HOOKUP_OBJECT (window1, rank, "rank");
  GLADE_HOOKUP_OBJECT (window1, num_h, "num_h");
  GLADE_HOOKUP_OBJECT (window1, Lieu, "Lieu");
  GLADE_HOOKUP_OBJECT (window1, label4, "label4");
  GLADE_HOOKUP_OBJECT (window1, label5, "label5");
  GLADE_HOOKUP_OBJECT (window1, label16, "label16");
  GLADE_HOOKUP_OBJECT (window1, label2, "label2");
  GLADE_HOOKUP_OBJECT (window1, retourr, "retourr");
  GLADE_HOOKUP_OBJECT (window1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1, image4, "image4");
  GLADE_HOOKUP_OBJECT (window1, label14, "label14");
  GLADE_HOOKUP_OBJECT (window1, ajouterr, "ajouterr");
  GLADE_HOOKUP_OBJECT (window1, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window1, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window1, image5, "image5");
  GLADE_HOOKUP_OBJECT (window1, label15, "label15");
  GLADE_HOOKUP_OBJECT (window1, label73, "label73");

  return window1;
}

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed2;
  GtkWidget *treeview1;
  GtkObject *num_h_adj;
  GtkWidget *num_h;
  GtkWidget *actualiserarij;
  GtkWidget *image3;
  GtkWidget *supprimerarij;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label12;
  GtkWidget *modifierarij;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label11;
  GtkWidget *ajouter;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image9;
  GtkWidget *label75;
  GtkWidget *num_ho;
  GtkWidget *label27;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window2), fixed2);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview1, 40, 16);
  gtk_widget_set_size_request (treeview1, 712, 216);

  num_h_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  num_h = gtk_spin_button_new (GTK_ADJUSTMENT (num_h_adj), 1, 0);
  gtk_widget_show (num_h);
  gtk_fixed_put (GTK_FIXED (fixed2), num_h, 672, 240);
  gtk_widget_set_size_request (num_h, 60, 27);

  actualiserarij = gtk_button_new ();
  gtk_widget_show (actualiserarij);
  gtk_fixed_put (GTK_FIXED (fixed2), actualiserarij, 504, 272);
  gtk_widget_set_size_request (actualiserarij, 120, 37);

  image3 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_container_add (GTK_CONTAINER (actualiserarij), image3);

  supprimerarij = gtk_button_new ();
  gtk_widget_show (supprimerarij);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimerarij, 360, 272);
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

  modifierarij = gtk_button_new ();
  gtk_widget_show (modifierarij);
  gtk_fixed_put (GTK_FIXED (fixed2), modifierarij, 208, 272);
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

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed2), ajouter, 56, 272);
  gtk_widget_set_size_request (ajouter, 120, 37);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image9 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox8), image9, FALSE, FALSE, 0);

  label75 = gtk_label_new_with_mnemonic (_("ajouter"));
  gtk_widget_show (label75);
  gtk_box_pack_start (GTK_BOX (hbox8), label75, FALSE, FALSE, 0);

  num_ho = gtk_label_new (_("Num_hotel :"));
  gtk_widget_show (num_ho);
  gtk_fixed_put (GTK_FIXED (fixed2), num_ho, 560, 248);
  gtk_widget_set_size_request (num_ho, 104, 17);

  label27 = gtk_label_new ("");
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed2), label27, 224, 240);
  gtk_widget_set_size_request (label27, 344, 24);

  g_signal_connect ((gpointer) actualiserarij, "clicked",
                    G_CALLBACK (actualiserarij_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimerarij, "clicked",
                    G_CALLBACK (supprimerarij_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifierarij, "clicked",
                    G_CALLBACK (modifierarij_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (ajouter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window2, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window2, num_h, "num_h");
  GLADE_HOOKUP_OBJECT (window2, actualiserarij, "actualiserarij");
  GLADE_HOOKUP_OBJECT (window2, image3, "image3");
  GLADE_HOOKUP_OBJECT (window2, supprimerarij, "supprimerarij");
  GLADE_HOOKUP_OBJECT (window2, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window2, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window2, image2, "image2");
  GLADE_HOOKUP_OBJECT (window2, label12, "label12");
  GLADE_HOOKUP_OBJECT (window2, modifierarij, "modifierarij");
  GLADE_HOOKUP_OBJECT (window2, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window2, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window2, image1, "image1");
  GLADE_HOOKUP_OBJECT (window2, label11, "label11");
  GLADE_HOOKUP_OBJECT (window2, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (window2, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (window2, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (window2, image9, "image9");
  GLADE_HOOKUP_OBJECT (window2, label75, "label75");
  GLADE_HOOKUP_OBJECT (window2, num_ho, "num_ho");
  GLADE_HOOKUP_OBJECT (window2, label27, "label27");

  return window2;
}

GtkWidget*
create_window3 (void)
{
  GtkWidget *window3;
  GtkWidget *fixed3;
  GtkWidget *nom_hotela;
  GtkWidget *lieua;
  GtkObject *num_hotela_adj;
  GtkWidget *num_hotela;
  GtkWidget *prix_par_nuita;
  GtkWidget *label17;
  GtkWidget *valider;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image8;
  GtkWidget *label74;
  GtkWidget *ranka;
  GtkWidget *label21;
  GtkWidget *label22;
  GtkWidget *label20;
  GtkWidget *label18;
  GtkWidget *label19;
  GtkWidget *modifierr;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image7;
  GtkWidget *label24;
  GtkWidget *retourrr;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image6;
  GtkWidget *label23;
  GtkWidget *label73;

  window3 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window3), _("window3"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window3), fixed3);
  gtk_widget_set_size_request (fixed3, 155, 37);

  nom_hotela = gtk_entry_new ();
  gtk_widget_show (nom_hotela);
  gtk_fixed_put (GTK_FIXED (fixed3), nom_hotela, 200, 112);
  gtk_widget_set_size_request (nom_hotela, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (nom_hotela), 8226);

  lieua = gtk_entry_new ();
  gtk_widget_show (lieua);
  gtk_fixed_put (GTK_FIXED (fixed3), lieua, 488, 112);
  gtk_widget_set_size_request (lieua, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (lieua), 8226);

  num_hotela_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  num_hotela = gtk_spin_button_new (GTK_ADJUSTMENT (num_hotela_adj), 1, 0);
  gtk_widget_show (num_hotela);
  gtk_fixed_put (GTK_FIXED (fixed3), num_hotela, 584, 48);
  gtk_widget_set_size_request (num_hotela, 70, 27);

  prix_par_nuita = gtk_entry_new ();
  gtk_widget_show (prix_par_nuita);
  gtk_fixed_put (GTK_FIXED (fixed3), prix_par_nuita, 200, 184);
  gtk_widget_set_size_request (prix_par_nuita, 155, 37);
  gtk_entry_set_invisible_char (GTK_ENTRY (prix_par_nuita), 8226);

  label17 = gtk_label_new (_("num_hotel"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed3), label17, 464, 48);
  gtk_widget_set_size_request (label17, 136, 25);

  valider = gtk_button_new ();
  gtk_widget_show (valider);
  gtk_fixed_put (GTK_FIXED (fixed3), valider, 664, 40);
  gtk_widget_set_size_request (valider, 120, 37);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (valider), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image8 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox7), image8, FALSE, FALSE, 0);

  label74 = gtk_label_new_with_mnemonic (_("valider"));
  gtk_widget_show (label74);
  gtk_box_pack_start (GTK_BOX (hbox7), label74, FALSE, FALSE, 0);

  ranka = gtk_combo_box_entry_new_text ();
  gtk_widget_show (ranka);
  gtk_fixed_put (GTK_FIXED (fixed3), ranka, 488, 184);
  gtk_widget_set_size_request (ranka, 155, 37);
  gtk_combo_box_append_text (GTK_COMBO_BOX (ranka), _("3\303\251toile"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (ranka), _("4\303\251toile"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (ranka), _("5\303\251toile"));

  label21 = gtk_label_new (_("Bienvenue dans votre espace Agent"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed3), label21, 184, 8);
  gtk_widget_set_size_request (label21, 368, 48);

  label22 = gtk_label_new (_("Lieu :"));
  gtk_widget_show (label22);
  gtk_fixed_put (GTK_FIXED (fixed3), label22, 352, 112);
  gtk_widget_set_size_request (label22, 180, 30);

  label20 = gtk_label_new (_("Nom_hotel :"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 40, 120);
  gtk_widget_set_size_request (label20, 180, 30);

  label18 = gtk_label_new (_("Rang :"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed3), label18, 344, 184);
  gtk_widget_set_size_request (label18, 180, 30);

  label19 = gtk_label_new (_("Prix_par_nuit :"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed3), label19, 56, 176);
  gtk_widget_set_size_request (label19, 121, 33);

  modifierr = gtk_button_new ();
  gtk_widget_show (modifierr);
  gtk_fixed_put (GTK_FIXED (fixed3), modifierr, 240, 288);
  gtk_widget_set_size_request (modifierr, 155, 37);

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

  retourrr = gtk_button_new ();
  gtk_widget_show (retourrr);
  gtk_fixed_put (GTK_FIXED (fixed3), retourrr, 472, 288);
  gtk_widget_set_size_request (retourrr, 155, 37);

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

  label73 = gtk_label_new ("");
  gtk_widget_show (label73);
  gtk_fixed_put (GTK_FIXED (fixed3), label73, 176, 256);
  gtk_widget_set_size_request (label73, 232, 25);

  g_signal_connect ((gpointer) valider, "clicked",
                    G_CALLBACK (on_valider_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifierr, "clicked",
                    G_CALLBACK (modifierr_clicked),
                    NULL);
  g_signal_connect ((gpointer) retourrr, "clicked",
                    G_CALLBACK (retourrr_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window3, window3, "window3");
  GLADE_HOOKUP_OBJECT (window3, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window3, nom_hotela, "nom_hotela");
  GLADE_HOOKUP_OBJECT (window3, lieua, "lieua");
  GLADE_HOOKUP_OBJECT (window3, num_hotela, "num_hotela");
  GLADE_HOOKUP_OBJECT (window3, prix_par_nuita, "prix_par_nuita");
  GLADE_HOOKUP_OBJECT (window3, label17, "label17");
  GLADE_HOOKUP_OBJECT (window3, valider, "valider");
  GLADE_HOOKUP_OBJECT (window3, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (window3, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (window3, image8, "image8");
  GLADE_HOOKUP_OBJECT (window3, label74, "label74");
  GLADE_HOOKUP_OBJECT (window3, ranka, "ranka");
  GLADE_HOOKUP_OBJECT (window3, label21, "label21");
  GLADE_HOOKUP_OBJECT (window3, label22, "label22");
  GLADE_HOOKUP_OBJECT (window3, label20, "label20");
  GLADE_HOOKUP_OBJECT (window3, label18, "label18");
  GLADE_HOOKUP_OBJECT (window3, label19, "label19");
  GLADE_HOOKUP_OBJECT (window3, modifierr, "modifierr");
  GLADE_HOOKUP_OBJECT (window3, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window3, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window3, image7, "image7");
  GLADE_HOOKUP_OBJECT (window3, label24, "label24");
  GLADE_HOOKUP_OBJECT (window3, retourrr, "retourrr");
  GLADE_HOOKUP_OBJECT (window3, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window3, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window3, image6, "image6");
  GLADE_HOOKUP_OBJECT (window3, label23, "label23");
  GLADE_HOOKUP_OBJECT (window3, label73, "label73");

  return window3;
}

