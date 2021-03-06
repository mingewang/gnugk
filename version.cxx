//////////////////////////////////////////////////////////////////
//
// PURPOSE OF THIS FILE: Give version info
//
// Copyright (C) 2003 Nils.Bokermann@mediaways.net
// Copyright (c) 2006-2012, Jan Willamowius
//
// This work is published under the GNU Public License version 2 (GPLv2)
// see file COPYING for details.
// We also explicitly grant the right to link this code
// with the OpenH323/H323Plus and OpenSSL library.
//
//////////////////////////////////////////////////////////////////

#include <ptlib.h>
#include <ptlib/sockets.h>
#include "versionts.h"
#include "version.h"
#include "Toolkit.h"
#include "config.h"

const PString Toolkit::GKVersion()
{
	return PString(PString::Printf,
		       "Gatekeeper(%s) Version(%s) Ext(crypto/ssl=%d,firebird=%d,geoip=%d,h235media=%d,h46017=%d,h46018=%d,h46023=%d,h46026=%d,ipv6=%d,large_fdset=%d,ldap=%d,lua=%d,mysql=%d,odbc=%d,pgsql=%d,pthreads=%d,radius=%d,snmp=%d,ssh=%d,sqlite=%d)"
		       " H323Plus(%d.%d.%d) PTLib(%d.%d.%d) Build(%s, %s) Sys(%s %s %s)\r\n",
		       (const unsigned char*)(PProcess::Current().GetManufacturer()),
		       (const unsigned char*)(PProcess::Current().GetVersion(true)),
#if P_SSL
				(int)1,
#else
				(int)0,
#endif
#if HAS_FIREBIRD
				(int)1,
#else
				(int)0,
#endif
#if HAS_GEOIP
				(int)1,
#else
				(int)0,
#endif
#ifdef HAS_H235_MEDIA
				(int)1,
#else
				(int)0,
#endif
#if HAS_H46017
				(int)1,
#else
				(int)0,
#endif
#if HAS_H46018
				(int)1,
#else
				(int)0,
#endif
#if HAS_H46023
				(int)1,
#else
				(int)0,
#endif
#if HAS_H46026
				(int)1,
#else
				(int)0,
#endif
#ifdef hasIPV6
				(int)1,
#else
				(int)0,
#endif
#ifdef LARGE_FDSET
				(int)LARGE_FDSET,
#else
				(int)0,
#endif
#if P_LDAP
				(int)1,
#else
				(int)0,
#endif
#ifdef HAS_LUA
				(int)1,
#else
				(int)0,
#endif
#if HAS_MYSQL
				(int)1,
#else
				(int)0,
#endif
#if HAS_ODBC
				(int)1,
#else
				(int)0,
#endif
#if HAS_PGSQL
				(int)1,
#else
				(int)0,
#endif
#ifdef P_PTHREADS
				(int)1,
#else
				(int)0,
#endif
#if HAS_RADIUS
				(int)1,
#else
				(int)0,
#endif
#if HAS_SNMP
				(int)1,
#else
				(int)0,
#endif
#if HAS_LIBSSH
				(int)1,
#else
				(int)0,
#endif
#if HAS_SQLITE
				(int)1,
#else
				(int)0,
#endif
				OPENH323_MAJOR, OPENH323_MINOR, OPENH323_BUILD,
				PTLIB_MAJOR, PTLIB_MINOR, PTLIB_BUILD,
		       __DATE__, __TIME__,
		       (const unsigned char*)(PProcess::GetOSName()),
		       (const unsigned char*)(PProcess::GetOSHardware()),
		       (const unsigned char*)(PProcess::GetOSVersion())
		);
}
