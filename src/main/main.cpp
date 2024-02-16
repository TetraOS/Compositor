#include <QApplication>
#include "compositor.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    Compositor compositor;
    return app.exec();
}
