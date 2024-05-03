#ifndef DATA_STRUCT_HPP
#define DATA_STRUCT_HPP

#include <iostream>

namespace vojuck
{
  struct DataStruct
  {
    unsigned long long  key1;
    char key2;
    std::string key3;
  };

  bool operator<(const DataStruct &leftObj, const DataStruct &rightObj);
  std::istream& operator>>(std::istream& in, DataStruct& data);
  std::ostream& operator<<(std::ostream& out, const DataStruct& data);
}
#endif
