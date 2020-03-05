#ifndef EXPLORER_H
#define EXPLORER_H

#include <QFileSystemModel>

class Explorer : public QFileSystemModel
{

public:
    Explorer();
    int columnCount(const QModelIndex &parent) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    void setTitle(QString title);
private:
    QString m_title;
};

#endif // EXPLORER_H
