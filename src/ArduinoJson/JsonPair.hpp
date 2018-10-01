// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

#include "JsonVariant.hpp"

namespace ARDUINOJSON_NAMESPACE {

// A key value pair for JsonObjectData.
class JsonPair {
 public:
  JsonPair(MemoryPool* memoryPool, Slot* slot) {
    if (slot) {
      _key = slot->key;
      _value = JsonVariant(memoryPool, &slot->value);
    } else {
      _key = 0;
    }
  }

  const char* key() const {
    return _key;
  }

  JsonVariant value() const {
    return _value;
  }

 private:
  const char* _key;
  JsonVariant _value;
};
}  // namespace ARDUINOJSON_NAMESPACE
