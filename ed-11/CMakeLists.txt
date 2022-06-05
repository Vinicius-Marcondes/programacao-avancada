cmake_minimum_required(VERSION 3.22)
project(ed-11)

set(CMAKE_CXX_STANDARD 14)

add_executable(ed-11 main.cpp Mesa.h Conta.h Pedido.h Item.h TelaMesa.h TelaPedido.h TelaConta.h ControleMesa.h ControlePedido.h ControleConta.h ItemDAO.h ItemDAO.cpp)
