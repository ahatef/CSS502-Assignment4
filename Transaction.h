// ----------------------------------Transaction.h------------------------------
// Programmer Names:            Tetsuya Hayashi/Eddie Raskin/Ahmed Nada
// Course Section Number:       CSS502A - Winter 2019
// Creation Date:               03/03/2019
// Date of Last Modification:   03/07/2019
// -----------------------------------------------------------------------------
// Transaction - header - transaction item stored in vector in TransactionMgr
// contains info on which account, type of media, and type of transaction occured
// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
#ifndef Transaction_h
#define Transaction_h

#include "Account.h"
#include "Media.h"

using namespace std;

class Transaction
{
    Account* account;
    Media* media;
    char actionType;
    
public:
    //getters
    Account* getAccount() const;
    Media* getMedia() const;
    char getActionType() const;
    
    //setters
    void setAccount(Account* nAccount);
    void setMedia(Media* nMedia);
    void setActionType(char getActionType);

};

#endif
