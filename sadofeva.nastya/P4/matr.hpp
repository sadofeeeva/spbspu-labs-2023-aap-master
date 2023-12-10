#ifndef MATR_HPP
#define MATR_HPP
#include "fstream"

namespace sadofeva
{
  class Matrix
  {
  public:
    int fl_ar(std::ifstream& file, int *& values, int sz_M);
    int locMax(int* values, int rows, int cols);
    Matrix();
  private:
    int rows;
    int cols;
    int* values;
  };
}
#endif