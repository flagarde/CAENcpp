#pragma once

#include "source_location/source_location.hpp"

#include <cstdint>
#include <exception>
#include <string>

namespace CAEN
{

class Exception: public std::exception, public source_location
{
public:
  Exception() = delete;
  Exception(const std::int_least8_t& statusCode, const source_location& location = source_location::current());
  ~Exception() noexcept override = default;
  [[nodiscard]] const char*    what() const noexcept final;
  [[nodiscard]] const char*    description() const noexcept;
  [[nodiscard]] std::int_least8_t  code() const noexcept;

private:
  std::string            m_Description;
  std::string            m_What;
  const std::int_least8_t    m_Code{0};
  void                   constructMessage();
};

};
