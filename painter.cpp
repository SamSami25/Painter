#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // Crear el objeto painter. Establecer el formulario con su lienzo
    QPainter pintor(this);

    // Establecer un color a su pincel
    pintor.setPen(Qt::blue);

    // Dibujar una linea
    pintor.drawLine(100, 100, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::red);

    // Establecer un tipo de tamaño y tipo de letra
    pintor.setFont(QFont("BubbleGum",30));

    // Dibujar un Texto
    pintor.drawText(245,130,"Picasso");

    // Crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo Pincel
    pintor.setPen(pincel);

    // Establecer una brocha
    pintor.setBrush(Qt::black);

    // Dibujar un rectangulo
    pintor.drawRect(450, 100, 100, 100);

    // Crear un nuevo color
    QColor miColor(255,221,129);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setColor(Qt::yellow);
    pincel2.setWidth(5);
    pincel2.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel
    pintor.setPen(pincel2);

    // Establecer el nuevo color
    pintor.setBrush(miColor);

    // Dibujar un circulo
    pintor.drawEllipse(650, 100, 100, 100);

    // Dibujos Hechos por Sami

    QColor SamiColor(170,63,229);

    // Crear un nuevo pincel
    QPen pincel3;
    pincel3.setColor(SamiColor);
    pincel3.setWidth(5);
    pincel3.setStyle(Qt::DotLine);

    // Establecer el nuevo pincel
    pintor.setPen(pincel3);

    // Establecer el nuevo color
    pintor.setBrush(SamiColor);

    // Dibujar un Arco
    pintor.drawArc(0,0,800, 900, 1000, 650);

    // Establecer un tipo de tamaño y tipo de letra
    pintor.setFont(QFont("Snowy Season",65));

    // Dibujar un Texto
    pintor.drawText(200,300,"Sami");

    // Pintar una imagen
    pintor.drawPixmap(0, 0, 100, 100, QPixmap(":/gatito.jpg"));

    // Dibujar un Cuadrado
    pintor.drawRect(700, 230, 700, 230);


    // Establecer un tipo de tamaño y tipo de letra
    pintor.setFont(QFont("Kalocsai Flowers",65));

    // Dibujar un Texto
    pintor.drawText(800,600,"Hola Mundo");


}

