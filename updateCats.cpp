///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Mark Nelson <marknels@hawaii.edu>
/// @date   07_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>  // For memset and strncpy

#include "config.h"
#include "updateCats.h"
#include "reportCats.h"

#define CHECK_INDEX( index )    if( !isIndexValid( index ) ) {                                              \
                                           fprintf( stderr, "%s: %s(): Bad cat!\n", PROGRAM_NAME, __FUNCTION__ ) ;  \
                                           return false ;                                                           \
                                   }



bool updateCatName( const size_t index, const char* name ) {
   CHECK_INDEX( index )

   if( !isNameValid( name ) ) {  // Is the name too long, too short or NULL
      return false ;
   }

   if( findCat( name ) != BAD_CAT ) { // Does the name already exist in the database
      return false;
   }

   // Do the deed
   memset( cats[index].name, 0, MAX_CAT_NAME ) ;  // Zero out the old cat's name
   strncpy( cats[index].name, name, MAX_CAT_NAME-1 ) ;

   return true ;
}


bool fixCat( const size_t index ) {
   CHECK_INDEX( index )

   // Do the deed
   cats[index].isFixed = true ;

   return true ;
}


bool updateCatWeight( const size_t index, const float weight ) {
   CHECK_INDEX( index )

   if( !isWeightValid( weight)) {
      return false ;
   }

   // Do the deed
   cats[index].weight = weight ;

   return true ;
}


bool updateCatCollar1( const size_t index, const enum Color color ) {
   CHECK_INDEX( index )

   cats[index].collarColor1 = color ;

   return true ;
}


bool updateCatCollar2( const size_t index, const enum Color color ) {
   CHECK_INDEX( index )

   cats[index].collarColor2 = color ;

   return true ;
}


bool updateLicense( const size_t index, const unsigned long long license ) {
   CHECK_INDEX( index )

   cats[index].license = license ;

   return true ;
}
