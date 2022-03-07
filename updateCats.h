///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Mark Nelson <marknels@hawaii.edu>
/// @date   07_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <stdbool.h>

#include "catDatabase.h"


/// All of these functions return true if they succeed
extern bool updateCatName    ( const size_t index, const char*              name    ) ;
extern bool fixCat           ( const size_t index                                   ) ;
extern bool updateCatWeight  ( const size_t index, const float              weight  ) ;
extern bool updateCatCollar1 ( const size_t index, const enum Color         color   ) ;
extern bool updateCatCollar2 ( const size_t index, const enum Color         color   ) ;
extern bool updateLicense    ( const size_t index, const unsigned long long license ) ;
