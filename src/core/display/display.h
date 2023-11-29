// display.h
#pragma once

#include <QObject>

class Display : public QObject
{
    Q_OBJECT

public:
    explicit Display(QObject *parent = nullptr);

    // Add any public functions or variables here

signals:
    // Add any signals here

public slots:
    // Add any public slots here

private:
    // Add any private functions or variables here
};
