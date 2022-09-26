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
  GtkWidget *entry1;
  GtkWidget *clear;
  GtkWidget *four;
  GtkWidget *three;
  GtkWidget *two;
  GtkWidget *dot;
  GtkWidget *one;
  GtkWidget *zero;
  GtkWidget *equal;
  GtkWidget *nine;
  GtkWidget *eight;
  GtkWidget *seven;
  GtkWidget *bksp;
  GtkWidget *CE;
  GtkWidget *multiply;
  GtkWidget *subtract;
  GtkWidget *add;
  GtkWidget *division;
  GtkWidget *pm;
  GtkWidget *six;
  GtkWidget *five;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("My_Calculator"));
  gtk_window_set_position (GTK_WINDOW (window1), GTK_WIN_POS_CENTER_ALWAYS);
  gtk_window_set_resizable (GTK_WINDOW (window1), FALSE);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);
  gtk_widget_set_size_request (fixed1, 424, 370);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 0, 24);
  gtk_widget_set_size_request (entry1, 424, 88);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  clear = gtk_button_new_with_mnemonic (_("Clr"));
  gtk_widget_show (clear);
  gtk_fixed_put (GTK_FIXED (fixed1), clear, 216, 136);
  gtk_widget_set_size_request (clear, 70, 29);

  four = gtk_button_new_with_mnemonic (_("4"));
  gtk_widget_show (four);
  gtk_fixed_put (GTK_FIXED (fixed1), four, 24, 232);
  gtk_widget_set_size_request (four, 70, 29);

  three = gtk_button_new_with_mnemonic (_("3"));
  gtk_widget_show (three);
  gtk_fixed_put (GTK_FIXED (fixed1), three, 216, 280);
  gtk_widget_set_size_request (three, 79, 29);

  two = gtk_button_new_with_mnemonic (_("2"));
  gtk_widget_show (two);
  gtk_fixed_put (GTK_FIXED (fixed1), two, 120, 280);
  gtk_widget_set_size_request (two, 78, 29);

  dot = gtk_button_new_with_mnemonic (_("."));
  gtk_widget_show (dot);
  gtk_fixed_put (GTK_FIXED (fixed1), dot, 120, 328);
  gtk_widget_set_size_request (dot, 78, 29);

  one = gtk_button_new_with_mnemonic (_("1"));
  gtk_widget_show (one);
  gtk_fixed_put (GTK_FIXED (fixed1), one, 24, 280);
  gtk_widget_set_size_request (one, 79, 29);

  zero = gtk_button_new_with_mnemonic (_("0"));
  gtk_widget_show (zero);
  gtk_fixed_put (GTK_FIXED (fixed1), zero, 24, 328);
  gtk_widget_set_size_request (zero, 79, 29);

  equal = gtk_button_new_with_mnemonic (_("="));
  gtk_widget_show (equal);
  gtk_fixed_put (GTK_FIXED (fixed1), equal, 216, 328);
  gtk_widget_set_size_request (equal, 79, 29);

  nine = gtk_button_new_with_mnemonic (_("9"));
  gtk_widget_show (nine);
  gtk_fixed_put (GTK_FIXED (fixed1), nine, 216, 184);
  gtk_widget_set_size_request (nine, 72, 29);

  eight = gtk_button_new_with_mnemonic (_("8"));
  gtk_widget_show (eight);
  gtk_fixed_put (GTK_FIXED (fixed1), eight, 120, 184);
  gtk_widget_set_size_request (eight, 80, 29);

  seven = gtk_button_new_with_mnemonic (_("7"));
  gtk_widget_show (seven);
  gtk_fixed_put (GTK_FIXED (fixed1), seven, 24, 184);
  gtk_widget_set_size_request (seven, 72, 29);

  bksp = gtk_button_new_with_mnemonic (_("Bksp"));
  gtk_widget_show (bksp);
  gtk_fixed_put (GTK_FIXED (fixed1), bksp, 24, 136);
  gtk_widget_set_size_request (bksp, 72, 32);

  CE = gtk_button_new_with_mnemonic (_("CE"));
  gtk_widget_show (CE);
  gtk_fixed_put (GTK_FIXED (fixed1), CE, 120, 136);
  gtk_widget_set_size_request (CE, 80, 29);

  multiply = gtk_button_new_with_mnemonic (_("*"));
  gtk_widget_show (multiply);
  gtk_fixed_put (GTK_FIXED (fixed1), multiply, 320, 232);
  gtk_widget_set_size_request (multiply, 72, 29);

  subtract = gtk_button_new_with_mnemonic (_("-"));
  gtk_widget_show (subtract);
  gtk_fixed_put (GTK_FIXED (fixed1), subtract, 320, 280);
  gtk_widget_set_size_request (subtract, 72, 29);

  add = gtk_button_new_with_mnemonic (_("+"));
  gtk_widget_show (add);
  gtk_fixed_put (GTK_FIXED (fixed1), add, 320, 328);
  gtk_widget_set_size_request (add, 72, 29);

  division = gtk_button_new_with_mnemonic (_("\303\267"));
  gtk_widget_show (division);
  gtk_fixed_put (GTK_FIXED (fixed1), division, 320, 184);
  gtk_widget_set_size_request (division, 72, 29);

  pm = gtk_button_new_with_mnemonic (_("\302\261"));
  gtk_widget_show (pm);
  gtk_fixed_put (GTK_FIXED (fixed1), pm, 320, 136);
  gtk_widget_set_size_request (pm, 72, 29);

  six = gtk_button_new_with_mnemonic (_("6"));
  gtk_widget_show (six);
  gtk_fixed_put (GTK_FIXED (fixed1), six, 216, 232);
  gtk_widget_set_size_request (six, 72, 32);

  five = gtk_button_new_with_mnemonic (_("5"));
  gtk_widget_show (five);
  gtk_fixed_put (GTK_FIXED (fixed1), five, 120, 232);
  gtk_widget_set_size_request (five, 79, 29);

  g_signal_connect ((gpointer) window1, "destroy",
                    G_CALLBACK (on_window1_destroy),
                    NULL);
  g_signal_connect ((gpointer) clear, "clicked",
                    G_CALLBACK (on_clear_clicked),
                    NULL);
  g_signal_connect ((gpointer) four, "clicked",
                    G_CALLBACK (on_four_clicked),
                    NULL);
  g_signal_connect ((gpointer) three, "clicked",
                    G_CALLBACK (on_three_clicked),
                    NULL);
  g_signal_connect ((gpointer) two, "clicked",
                    G_CALLBACK (on_two_clicked),
                    NULL);
  g_signal_connect ((gpointer) dot, "clicked",
                    G_CALLBACK (on_dot_clicked),
                    NULL);
  g_signal_connect ((gpointer) one, "clicked",
                    G_CALLBACK (on_one_clicked),
                    NULL);
  g_signal_connect ((gpointer) zero, "clicked",
                    G_CALLBACK (on_zero_clicked),
                    NULL);
  g_signal_connect ((gpointer) equal, "clicked",
                    G_CALLBACK (on_equal_clicked),
                    NULL);
  g_signal_connect ((gpointer) nine, "clicked",
                    G_CALLBACK (on_nine_clicked),
                    NULL);
  g_signal_connect ((gpointer) eight, "clicked",
                    G_CALLBACK (on_eight_clicked),
                    NULL);
  g_signal_connect ((gpointer) seven, "clicked",
                    G_CALLBACK (on_seven_clicked),
                    NULL);
  g_signal_connect ((gpointer) bksp, "clicked",
                    G_CALLBACK (on_bksp_clicked),
                    NULL);
  g_signal_connect ((gpointer) CE, "clicked",
                    G_CALLBACK (on_CE_clicked),
                    NULL);
  g_signal_connect ((gpointer) multiply, "clicked",
                    G_CALLBACK (on_multiply_clicked),
                    NULL);
  g_signal_connect ((gpointer) subtract, "clicked",
                    G_CALLBACK (on_subtract_clicked),
                    NULL);
  g_signal_connect ((gpointer) add, "clicked",
                    G_CALLBACK (on_add_clicked),
                    NULL);
  g_signal_connect ((gpointer) division, "clicked",
                    G_CALLBACK (on_division_clicked),
                    NULL);
  g_signal_connect ((gpointer) pm, "clicked",
                    G_CALLBACK (on_pm_clicked),
                    NULL);
  g_signal_connect ((gpointer) six, "clicked",
                    G_CALLBACK (on_six_clicked),
                    NULL);
  g_signal_connect ((gpointer) five, "clicked",
                    G_CALLBACK (on_five_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, clear, "clear");
  GLADE_HOOKUP_OBJECT (window1, four, "four");
  GLADE_HOOKUP_OBJECT (window1, three, "three");
  GLADE_HOOKUP_OBJECT (window1, two, "two");
  GLADE_HOOKUP_OBJECT (window1, dot, "dot");
  GLADE_HOOKUP_OBJECT (window1, one, "one");
  GLADE_HOOKUP_OBJECT (window1, zero, "zero");
  GLADE_HOOKUP_OBJECT (window1, equal, "equal");
  GLADE_HOOKUP_OBJECT (window1, nine, "nine");
  GLADE_HOOKUP_OBJECT (window1, eight, "eight");
  GLADE_HOOKUP_OBJECT (window1, seven, "seven");
  GLADE_HOOKUP_OBJECT (window1, bksp, "bksp");
  GLADE_HOOKUP_OBJECT (window1, CE, "CE");
  GLADE_HOOKUP_OBJECT (window1, multiply, "multiply");
  GLADE_HOOKUP_OBJECT (window1, subtract, "subtract");
  GLADE_HOOKUP_OBJECT (window1, add, "add");
  GLADE_HOOKUP_OBJECT (window1, division, "division");
  GLADE_HOOKUP_OBJECT (window1, pm, "pm");
  GLADE_HOOKUP_OBJECT (window1, six, "six");
  GLADE_HOOKUP_OBJECT (window1, five, "five");

  return window1;
}

