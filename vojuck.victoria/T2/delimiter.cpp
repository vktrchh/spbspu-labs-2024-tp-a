#include <string>
#include <istream>
#include "delimiter.hpp"

std::istream& vojuck::operator>>(std::istream& in, DelimiterChar&& exp)
{
  std::istream::sentry guard(in);
  if (!guard)
  {
    return in;
  }
  char c = 0;
  in >> c;
  if (c != exp.exp)
  {
    in.setstate(std::ios::failbit);
  }
  return in;
}

std::istream& vojuck::operator>>(std::istream& in, DelimiterString&& exp)
{
  std::istream::sentry guard(in);
  if (!guard)
  {
    return in;
  }
  char c = 0;
  for (int i = 0; exp.exp[i] != '\0'; i++)
  {
    in >> c;
    if (c != exp.exp[i])
    {
      in.setstate(std::ios::failbit);
    }
  }
  return in;
}
