#include "explorer.h"

Explorer::Explorer():
m_title("")
{
}

int Explorer::columnCount(const QModelIndex &parent) const
{
    return 1;
}

QVariant Explorer::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
            return m_title;

    return QVariant();
}

void Explorer::setTitle(QString title)
{
    m_title = title;
}

