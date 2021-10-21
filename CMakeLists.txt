cmake_minimum_required(VERSION 2.8)

project(KR2)

set(KR2_src test.cpp CComplexVector.cpp main.cpp)
set(KR2_hdr CComplexVector.h test.h Header.h)

add_executable(${PROJECT_NAME} ${KR2_src} ${KR2_hdr})