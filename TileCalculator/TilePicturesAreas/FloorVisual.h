#ifndef FLOORVISUALAREA_H
#define FLOORVISUALAREA_H

#include <QQuickItem>
#include <QQmlEngine>

class FloorVisualArea : public QQuickItem
{
    Q_OBJECT
public:
    FloorVisualArea();

signals:

public slots:
    void setup(double n, int o, QColor inColor, QColor outColor);

    void clear();
    void reset();
    void floor();

private:
    void prepareSizeVariables(int totalBoxes);
    int m_xBoxNum;
    double m_spacing;
    int m_borderWidth;

    double tSize();

    QList<QQuickItem*> m_wholeTiles;
    QQuickItem* m_finalTile = nullptr;
};

#endif // FLOORVISUALAREA_H
