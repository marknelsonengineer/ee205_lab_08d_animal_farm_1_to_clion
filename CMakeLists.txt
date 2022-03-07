cmake_minimum_required(VERSION 3.20)
project(ee205_lab_08d_animal_farm_1_to_clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_08d_animal_farm_1_to_clion main.cpp addCats.cpp addCats.h config.h catDatabase.cpp catDatabase.h deleteCats.cpp deleteCats.h reportCats.cpp reportCats.h updateCats.cpp updateCats.h)
