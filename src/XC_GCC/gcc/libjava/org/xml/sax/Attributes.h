
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_Attributes__
#define __org_xml_sax_Attributes__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Attributes;
      }
    }
  }
}

class org::xml::sax::Attributes : public ::java::lang::Object
{

public:
  virtual jint getLength() = 0;
  virtual ::java::lang::String * getURI(jint) = 0;
  virtual ::java::lang::String * getLocalName(jint) = 0;
  virtual ::java::lang::String * getQName(jint) = 0;
  virtual ::java::lang::String * getType(jint) = 0;
  virtual ::java::lang::String * getValue(jint) = 0;
  virtual jint getIndex(::java::lang::String *, ::java::lang::String *) = 0;
  virtual jint getIndex(::java::lang::String *) = 0;
  virtual ::java::lang::String * getType(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::lang::String * getType(::java::lang::String *) = 0;
  virtual ::java::lang::String * getValue(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::lang::String * getValue(::java::lang::String *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_xml_sax_Attributes__
