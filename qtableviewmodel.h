#ifndef QTABLEVIEWMODEL_H
#define QTABLEVIEWMODEL_H

#include "objectmapf.h"
#include <QModelIndex>

class QTableViewModel : public QAbstractListModel
{
private:
    QList<ObjectMapF> *values;

public:
    QTableViewModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    void populate(QList<ObjectMapF> *newValues);
};

#endif // QTABLEVIEWMODEL_H
