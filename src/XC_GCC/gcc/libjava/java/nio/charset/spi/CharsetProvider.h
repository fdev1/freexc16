
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_charset_spi_CharsetProvider__
#define __java_nio_charset_spi_CharsetProvider__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace nio
    {
      namespace charset
      {
          class Charset;
        namespace spi
        {
            class CharsetProvider;
        }
      }
    }
  }
}

class java::nio::charset::spi::CharsetProvider : public ::java::lang::Object
{

public: // actually protected
  CharsetProvider();
public:
  virtual ::java::util::Iterator * charsets() = 0;
  virtual ::java::nio::charset::Charset * charsetForName(::java::lang::String *) = 0;
  static ::java::lang::Class class$;
};

#endif // __java_nio_charset_spi_CharsetProvider__
