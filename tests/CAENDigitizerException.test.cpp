#include "CAENDigitizerException.hpp"

#include "doctest/doctest.h"

#include <iostream>

using namespace CAEN;


void DigitizerExceptions()
{
  std::cout << "CAENDigitizer Errors" << std::endl;
  for(unsigned int i = 0; i != 36; ++i)
  {
    try
    {
      Exception(-i);
    }
    catch(std::exception& evet)
    {
      std::cout << evet.what() << std::endl;
    }
  }
}

TEST_CASE("Test CAENDigitizer Errors.")
{
  DigitizerExceptions();
}
