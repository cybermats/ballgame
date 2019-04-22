//
// Created by mats on 4/17/19.
//

#pragma once


#include <cassert>

template<typename T>
class Vec2 {
public:
    T x;
    T y;

    Vec2()
    : x(0), y(0) {}

    Vec2(T x, T y)
    : x(x), y(y) {}

    const T& operator[](int i) const {
      assert(i >= 0 && i < 2);
      switch(i) {
        case 0:
          return x;
        case 1:
          return y;
      }
    }

    T& operator[](int i) {
      assert(i >= 0 && i < 2);
      switch(i) {
        case 0:
          return x;
        case 1:
          return y;
      }
    }
};

using Vec2f = Vec2<float>;

template<typename T>
class Vec3 {
public:
    T x;
    T y;
    T z;

    Vec3()
            : x(0), y(0), z(0) {}

    Vec3(T x, T y, T z)
            : x(x), y(y), z(z) {}

    const T& operator[](int i) const {
      assert(i >= 0 && i < 3);
      switch(i) {
        case 0:
          return x;
        case 1:
          return y;
        case 2:
          return z;
      }
    }

    T& operator[](int i) {
      assert(i >= 0 && i < 3);
      switch(i) {
        case 0:
          return x;
        case 1:
          return y;
        case 2:
          return z;
      }
    }
};

using Vec3f = Vec3<float>;