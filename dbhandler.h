#ifndef DBHANDLER_H
#define DBHANDLER_H
#include <QString>
#include <QVariant>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>


static const QString dbName = "myLog.db";

class DBHandler
{    
    QSqlDatabase db;
    QSharedPointer<QList<QString>> list = QSharedPointer<QList<QString>>(new QList<QString>());

public:
   DBHandler();
   bool connect();
   bool writeData(QString& output, long long elapsed_seconds, QList<QString>* books, int minWordLength);
   QSharedPointer<QList<QString>> readDbIndex();
};

#endif // DBHANDLER_H
