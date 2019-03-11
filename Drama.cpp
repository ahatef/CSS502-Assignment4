// ----------------------------------------Drama.h------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Drama - implementation - drama genre inherited from Film
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#include "Drama.h"

Drama::Drama(char nMediaType, char nStorageType, int nNumStock, char nFilmType,
             string nDirector, string nTitle, int nYear) : Film(nMediaType, nStorageType, nNumStock, nFilmType, nDirector, nTitle, nYear)
{
    
}
Drama::~Drama()
{
    
}


// -------------------------------getKey()--------------------------------------
// generate key, D key ---> Director and title
// -----------------------------------------------------------------------------
string Drama::getKey() const //override
{
    return "TODO ---> implement getKey() ??? ---> does it call private hash method";
}
