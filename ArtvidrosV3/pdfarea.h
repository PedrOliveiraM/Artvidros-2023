#ifndef PDFAREA_H
#define PDFAREA_H
#include <QDialog>

namespace Ui {
class PDFarea;
}

class PDFarea : public QDialog
{
    Q_OBJECT

public:
    explicit PDFarea(QWidget *parent = nullptr,QString cliente = "" , QString data = "");
    ~PDFarea();

    QString cliente;
    QString cpf;
    QString telefone;
    QString endereco;
    QString data;

    QString getCliente() const;
    void setCliente(const QString &newCliente);

    QString getCpf() const;
    void setCpf(const QString &newCpf);

    QString getTelefone() const;
    void setTelefone(const QString &newTelefone);

    QString getEndereco() const;
    void setEndereco(const QString &newEndereco);

    QString getData() const;
    void setData(const QString &newData);

private slots:
    void on_pushButtonAdicionar_clicked();

    void on_pushButtonVoltar_clicked();

    void on_pushButtonLimpar_clicked();

private:
    Ui::PDFarea *ui;
};

#endif // PDFAREA_H
