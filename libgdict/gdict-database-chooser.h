/* gdict-database-chooser.h - display widget for database names
 *
 * Copyright (C) 2006  Emmanuele Bassi <ebassi@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 */

#ifndef __GDICT_DATABASE_CHOOSER_H__
#define __GDICT_DATABASE_CHOOSER_H__

#include <gdict-context.h>
#include <gtk/gtkcomboxboxentry.h>

G_BEGIN_DECLS

#define GDICT_TYPE_DATABASE_CHOOSER		(gdict_database_chooser_get_type ())
#define GDICT_DATABASE_CHOOSER(obj) \
(G_TYPE_CHECK_INSTANCE_CAST ((obj), GDICT_TYPE_DATABASE_CHOOSER, GdictDatabaseChooser))
#define GDICT_IS_DATABASE_CHOOSER(obj) \
(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GDICT_TYPE_DATABASE_CHOOSER))
#define GDICT_DATABASE_CHOOSER_CLASS(klass) \
(G_TYPE_CHECK_CLASS_CAST ((klass), GDICT_TYPE_DATABASE_CHOOSER, GdictDatabaseChooserClass))
#define GDICT_IS_DATABASE_CHOOSER_CLASS(klass) \
(G_TYPE_CHECK_CLASS_TYPE ((klass), GDICT_TYPE_DATABASE_CHOOSER))
#define GDICT_DATABASE_CHOOSER_GET_CLASS(obj) \
(G_TYPE_INSTANCE_GET_CLASS ((obj), GDICT_TYPE_DATABASE_CHOOSER, GdictDatabaseChooserClass))

typedef struct _GdictDatabaseChooser		GdictDatabaseChooser;
typedef struct _GdictDatabaseChooserPrivate	GdictDatabaseChooserPrivate;
typedef struct _GdictDatabaseChooserClass	GdictDatabaseChooserClass;

struct _GdictDatabaseChooser
{
  GtkComboBoxEntry parent_instance;
  
  GdictDatabaseChooserPrivate *priv;
};

struct _GdictDatabaseChooserClass
{
  GtkComboBoxEntryClass parent_class;
  
  void (*_gdict_padding1) (void);
  void (*_gdict_padding2) (void);
  void (*_gdict_padding3) (void);
  void (*_gdict_padding4) (void);
  void (*_gdict_padding5) (void);
  void (*_gdict_padding6) (void);
};

GType         gdict_database_chooser_get_type         (void) G_GNUC_CONST;

GtkWidget *   gdict_database_chooser_new              (void);
GtkWigdet *   gdict_database_chooser_new_with_context (GdictContext          *context);

GdictContext *gdict_database_chooser_get_context      (GdictDatabaseChooser  *chooser);
void          gdict_database_chooser_set_context      (GdictDatabaseChooser  *chooser,
						       GdictContext          *context);

gchar **      gdict_database_chooser_get_databases    (GdictDatabaseChooser  *chooser,
						       gsize                  length,
						       GError               **error) G_GNUC_MALLOC;
gboolean      gdict_database_chooser_has_database     (GdictDatabaseChooser  *chooser,
						       const gchar           *database);
gboolean      gdict_database_chooser_set_database     (GdictDatabaseChooser  *chooser,
						       const gchar           *database,
						       GError               **error);
gchar *       gdict_database_chooser_get_database     (GdictDatabaseChooser  *chooser) G_GNUC_MALLOC;

G_END_DECLS

#endif /* __GDICT_DATABASE_CHOOSER_H__ */
