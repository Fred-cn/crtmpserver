/*
 *  Copyright (c) 2010,
 *  Gavriloaie Eugen-Andrei (shiretu@gmail.com)
 *
 *  This file is part of crtmpserver.
 *  crtmpserver is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  crtmpserver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with crtmpserver.  If not, see <http://www.gnu.org/licenses/>.
 */


#if defined HAS_PROTOCOL_TS && defined HAS_MEDIA_TS
#include "protocols/ts/basetsappprotocolhandler.h"
#include "protocols/baseprotocol.h"
#include "protocols/ts/innettsstream.h"

BaseTSAppProtocolHandler::BaseTSAppProtocolHandler(Variant &configuration)
: BaseAppProtocolHandler(configuration) {

}

BaseTSAppProtocolHandler::~BaseTSAppProtocolHandler() {
}

void BaseTSAppProtocolHandler::RegisterProtocol(BaseProtocol *pProtocol) {
}

void BaseTSAppProtocolHandler::UnRegisterProtocol(BaseProtocol *pProtocol) {
}
#endif	/* HAS_PROTOCOL_TS */
