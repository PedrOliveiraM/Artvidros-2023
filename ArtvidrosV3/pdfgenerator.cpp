#include "pdfgenerator.h"
// No arquivo pdfgenerator.cpp
PDFGenerator::PDFGenerator(const QString& filePath)
    : outputFilePath(filePath)
{
    pdfPrinter.setOutputFormat(QPrinter::PdfFormat);
    pdfPrinter.setOutputFileName(outputFilePath);
    painter.begin(&pdfPrinter);
    textCursor = QTextCursor(&textDocument);
}

PDFGenerator::~PDFGenerator()
{
    painter.end();
}

void PDFGenerator::addProduct(const QString& productName, double price)
{
    // Adicionar o produto ao documento
    textCursor.insertText(productName + ": $" + QString::number(price));
    textCursor.insertBlock();  // Nova linha para o próximo produto
}

void PDFGenerator::setTotal(double total)
{
    // Adicionar o total ao documento
    textCursor.insertText("Total: $" + QString::number(total));
    textCursor.insertBlock();  // Nova linha após o total
}

void PDFGenerator::addBackgroundImage(const QImage& backgroundImage)
{
    // Desenhar a imagem de fundo no documento
    painter.drawImage(0, 0, backgroundImage);
}

void PDFGenerator::addProductToImage(const QString& productName, int x, int y)
{
    QFont font;
    font.setPointSize(14);
    font.setBold(true);
    painter.setFont(font);

    int maxCharacter = 40;

    // Limitar o número de caracteres
    QString displayText = productName.left(maxCharacter);

    // Adicionar "..." se o texto for cortado
    if (productName.length() > maxCharacter)
    {
        displayText += "...";
    }

    // Desenhar o produto na imagem nas coordenadas especificadas
    painter.drawText(x, y, displayText);
}


void PDFGenerator::savePDF()
{
    // Finalizar o documento e salvar o PDF
    //pdfPrinter.newPage();
    painter.end();
}
