#ifndef __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
#define __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__

#include <cstdint>
#include <ostream>
#include <string>


// clang-format off
#if defined(_MSC_VER)

  #ifndef TD_MANUALLY_ALIGNED_STRUCT
  #define TD_MANUALLY_ALIGNED_STRUCT(alignment) \
    __pragma(pack(1)) \
    struct __declspec(align(alignment))
  #endif  // TD_MANUALLY_ALIGNED_STRUCT

  #ifndef TD_STRUCT_END
  #define TD_STRUCT_END(name, size) \
    __pragma(pack()) \
    static_assert(sizeof(name) == size, "compiler breaks packing rules")
  #endif  // TD_STRUCT_END

#elif defined(__GNUC__) || defined(__clang__) || defined(__ICCARM__)

  #ifndef TD_MANUALLY_ALIGNED_STRUCT
  #define TD_MANUALLY_ALIGNED_STRUCT(alignment) \
    _Pragma("pack(1)") \
    struct __attribute__((aligned(alignment)))
  #endif  // TD_MANUALLY_ALIGNED_STRUCT

  #ifndef TD_STRUCT_END
  #define TD_STRUCT_END(name, size) \
    _Pragma("pack()") \
    static_assert(sizeof(name) == size, "compiler breaks packing rules")
  #endif  // TD_STRUCT_END

#else
  #error Please define structure alignment macros for this compiler.
#endif
// clang-format on

#if (!defined(_MSC_VER) || _MSC_VER > 1600) && \
    (!defined(__GNUC__) || (__GNUC__ * 100 + __GNUC_MINOR__ >= 407)) || \
    defined(__clang__)
  #define TD_FINAL_CLASS final
  #define TD_OVERRIDE override
  #define TD_EXPLICIT_CPP11 explicit
#else
  #define TD_FINAL_CLASS
  #define TD_OVERRIDE
  #define TD_EXPLICIT_CPP11
#endif


// struct forward declarations
struct structA;
struct structB;
struct structC;


TD_MANUALLY_ALIGNED_STRUCT(4) structA TD_FINAL_CLASS {
  private:
    char32_t saimpliedChar_ = 'c';
    int32_t sasm_ = 0;
    int32_t sasm2_ = 0;
  public:
  structA(
    ) {};
    char32_t saimpliedChar() const { return saimpliedChar_; }
    int32_t sasm() const { return sasm_; }
    int32_t sasm2() const { return sasm2_; }
    friend std::ostream& operator<<(std::ostream& os, const structA& obj);
};
TD_STRUCT_END(structA, 12);

bool operator==(const structA &lhs, const structA &rhs);
inline bool operator!=(const structA &lhs, const structA &rhs) { return !(lhs == rhs); };


TD_MANUALLY_ALIGNED_STRUCT(4) structB TD_FINAL_CLASS {
  private:
    int32_t sbsm_ = 0;
    int32_t sbsm2_ = 0;
  public:
  structB(
    ) {};
    int32_t sbsm() const { return sbsm_; }
    int32_t sbsm2() const { return sbsm2_; }
    friend std::ostream& operator<<(std::ostream& os, const structB& obj);
};
TD_STRUCT_END(structB, 8);

bool operator==(const structB &lhs, const structB &rhs);
inline bool operator!=(const structB &lhs, const structB &rhs) { return !(lhs == rhs); };


TD_MANUALLY_ALIGNED_STRUCT(4) structC TD_FINAL_CLASS {
  private:
    int32_t scsm_ = 0;
    int32_t scsm2_ = 0;
  public:
  structC(
    ) {};
    int32_t scsm() const { return scsm_; }
    int32_t scsm2() const { return scsm2_; }
    friend std::ostream& operator<<(std::ostream& os, const structC& obj);
};
TD_STRUCT_END(structC, 8);

bool operator==(const structC &lhs, const structC &rhs);
inline bool operator!=(const structC &lhs, const structC &rhs) { return !(lhs == rhs); };




#endif  // __EXAMPLES_SIMPLE_VALUES_TD_CPP_H__
