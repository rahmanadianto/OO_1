#ifndef _ARABEXP_H
#define _ARABEXP_H

#include <string>

const int DIVIDE_BY_ZERO = 0;
const int NEGATIVE_VALUE = 1;
const int LARGE_NUMBER = 2;
const int VALUE_ZERO = 3;

class ArabExp {
public:
  // ctor
  ArabExp(int);
  ArabExp(const ArabExp&);

  void displayMsg();

private:
  static std::string msg[];
  const int msg_id;
};
#endif