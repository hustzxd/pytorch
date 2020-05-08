#pragma once


namespace torch {
namespace utils {

struct TORCH_API CPPStackTraces {
  static bool is_enabled() {
    return _enabled;
  }
  static void set_enabled(bool enabled) {
    _enabled = enabled;
  }

private:
  static bool _enabled = false;
};

} // namespace utils
} // namespace torch