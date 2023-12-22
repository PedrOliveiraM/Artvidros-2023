#ifndef PDFGENERATOR_H
#define PDFGENERATOR_H
#include <QString>
#include <QFile>
#include <QPdfWriter>
#include <QTextDocument>
#include <QTextCursor>
#include <QImage>
#include <QPrinter>
#include <QPainter>
class PDFGenerator
{
public:
    PDFGenerator(const QString& filePath);
    ~PDFGenerator();

    void addProduct(const QString& productName, double price);
    void setTotal(double total);
    void addBackgroundImage(const QImage& backgroundImage);
    void addProductToImage(const QString& productName, int x, int y);
    void savePDF();

private:
    QString outputFilePath;
    QPrinter pdfPrinter;
    QPainter painter;
    QTextDocument textDocument;
    QTextCursor textCursor;

};

#endif // PDFGENERATOR_H
