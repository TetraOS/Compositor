#include "compositor.h"

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

void Compositor::onSurfaceDestroyed(QWaylandSurface *surface) {
    qDebug() << "Surface destroyed: " << surface;
}

void Compositor::onSurfaceMapped(QWaylandSurface *surface) {
    qDebug() << "Surface mapped: " << surface;
}

void Compositor::onSurfaceUnmapped(QWaylandSurface *surface) {
    qDebug() << "Surface unmapped: " << surface;
}

void Compositor::onShellCreated(QWaylandShell *shell) {
    qDebug() << "Shell created: " << shell;
    connect(shell, &QWaylandShell::destroyed, this, &Compositor::onShellDestroyed);
    connect(shell, &QWaylandShell::shellSurfaceCreated, this, &Compositor::onShellSurfaceCreated);
}

void Compositor::onShellDestroyed(QWaylandShell *shell) {
    qDebug() << "Shell destroyed: " << shell;
}

void Compositor::onShellSurfaceCreated
