/* GDK - The GIMP Drawing Kit
 * Copyright (C) 2009 Carlos Garnacho <carlosg@gnome.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __GDK_DEVICE_MANAGER_WIN32_H__
#define __GDK_DEVICE_MANAGER_WIN32_H__

#include <gdk/gdkdevicemanagerprivate.h>

G_BEGIN_DECLS

#define GDK_TYPE_DEVICE_MANAGER_WIN32         (gdk_device_manager_win32_get_type ())
#define GDK_DEVICE_MANAGER_WIN32(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), GDK_TYPE_DEVICE_MANAGER_WIN32, GdkDeviceManagerWin32))
#define GDK_DEVICE_MANAGER_WIN32_CLASS(c)     (G_TYPE_CHECK_CLASS_CAST ((c), GDK_TYPE_DEVICE_MANAGER_WIN32, GdkDeviceManagerWin32Class))
#define GDK_IS_DEVICE_MANAGER_WIN32(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), GDK_TYPE_DEVICE_MANAGER_WIN32))
#define GDK_IS_DEVICE_MANAGER_WIN32_CLASS(c)  (G_TYPE_CHECK_CLASS_TYPE ((c), GDK_TYPE_DEVICE_MANAGER_WIN32))
#define GDK_DEVICE_MANAGER_WIN32_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GDK_TYPE_DEVICE_MANAGER_WIN32, GdkDeviceManagerWin32Class))

typedef struct _GdkDeviceManagerWin32 GdkDeviceManagerWin32;
typedef struct _GdkDeviceManagerWin32Class GdkDeviceManagerWin32Class;

struct _GdkDeviceManagerWin32
{
  GdkDeviceManager parent_object;
  GdkDevice *core_pointer;
  GdkDevice *core_keyboard;
  GList *wintab_devices;
};

struct _GdkDeviceManagerWin32Class
{
  GdkDeviceManagerClass parent_class;
};

GType gdk_device_manager_win32_get_type (void) G_GNUC_CONST;

void     _gdk_input_set_tablet_active (void);
gboolean _gdk_input_other_event       (GdkEvent  *event,
                                       MSG       *msg,
                                       GdkWindow *window);

G_END_DECLS

#endif /* __GDK_DEVICE_MANAGER_WIN32_H__ */
