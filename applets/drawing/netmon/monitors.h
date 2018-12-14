/*
 * vala-panel
 * Copyright (C) 2018 Konstantin Pugin <ria.freelander@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MONITORS_H
#define MONITORS_H

#include "client.h"
#include <gtk/gtk.h>

G_BEGIN_DECLS

G_DECLARE_FINAL_TYPE(NetMonApplet, netmon_applet, VALA_PANEL, NETMON_APPLET, ValaPanelApplet)

G_DECLARE_FINAL_TYPE(NetMonPlugin, netmon_plugin, VALA_PANEL, NETMON_PLUGIN, ValaPanelAppletPlugin)

G_END_DECLS

#endif // MONITORS_H
