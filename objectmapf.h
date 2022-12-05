#ifndef OBJECTMAPF_H
#define OBJECTMAPF_H

#include <QString>
#include <map>

class ObjectMapF
{
private:
    std::map<QString, double> mapDouble;
    std::map<QString, bool> mapBool;
    std::map<QString, QString> mapQString;

public:
    ObjectMapF();
    double getMapDouble(QString key) const;
    bool getMapBool(QString key) const;
    QString getMapQString(QString key) const;
    void setMap(double num, QString key);
    void setMap(bool tf, QString key);
    void setMap(QString value, QString key);
};

#endif // OBJECTMAPF_H
