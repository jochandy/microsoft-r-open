
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_VMProcess__
#define __java_lang_VMProcess__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::lang::VMProcess : public ::java::lang::Object
{

public: // actually package-private
  VMProcess();
  static ::java::lang::Process * nativeExec(JArray< ::java::lang::String * > *, JArray< ::java::lang::String * > *, ::java::io::File *, jboolean);
  static ::java::lang::Process * exec(::java::util::List *, ::java::util::Map *, ::java::io::File *, jboolean);
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_VMProcess__