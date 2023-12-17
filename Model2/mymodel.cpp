#include "mymodel.h"

MyModel::MyModel(QObject *parent) : QObject(parent)
{

    QTimer *timer = new QTimer() ;

    connect(timer , SIGNAL(timeout()) , this , SLOT(update()));
    timer->start(1000);

}

QString MyModel::name() const
{
    return m_name ;
}

void MyModel::setName(QString name)
{
    if (m_name != name){

        m_name = name ;
        emit nameChanged();
    };
}

void MyModel::update()
{
  m_name +=QTime::currentTime().hour();
  emit nameChanged();
}
