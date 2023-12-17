#ifndef MYMODEL_H
#define MYMODEL_H

#include <QObject>
#include <QTime>
#include <QTimer>
#include <QDebug>
#include <QQmlContext>


class MyModel : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

public:
    explicit MyModel(QObject *parent = nullptr);

    QString name () const ;

    void setName(QString name ) ;

signals:

    void nameChanged() ;

public slots :

    void update() ;

private:

    QString m_name = "Soheyll" ;

};

#endif // MYMODEL_H
