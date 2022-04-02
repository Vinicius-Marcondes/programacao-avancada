cmake_minimum_required(VERSION 3.16)
project(ed_06)

set(CMAKE_CXX_STANDARD 14)

add_executable(ed_06 main.cpp Cliente.h Conta.h Banco.h ContaCorrente.h ContaPoupanca.h ContaSalario.h Investimento.h)
