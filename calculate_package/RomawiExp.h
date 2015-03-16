#ifndef _ROMAWIEXP_H
#define _ROMAWIEXP_H
#include <string>

const int DIVIDE_BY_ZERO = 0;
const int NEGATIVE_VALUE = 1;
const int LARGE_NUMBER = 2;
const int VALUE_ZERO = 3;

class RomawiExp {
public:
  // ctor
  RomawiExp(int);
  RomawiExp(const RomawiExp&);

  void displayMsg();

private:
  static std::string msg[];
  const int msg_id;
};

#endif