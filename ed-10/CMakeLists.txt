cmake_minimum_required(VERSION 3.22)
project(ed-09)

set(CMAKE_CXX_STANDARD 14)

add_executable(ed-09 main.cpp Funcionario.h Garcom.h DiasDeTrabalho.h Mesa.h Conta.h Pedido.h Item.h TelaMesa.h TelaPedido.h)
