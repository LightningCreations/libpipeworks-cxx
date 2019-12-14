# Libpipeworks-cxx
This is the C++ library for the Pipeworks Engine by Lightning Creations. The engine is subject to change without prior notice. More details about this policy are in a section below.

This engine is released under the GNU LGPL version 3 or later, which also has more information below.

## "Subject to Change" Policy
This engine is not fully developed. As such, many things can and will change from time to time. The condition on these changes is that no feature will be entirely lost from the engine unless the function was pre-deprecated.

For example, if we expose a direct interfact to SDL, and then we switch to wxWidgets, that's a change where we can't exactly replace the original functionality. However, the interface will be deprecated before it's even released, warning people to not use it.

As a different example, there may be a pentagon drawing function in the engine. However, that's pretty limited. Eventually, if we replace it with a generic polygon drawing algorithm, no functionality will be lost, but code will need to be changed.

Eventually, Pipeworks will be accurately specified, and that will (hopefully) be the last major change to the API. When that happens, this policy will change. However, until then, critical API functions will change without prior notice.

## Licensing
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
