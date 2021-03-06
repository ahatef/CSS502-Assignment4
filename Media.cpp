// ----------------------------------------Media.cpp----------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Media - implementation - superclass for all media stored in inventory
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#include "Media.h"

Media::Media(char nMediaType, char nStorageType, int nNumStock)
{
    //zero out all fields
    mediaType = 'n';//mediaType starts as non
    storageType = 'n';//storageType starts as non
    numStock = 0;//stock count starts as 0
    maxStock = 0;//max starts as 0
    
    mediaType = nMediaType;
    storageType = nStorageType;
    numStock = nNumStock;
    setMaxStock(nNumStock);
}
Media::Media(){}
Media::~Media()
{
    
}

//getters
char Media::getMediaType() const
{
    return mediaType;
}
char Media::getStorageType() const
{
    return storageType;
}
int Media::getNumStock() const
{
    return numStock;
}

//setters
void Media::setMaxStock(const int nNumstock)
{
    maxStock = maxStock + nNumstock;
}
void Media::setMediaType(char nMediaType)
{
    mediaType = nMediaType;
}
void Media::setStorageType(char nStorageType)
{
    storageType = nStorageType;
}
void Media::setNumStock(int nNumStock)
{
    numStock = nNumStock;
}

//invariance ---> only borrows media if there is media to borrow, else does nothing
void Media::borrowMedia()//increase stock by 1
{
    if (numStock != 0)
        numStock--;
    
}
//invariance ---> only returns media if adding item does not exceed number of original items in library, else does nothing
void Media::returnMedia()//increase stock by 1
{
    if (numStock < maxStock)
        numStock++;
}
//TODO ---> sort out virtual class implementation
//CLARIFICATION: do these need to be included in the .cpp???
//virtual Media::string getKey() const = 0;//unique key
//virtual bool Media::operator>(Media&) = 0;//less than operator overload for comparison


