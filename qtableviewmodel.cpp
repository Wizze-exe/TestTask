#include "qtableviewmodel.h"

QTableViewModel::QTableViewModel(QObject *parent)
    :QAbstractListModel(parent){
    values = new QList<ObjectMapF>();
}

int QTableViewModel::rowCount(const QModelIndex &) const{
    return values[0].size();
}

int QTableViewModel::columnCount(const QModelIndex &parent) const{
    return values->count();
}

QVariant QTableViewModel::data(const QModelIndex &index, int role) const{
    QVariant value;

    //Здесь должно происходить получение значения по ключу из Map объекта

    return value;
}

QVariant QTableViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return QString("Object 1");
        case 1:
            return QString("Object 2");
        case 2:
            return QString("Object 3");
        }
    }
    return QVariant();
}

void QTableViewModel::populate(QList<ObjectMapF> *newValues){
    int idx = this->values->count();
    this->beginInsertRows(QModelIndex(), 1, idx);
        this->values = newValues;
    endInsertRows();
}
