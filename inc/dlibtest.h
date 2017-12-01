#ifndef __dlibtest_H__
#define __dlibtest_H__

#include <app.h>
#include <Elementary.h>
#include <system_settings.h>
#include <efl_extension.h>
#include <dlog.h>

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "dlibtest"

#if !defined(PACKAGE)
#define PACKAGE "org.example.dlibtest"
#endif

#endif /* __dlibtest_H__ */
