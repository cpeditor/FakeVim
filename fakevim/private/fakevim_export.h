
#ifndef FAKEVIM_EXPORT_H
#define FAKEVIM_EXPORT_H

#ifdef FAKEVIM_STATIC_DEFINE
#  define FAKEVIM_EXPORT
#  define FAKEVIM_NO_EXPORT
#else
#  ifndef FAKEVIM_EXPORT
#    ifdef fakevim_EXPORTS
        /* We are building this library */
#      ifdef _WIN32
#        define FAKEVIM_EXPORT 
#      else
#        define FAKEVIM_EXPORT __attribute__((visibility("default")))
#      endif
#    else
        /* We are using this library */
#      ifdef _WIN32
#        define FAKEVIM_EXPORT 
#      else
#        define FAKEVIM_EXPORT __attribute__((visibility("default")))
#      endif
#    endif
#  endif

#  ifndef FAKEVIM_NO_EXPORT
#    ifdef _WIN32
#      define FAKEVIM_NO_EXPORT 
#    else
#      define FAKEVIM_NO_EXPORT __attribute__((visibility("hidden")))
#    endif
#  endif
#endif

#ifndef FAKEVIM_DEPRECATED
#  define FAKEVIM_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef FAKEVIM_DEPRECATED_EXPORT
#  define FAKEVIM_DEPRECATED_EXPORT FAKEVIM_EXPORT FAKEVIM_DEPRECATED
#endif

#ifndef FAKEVIM_DEPRECATED_NO_EXPORT
#  define FAKEVIM_DEPRECATED_NO_EXPORT FAKEVIM_NO_EXPORT FAKEVIM_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef FAKEVIM_NO_DEPRECATED
#    define FAKEVIM_NO_DEPRECATED
#  endif
#endif

#
