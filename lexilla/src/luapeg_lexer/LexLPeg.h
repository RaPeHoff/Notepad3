/**
 * Copyright 2006-2020 Mitchell. See LICENSE.
 * Include file for directly (statically) compiling Scintillua into a
 * Scintilla-based application.
 */

#ifndef LEXLPEG_H
#define LEXLPEG_H

#ifdef __cplusplus
#include "ILexer.h"
#define ILEXER5 Scintilla::ILexer5
extern "C" {
#else
#define ILEXER5 void
#endif

const char *GetLibraryPropertyNames();
void SetLibraryProperty(const char *key, const char *value);
ILEXER5* CreateLexer(const char *name);

#ifdef __cplusplus
}
#endif

#endif
