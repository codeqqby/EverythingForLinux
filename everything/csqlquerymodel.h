#ifndef CSQLQUERYMODEL_H
#define CSQLQUERYMODEL_H

#include <QtSql/QSqlQueryModel>

enum {
    COLUMN_NAME,
    COLUMN_PATH,
    COLUMN_SIZE,
    COLUMN_MTIME,
    COLUMN_NUM
};

class CSqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit CSqlQueryModel(QObject *parent = 0);
    QVariant data ( const QModelIndex & item, int role = Qt::DisplayRole ) const ;
    void setQuery ( const QString & query, const QSqlDatabase & db = QSqlDatabase());

signals:

public slots:
    void setHoverRow(int row);

private:
    int m_hoverRow;

};

#endif // CSQLQUERYMODEL_H