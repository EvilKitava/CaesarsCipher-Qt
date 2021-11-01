#ifndef CIPHER_H
#define CIPHER_H

#include <QObject>

class Cipher
{
protected:
    QString alphabet[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

public:
    Cipher();

    QString Encrypt(QString _text,int key);
    QString Decrypt(QString _text,int key);
};

#endif // CIPHER_H
