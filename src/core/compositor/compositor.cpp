#include "compositor.h"
#include <QDebug>
#include <QWaylandCompositor>
#include <QWaylandOutput>
#include <QWaylandSeat>
#include <QWaylandShellSurface>
#include <QWaylandSurface>
#include <QWaylandXdgShell>
#include <QWaylandXdgShellSurface>
#include <QWaylandXdgShellV6>
#include <QWaylandXdgShellV6Surface>

Compositor::Compositor(QObject *parent) : QObject(parent) {
    m_compositor = new QWaylandCompositor(this);
    m_compositor->setOutput(new QWaylandOutput(m_compositor));
    m_compositor->setSeat(new QWaylandSeat(m_compositor));

    connect(m_compositor, &QWaylandCompositor::surfaceCreated, this, &Compositor::onSurfaceCreated);
    connect(m_compositor, &QWaylandCompositor::shellCreated, this, &Compositor::onShellCreated);
}

void Compositor::onSurfaceCreated(QWaylandSurface *surface) {
    qDebug() << "Surface created: " << surface;
    connect(surface, &QWaylandSurface::destroyed, this, &Compositor::onSurfaceDestroyed);
    connect(surface, &QWaylandSurface::mapped, this, &Compositor::onSurfaceMapped);
    connect(surface, &QWaylandSurface::unmapped, this, &Compositor::onSurfaceUnmapped);
}

void Compositor::onShellCreated(QWaylandShell *shell) {
    qDebug() << "Shell created: " << shell;
    connect(shell, &QWaylandShell::destroyed, this, &Compositor::onShellDestroyed);
    connect(shell, &QWaylandShell::shellSurfaceCreated, this, &Compositor::onShellSurfaceCreated);
}

void Compositor::onSurfaceDestroyed(QWaylandSurface *surface) {
    qDebug() << "Surface destroyed: " << surface;
}

void Compositor::onSurfaceMapped(QWaylandSurface *surface) {
    qDebug() << "Surface mapped: " << surface;
}

void Compositor::onSurfaceUnmapped(QWaylandSurface *surface) {
    qDebug() << "Surface unmapped: " << surface;
}

void Compositor::onShellDestroyed(QWaylandShell *shell) {
    qDebug() << "Shell destroyed: " << shell;
}

void Compositor::onShellSurfaceCreated(QWaylandShellSurface *shellSurface) {
    qDebug() << "Shell surface created: " << shellSurface;
    connect(shellSurface, &QWaylandShellSurface::destroyed, this, &Compositor::onShellSurfaceDestroyed);
    connect(shellSurface, &QWaylandShellSurface::mapped, this, &Compositor::onShellSurfaceMapped);
    connect(shellSurface, &QWaylandShellSurface::unmapped, this, &Compositor::onShellSurfaceUnmapped);
}

void Compositor::onShellSurfaceDestroyed(QWaylandShellSurface *shellSurface) {
    qDebug() << "Shell surface destroyed: " << shellSurface;
}

void Compositor::onShellSurfaceMapped(QWaylandShellSurface *shellSurface) {
    qDebug() << "Shell surface mapped: " << shellSurface;
}

void Compositor::onShellSurfaceUnmapped(QWaylandShellSurface *shellSurface) {
    qDebug() << "Shell surface unmapped: " << shellSurface;
}
