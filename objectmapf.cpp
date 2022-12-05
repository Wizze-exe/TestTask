#include "objectmapf.h"

ObjectMapF::ObjectMapF()
{

}

double ObjectMapF::getMapDouble(QString key) const{
    return mapDouble.at(key);
}

bool ObjectMapF::getMapBool(QString key) const{
    return mapBool.at(key);
}

QString ObjectMapF::getMapQString(QString key) const{
    return mapQString.at(key);
}

void ObjectMapF::setMap(double value, QString key){
    mapDouble.insert({key, value});
}

void ObjectMapF::setMap(bool value, QString key){
    mapBool.insert({key, value});
}

void ObjectMapF::setMap(QString value, QString key){
    mapQString.insert({key, value});
}
