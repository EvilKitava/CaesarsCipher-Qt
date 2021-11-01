#include "cipher.h"

#include <QDebug>

Cipher::Cipher()
{

}

QString Cipher::Encrypt(QString _text,int key){
    QString text = _text.toUpper();
    QStringList splitText = text.split("");
    QString result;

    for(int i = 0;i<splitText.count();i++){
        if(splitText[i] == " "){
            result += " ";
        }
        else if(splitText[i] == ","){
            result += ",";
        }
        else if(splitText[i] == "."){
            result += ". ";
        }
        else{
            for(int j = 0;j<26;j++){
                if(splitText[i] == alphabet[j]){
                    int k = j + key;
                    if(k > 25){
                        k = k - 26;
                    }
                    result += alphabet[k];
                }
            }
        }
    }

    return result;
}

QString Cipher::Decrypt(QString _text,int key){
    QString text = _text.toUpper();
    QStringList splitText = text.split("");
    QString result;

    for(int i = 0;i<splitText.count();i++){
        if(splitText[i].contains(" ")){
            result += " ";
        }
        else if(splitText[i].contains(",")){
            result += ",";
        }
        else if(splitText[i].contains(".")){
            result += ". ";
        }
        else{
            for(int j = 0;j<26;j++){
                if(splitText[i] == alphabet[j]){
                    int k = j - key;
                    if(k < 0){
                        k = k + 26;
                    }
                    result += alphabet[k];
                }
            }
        }
    }

    return result;
}
