#ifndef RETINA_H
#define RETINA_H

#include <QCamera>
#include <QQuickPaintedItem>
#include <videosurface.h>

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Retina : public QQuickPaintedItem
{
    Q_OBJECT

public:
    Retina();
    ~Retina();

    void startCamera();
    void calculateFiringRate();
    double temporalRF(const double tau);
    double gaborField(int x, int y);


    // QQuickPaintedItem interface
    virtual void paint(QPainter *painter);

public slots:
    void receivedImage();

private:
    QCamera* m_camera;
    VideoSurface m_videoSurface;
    QImage m_image;

    vector< vector <double>> m_stim;
    vector< vector <double>> m_recField;

    int m_nPixelsX;
    int m_nPixelsY;

    void makeReceptiveField();

};


#endif // RETINA_H
