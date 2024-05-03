#ifndef DELIMITER_HPP
#define DELIMITER_HPP

namespace vojuck
{
  struct DelimiterChar
  {
    char exp;
  };

  struct DelimiterString
  {
    const char* exp;
  };

  std::istream& operator>>(std::istream& in, DelimiterChar&& exp);
  std::istream& operator>>(std::istream& in, DelimiterString&& exp);
}
#endif
