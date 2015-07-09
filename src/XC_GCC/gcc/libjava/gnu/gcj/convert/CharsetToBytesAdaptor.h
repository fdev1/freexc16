
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_CharsetToBytesAdaptor__
#define __gnu_gcj_convert_CharsetToBytesAdaptor__

#pragma interface

#include <gnu/gcj/convert/UnicodeToBytes.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
          class CharsetToBytesAdaptor;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
        class CharBuffer;
      namespace charset
      {
          class Charset;
          class CharsetEncoder;
      }
    }
  }
}

class gnu::gcj::convert::CharsetToBytesAdaptor : public ::gnu::gcj::convert::UnicodeToBytes
{

public:
  CharsetToBytesAdaptor(::java::nio::charset::Charset *);
  CharsetToBytesAdaptor(::java::nio::charset::CharsetEncoder *);
  virtual ::java::lang::String * getName();
  virtual jint write(JArray< jchar > *, jint, jint);
  virtual jint write(::java::lang::String *, jint, jint, jchar);
private:
  void write(::java::nio::CharBuffer *);
public:
  virtual jboolean havePendingBytes();
  virtual void setFinished();
  virtual void done();
private:
  ::java::nio::charset::CharsetEncoder * __attribute__((aligned(__alignof__( ::gnu::gcj::convert::UnicodeToBytes)))) encoder;
  ::java::nio::ByteBuffer * outBuf;
  jboolean closedEncoder;
  jboolean hasBytes;
  jboolean finished;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_convert_CharsetToBytesAdaptor__
