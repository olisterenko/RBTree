
#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    graphicsScene = new QGraphicsScene(this);
    ui->graphicsView->setScene(graphicsScene);
}

Widget::~Widget()
{
    delete ui;
    delete graphicsScene;
}

void Widget::on_pushButton_insert_clicked()
{
    graphicsScene->clear();
    graphicsScene->addItem(new GraphicsNode(0, 0, Color::BLACK, ui->spinBox_insert->value()));
}

