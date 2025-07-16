cmake_minimum_required(VERSION 3.31)
project(Cpp01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00
        ex00/main.cpp
        ex00/Zombie.hpp
        ex00/Zombie.cpp
        ex00/newZombie.cpp
        ex00/randomChump.cpp
)
add_executable(ex01 ex01/Makefile ex01/Zombie.cpp ex01/Zombie.hpp
        ex01/zombieHorde.cpp
        ex01/main.cpp)
add_executable(ex02 ex02/main.cpp
        ex02/Makefile)
add_executable(ex03 ex03/main.cpp
        ex03/Makefile
        ex03/Weapon.hpp
        ex03/Weapon.cpp
        ex03/HumanA.hpp
        ex03/HumanA.cpp
        ex03/HumanB.hpp
        ex03/HumanB.cpp)
add_executable(ex04 ex04/main.cpp
        ex04/Makefile
        ex04/Replace.hpp
        ex04/Replace.cpp)
add_executable(ex05 ex05/main.cpp
        ex05/Harl.hpp
        ex05/Makefile
        ex05/Harl.cpp
)
add_executable(ex06 ex06/Harl.cpp ex06/Harl.hpp ex06/main.cpp ex06/Makefile)
