#ifndef IDATABASE_H
#define IDATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>

//单例模式
class iDataBase : public QObject
{
    Q_OBJECT
public:
        static iDataBase& getInstance()
        {
            static iDataBase    instance; // Guaranteed to be destroyed.
                                  // Instantiated on first use.
            return instance;
        }
        void initDatabase();
signals:
private:
        explicit iDataBase(QObject *parent = nullptr);
        iDataBase(iDataBase const&)               = delete;
        void operator=(iDataBase const&)  = delete;
        QSqlDatabase database;
};

#endif // IDATABASE_H