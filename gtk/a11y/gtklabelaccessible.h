/* GAIL - The GNOME Accessibility Implementation Library
 * Copyright 2001 Sun Microsystems Inc.
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
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GTK_LABEL_ACCESSIBLE_H__
#define __GTK_LABEL_ACCESSIBLE_H__

#include "gtkwidgetaccessible.h"

G_BEGIN_DECLS

#define GTK_TYPE_LABEL_ACCESSIBLE            (_gtk_label_accessible_get_type ())
#define GTK_LABEL_ACCESSIBLE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LABEL_ACCESSIBLE, GtkLabelAccessible))
#define GTK_LABEL_ACCESSIBLE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LABEL_ACCESSIBLE, GtkLabelAccessibleClass))
#define GTK_IS_LABEL_ACCESSIBLE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LABEL_ACCESSIBLE))
#define GTK_IS_LABEL_ACCESSIBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LABEL_ACCESSIBLE))
#define GTK_LABEL_ACCESSIBLE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LABEL_ACCESSIBLE, GtkLabelAccessibleClass))

typedef struct _GtkLabelAccessible      GtkLabelAccessible;
typedef struct _GtkLabelAccessibleClass GtkLabelAccessibleClass;

struct _GtkLabelAccessible
{
  GtkWidgetAccessible parent;

  gchar *text;
  gint cursor_position;
  gint selection_bound;
};

struct _GtkLabelAccessibleClass
{
  GtkWidgetAccessibleClass parent_class;
};

GType _gtk_label_accessible_get_type (void);

G_END_DECLS

#endif /* __GTK_LABEL_ACCESSIBLE_H__ */
