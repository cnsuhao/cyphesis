AM_CPPFLAGS = -I$(top_srcdir) -I${top_builddir}

bin_PROGRAMS = cycmd cyconfig cyaddrules cyconvertrules cyloadrules \
               cydumprules cypasswd cydb cypython cyexport cyimport
noinst_SCRIPTS = cyphesis.sh

EXTRA_DIST = cyphesis.sh copy_python.sh

if LINK_STATIC

TOOL_LIBS = \
    /usr/lib/libvarconf-1.0.a \
    /usr/lib/libAtlasObjects-0.7.a \
    /usr/lib/libAtlasNet-0.7.a \
    /usr/lib/libAtlasCodecs-0.7.a \
    /usr/lib/libAtlasFilters-0.7.a \
    /usr/lib/libAtlasMessage-0.7.a \
    /usr/lib/libAtlas-0.7.a \
    /usr/lib/libsigc-2.0.a \
    $(STATIC_LIBSTDCPP) \
    $(STATIC_LIBGCC) \
    -lc -lm -lgcc_s

DBTOOL_LIBS = \
    /usr/lib/libvarconf-1.0.a \
    /usr/lib/libAtlasObjects-0.7.a \
    /usr/lib/libAtlasNet-0.7.a \
    /usr/lib/libAtlasCodecs-0.7.a \
    /usr/lib/libAtlasFilters-0.7.a \
    /usr/lib/libAtlasMessage-0.7.a \
    /usr/lib/libAtlas-0.7.a \
    /usr/lib/libsigc-2.0.a \
    /usr/lib/libpq.a \
    /usr/lib/libldap.a \
    /usr/lib/liblber.a \
    /usr/lib/libsasl2.a \
    /usr/lib/libdb-4.6.a \
    /usr/lib/libssl.a \
    /usr/lib/libgssapi_krb5.a \
    /usr/lib/libkrb5.a \
    /usr/lib/libk5crypto.a \
    /usr/lib/libkrb5support.a \
    /usr/lib/libkeyutils.a \
    /usr/lib/libgcrypt.a \
    /usr/lib/libgpg-error.a \
    /usr/lib/libcrypto.a \
    /usr/lib/libcrypt.a \
    /usr/lib/libselinux.a \
    /usr/lib/libsepol.a \
    /usr/lib/libresolv.a \
    /usr/lib/libcom_err.a \
    /usr/lib/libz.a \
    $(STATIC_LIBSTDCPP) \
    $(STATIC_LIBGCC) \
    -ldl -lpthread -lc -lm -lgcc_s

READLINETOOL_LIBS = \
    /usr/lib/libreadline.a \
    /usr/lib/libtinfo.a

NETWORKTOOL_LIBS = 

MATHTOOL_LIBS = \
    /usr/lib/libwfmath-0.3.a

AM_LDFLAGS = -nodefaultlibs

else

TOOL_LIBS = $(COMMON_LIBS)
DBTOOL_LIBS = $(COMMON_LIBS) $(PGSQL_LIBS)
READLINETOOL_LIBS = $(READLINE_LIBS)
NETWORKTOOL_LIBS = $(NETWORK_LIBS)
MATHTOOL_LIBS = $(MATH_LIBS)

endif

cycmd_SOURCES = cycmd.cpp \
        Flusher.cpp Flusher.h \
        OperationMonitor.cpp OperationMonitor.h \
        EntityExporterBase.cpp EntityExporterBase.h \
        EntityExporter.cpp EntityExporter.h \
        EntityImporterBase.cpp EntityImporterBase.h \
        EntityImporter.cpp EntityImporter.h \
        AdminClient.cpp AdminClient.h \
        ObjectContext.cpp ObjectContext.h \
        IdContext.cpp IdContext.h \
        AccountContext.cpp AccountContext.h \
        AvatarContext.cpp AvatarContext.h \
        ConnectionContext.cpp ConnectionContext.h \
        JunctureContext.cpp JunctureContext.h \
        Interactive.cpp Interactive.h
cycmd_LDADD = $(top_builddir)/common/operations.o \
              $(top_builddir)/common/client_socket.o \
              $(top_builddir)/common/globals.o \
              $(top_builddir)/common/system_prefix.o \
              $(top_builddir)/common/binreloc.o \
              $(top_builddir)/common/log.o \
              $(top_builddir)/common/const.o \
              $(top_builddir)/common/AtlasStreamClient.o \
              $(top_builddir)/common/ClientTask.o \
              $(top_builddir)/common/AtlasFileLoader.o \
              $(top_builddir)/common/system_uid.o \
              $(top_builddir)/common/system_net.o \
              $(top_builddir)/common/id.o \
              $(top_builddir)/common/utils.o \
              $(top_builddir)/common/debug.o \
              $(top_builddir)/common/serialno.o \
              $(READLINETOOL_LIBS) \
              $(NETWORKTOOL_LIBS) \
              $(TOOL_LIBS)

cyconfig_SOURCES = cyconfig.cpp
cyconfig_LDADD = $(top_builddir)/common/globals.o \
                 $(top_builddir)/common/system_prefix.o \
                 $(top_builddir)/common/binreloc.o \
                 $(top_builddir)/common/log.o \
                 $(top_builddir)/common/const.o \
                 $(TOOL_LIBS)

cyconvertrules_SOURCES = cyconvertrules.cpp
cyconvertrules_LDADD = $(top_builddir)/common/globals.o \
                       $(top_builddir)/common/system_prefix.o \
                       $(top_builddir)/common/binreloc.o \
                       $(top_builddir)/common/log.o \
                       $(top_builddir)/common/const.o \
                       $(TOOL_LIBS)

cyaddrules_SOURCES = cyaddrules.cpp AdminClient.cpp AdminClient.h

cyaddrules_LDADD = $(top_builddir)/common/operations.o \
                   $(top_builddir)/common/client_socket.o \
                   $(top_builddir)/common/globals.o \
                   $(top_builddir)/common/system_prefix.o \
                   $(top_builddir)/common/system_uid.o \
                   $(top_builddir)/common/system_net.o \
                   $(top_builddir)/common/binreloc.o \
                   $(top_builddir)/common/const.o \
                   $(top_builddir)/common/log.o \
                   $(top_builddir)/common/debug.o \
                   $(top_builddir)/common/AtlasStreamClient.o \
                   $(NETWORKTOOL_LIBS) \
                   $(TOOL_LIBS)

cyloadrules_SOURCES = cyloadrules.cpp

cyloadrules_LDADD = \
    $(top_builddir)/common/Storage.o \
    $(top_builddir)/common/Database.o \
    $(top_builddir)/common/globals.o \
    $(top_builddir)/common/system.o \
    $(top_builddir)/common/system_prefix.o \
    $(top_builddir)/common/binreloc.o \
    $(top_builddir)/common/const.o \
    $(top_builddir)/common/log.o \
    $(top_builddir)/common/id.o \
    $(MATHTOOL_LIBS) \
    $(DBTOOL_LIBS)

cydumprules_SOURCES = cydumprules.cpp

cydumprules_LDADD = $(top_builddir)/common/Database.o \
                    $(top_builddir)/common/globals.o \
                    $(top_builddir)/common/system_prefix.o \
                    $(top_builddir)/common/binreloc.o \
                    $(top_builddir)/common/const.o \
                    $(top_builddir)/common/log.o \
                    $(top_builddir)/common/id.o \
                    $(DBTOOL_LIBS)

cypasswd_SOURCES = cypasswd.cpp

cypasswd_LDADD = $(top_builddir)/common/Database.o \
                 $(top_builddir)/common/Storage.o \
                 $(top_builddir)/common/globals.o \
                 $(top_builddir)/common/system_prefix.o \
                 $(top_builddir)/common/binreloc.o \
                 $(top_builddir)/common/const.o \
                 $(top_builddir)/common/log.o \
                 $(top_builddir)/common/id.o \
                 $(top_builddir)/common/system.o \
                 $(NETWORKTOOL_LIBS) \
                 $(MATHTOOL_LIBS) \
                 $(DBTOOL_LIBS)

cydb_SOURCES = cydb.cpp

cydb_LDADD = $(top_builddir)/common/Database.o \
             $(top_builddir)/common/Storage.o \
             $(top_builddir)/common/globals.o \
             $(top_builddir)/common/system_prefix.o \
             $(top_builddir)/common/binreloc.o \
             $(top_builddir)/common/const.o \
             $(top_builddir)/common/log.o \
             $(top_builddir)/common/id.o \
             $(top_builddir)/common/system.o \
             $(READLINETOOL_LIBS) \
             $(MATHTOOL_LIBS) \
             $(DBTOOL_LIBS)

cypython_SOURCES = cypython.cpp

cypython_LDADD = $(top_builddir)/common/client_socket.o \
                 $(top_builddir)/common/globals.o \
                 $(top_builddir)/common/system_prefix.o \
                 $(top_builddir)/common/binreloc.o \
                 $(top_builddir)/common/const.o \
                 $(top_builddir)/common/log.o \
                 $(READLINETOOL_LIBS) \
                 $(MATHTOOL_LIBS) \
                 $(NETWORKTOOL_LIBS) \
                 $(DBTOOL_LIBS)
                 
cyexport_SOURCES = cyexport.cpp EntityExporterBase.cpp  EntityExporterBase.h \
                   EntityExporter.cpp EntityExporter.h AgentCreationTask.cpp AgentCreationTask.h \
                   WaitForDeletionTask.cpp WaitForDeletionTask.h

cyexport_LDADD = $(top_builddir)/common/operations.o \
                 $(top_builddir)/common/client_socket.o \
                 $(top_builddir)/common/globals.o \
                 $(top_builddir)/common/system_prefix.o \
                 $(top_builddir)/common/binreloc.o \
                 $(top_builddir)/common/log.o \
                 $(top_builddir)/common/const.o \
                 $(top_builddir)/common/AtlasStreamClient.o \
                 $(top_builddir)/common/ClientTask.o \
                 $(top_builddir)/common/system_uid.o \
                 $(top_builddir)/common/system_net.o \
                 $(top_builddir)/common/id.o \
                 $(top_builddir)/common/utils.o \
                 $(top_builddir)/common/debug.o \
                 $(top_builddir)/common/serialno.o \
                 $(READLINETOOL_LIBS) \
                 $(NETWORKTOOL_LIBS) \
                 $(TOOL_LIBS)

cyimport_SOURCES = cyimport.cpp EntityImporterBase.cpp  EntityImporterBase.h \
                   EntityImporter.cpp EntityImporter.h AgentCreationTask.cpp AgentCreationTask.h \
                   EntityTraversalTask.cpp EntityTraversalTask.h WaitForDeletionTask.cpp WaitForDeletionTask.h

cyimport_LDADD = $(top_builddir)/common/operations.o \
                 $(top_builddir)/common/client_socket.o \
                 $(top_builddir)/common/globals.o \
                 $(top_builddir)/common/system_prefix.o \
                 $(top_builddir)/common/binreloc.o \
                 $(top_builddir)/common/log.o \
                 $(top_builddir)/common/const.o \
                 $(top_builddir)/common/AtlasStreamClient.o \
                 $(top_builddir)/common/ClientTask.o \
                 $(top_builddir)/common/AtlasFileLoader.o \
                 $(top_builddir)/common/system_uid.o \
                 $(top_builddir)/common/system_net.o \
                 $(top_builddir)/common/id.o \
                 $(top_builddir)/common/utils.o \
                 $(top_builddir)/common/debug.o \
                 $(top_builddir)/common/serialno.o \
                 $(READLINETOOL_LIBS) \
                 $(NETWORKTOOL_LIBS) \
                 $(TOOL_LIBS)
                 