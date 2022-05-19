cmake_minimum_required(VERSION 3.22)
project(ed-08)

set(CMAKE_CXX_STANDARD 14)

add_executable(ed-08 main.cpp Funcionario.h Garcom.h DiasDeTrabalho.h Mesa.h Conta.h Pedido.h Item.h)
