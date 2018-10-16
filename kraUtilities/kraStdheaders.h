#pragma once

#ifndef USING_STD
  template<typename T, typename alloc = std::allocator<T>>
  std::vector<T, alloc>;

#else
  template<typename T, typename alloc = std::allocator<T>>
  std::vector<T, alloc>;