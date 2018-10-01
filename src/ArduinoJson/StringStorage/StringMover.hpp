// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

namespace ARDUINOJSON_NAMESPACE {

template <typename TChar>
class StringMover {
 public:
  class String {
   public:
    String(TChar** ptr) : _writePtr(ptr), _startPtr(*ptr) {}

    void append(char c) {
      *(*_writePtr)++ = TChar(c);
    }

    const char* c_str() const {
      *(*_writePtr)++ = 0;
      return reinterpret_cast<const char*>(_startPtr);
    }

   private:
    TChar** _writePtr;
    TChar* _startPtr;
  };

  StringMover(TChar* ptr) : _ptr(ptr) {}

  String startString() {
    return String(&_ptr);
  }

 private:
  TChar* _ptr;
};
}  // namespace ARDUINOJSON_NAMESPACE
