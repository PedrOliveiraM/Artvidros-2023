#include "adicionaisref.h"
#include "ui_adicionaisref.h"

AdicionaisRef::AdicionaisRef(QWidget *parent, const std::list<AdicionaisOBJ> &lista , QString tipo ,QString kitAluminio , float altura ) :
    QDialog(parent),
    ui(new Ui::AdicionaisRef)
{
    ui->setupUi(this);
    this->setWindowTitle("ArtVidros");
    ui->lineEditAltura->setInputMask("X.XX");
    ui->lineEditLargura->setInputMask("X.XX");
    ui->lineEditComprimento->setInputMask("X.XX");
    setAltura(altura);
    setKitalum(kitAluminio);

    ui->pushButtonTodosOsAluminios->setEnabled(false);
    if(tipo.contains("2") || tipo.contains("4")){
        ui->pushButtonTodosOsAluminios->setEnabled(true);
        QMessageBox::information(this,"Tela de Adicionais","Inclua todos os alumínios clicando no botão 'Todos Os Aluminios' ! ","Ok");
    }

    QSpinBox* spinBoxes[] = {
        ui->spinBoxVidro,
        ui->spinBox_Aluminio,
        ui->spinBox_fechadura,
        ui->spinBox_kit,
        ui->spinBox_puxador,
        ui->spinBox_trinco,
        ui->spinBox_Rodana
    };

    for (QSpinBox* spinBox : spinBoxes) {
        spinBox->setMinimum(1);
        spinBox->setValue(1);
    }

    QString array[] = {"temperado","aluminio","kitboxcanto","kitboxfrontal","kitaluminio","kitpia", "kitabrir","bascula" ,"pivotante","fechadura", "puxador", "trinco"
    ,"rodana" ,"pelicula"};
    QSqlQuery query;

    for (const QString &tipo : array) {
        if (query.exec("SELECT * FROM product WHERE type = '" + tipo + "' ORDER BY name_product ASC")) {
            while (query.next()) {
                QString value = query.value(1).toString();  // Suponho que o valor desejado esteja na primeira coluna
                if (tipo == "temperado") {
                    ui->comboBoxVidros->addItem(value);

                } else if (tipo == "aluminio" || tipo == "kitaluminio") {
                    ui->comboBoxAluminio->addItem(value);

                } else if (tipo == "kitabrir" || tipo == "kitboxfrontal"|| tipo == "kitpia" || tipo == "kitboxcanto"|| tipo == "bascula"|| tipo == "pivotante" ) {
                    ui->comboBoxKit->addItem(value);

                } else if (tipo == "fechadura") {
                    ui->comboBoxFechadura->addItem(value);

                } else if (tipo == "puxador") {
                    ui->comboBoxPuxador->addItem(value);

                } else if (tipo == "trinco") {
                    ui->comboBoxTrinco->addItem(value);

                } else if (tipo == "pelicula") {
                    ui->comboBoxPelicula->addItem(value);

                } else if (tipo == "rodana") {
                    ui->comboBoxRodana->addItem(value);
                }
            }
        } else {
            qDebug() << "Erro ao executar a consulta para tipo ";
        }
    }


    // MOSTRAR A LISTA

    listaDeAdicionais = lista;
    tipoTela = tipo;
    mostrarAdicoes();

}

AdicionaisRef::~AdicionaisRef()
{
    delete ui;
}

QString AdicionaisRef::getKitalum() const
{
    return kitalum;
}

void AdicionaisRef::setKitalum(const QString &newKitalum)
{
    kitalum = newKitalum;
}

float AdicionaisRef::getAltura() const
{
    return altura;
}

void AdicionaisRef::setAltura(float newAltura)
{
    altura = newAltura;
}

QString AdicionaisRef::getTipoTela() const
{
    return tipoTela;
}

void AdicionaisRef::setTipoTela(const QString &newTipoTela)
{
    tipoTela = newTipoTela;
}


std::list<AdicionaisOBJ> AdicionaisRef::getListaDeAdicionais() const
{
    return listaDeAdicionais;
}

void AdicionaisRef::setListaDeAdicionais(const std::list<AdicionaisOBJ> &newListaDeAdicionais)
{
    listaDeAdicionais = newListaDeAdicionais;
}



QString AdicionaisRef::getLucro() const
{
    return lucro;
}

void AdicionaisRef::setLucro(const QString &newLucro)
{
    lucro = newLucro;
}

QString AdicionaisRef::getPrice() const
{
    return price;
}

void AdicionaisRef::setPrice(const QString &newPrice)
{
    price = newPrice;
}

// PEGAR VALORES
float AdicionaisRef::getSumPrice()
{
    float soma = 0.0; // Inicialize a variável soma com 0.0
    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        soma += adicional.getPrice().toFloat();
    }
    return soma;
}

float AdicionaisRef::getSumProfit()
{
    float soma = 0.0; // Inicialize a variável soma com 0.0
    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        soma += adicional.getProfit().toFloat();
    }
    return soma;

}
//    ************** MOSTRAR ADIÇOES **************
void AdicionaisRef::mostrarAdicoes()
{
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(6); // Adicionando uma coluna extra para os botões

    for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
        int linha = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(linha);

        // Adicionando dados às células
        QTableWidgetItem *itemCodigo = new QTableWidgetItem(adicional.getId());
        QTableWidgetItem *itemProduto = new QTableWidgetItem(adicional.getName());
        QTableWidgetItem *itemQuant = new QTableWidgetItem(adicional.getQuant());
        QTableWidgetItem *itemPreco = new QTableWidgetItem(adicional.getPrice());
        QTableWidgetItem *itemLucro = new QTableWidgetItem(adicional.getProfit());

        // Adicionando widgets de botões à célula da coluna "Ações"
        QPushButton *btnRemover = new QPushButton;
        btnRemover->setIcon(QIcon(":/imagens/excluir.png"));
        connect(btnRemover, &QPushButton::clicked, this, &AdicionaisRef::removerLinha);

        ui->tableWidget->setItem(linha, 0, itemCodigo);
        ui->tableWidget->setItem(linha, 1, itemProduto);
        ui->tableWidget->setItem(linha, 2, itemQuant);
        ui->tableWidget->setItem(linha, 3, itemPreco);
        ui->tableWidget->setItem(linha, 4, itemLucro);
        ui->tableWidget->setCellWidget(linha, 5, btnRemover);
        ui->tableWidget->setRowHeight(linha, 20);
        linha++;
    }

    QStringList rotulo = {"Código", "Produto", "Quant", "Valor", "Lucro", ""};
    ui->tableWidget->setColumnWidth(0, 70);  // Coluna 0
    ui->tableWidget->setColumnWidth(1, 170);  // Coluna 1
    ui->tableWidget->setColumnWidth(2, 95);   // Coluna 2
    ui->tableWidget->setColumnWidth(3, 100);  // Coluna 3
    ui->tableWidget->setColumnWidth(4, 100);  // Coluna 4
    ui->tableWidget->setColumnWidth(5, 60);   // Coluna 5 (botões)
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setHorizontalHeaderLabels(rotulo);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:orange}");
    ui->tableWidget->setStyleSheet("QTableView QHeaderView::section { font-weight: bold; }");
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    ui->label_price->setText(QString::number(getSumPrice()));
    ui->label_profit->setText(QString::number(getSumProfit()));

}
// ************************************************
void AdicionaisRef::on_pushButtonADDvidro_clicked()
{
    //adicionar vidro

    sqlDataBaseControl BD;
    AdicionaisOBJ aux;

    QString id = aux.geraID();
    float largura = ui->lineEditLargura->text().toFloat();
    float altura = ui->lineEditAltura->text().toFloat();
    QString quant = ui->spinBoxVidro->text();
    QString metro = "";
    int quantInt = quant.toInt();
    float price; // vai buscar
    float profit;// vai buscar
    float priceAux; // vai buscar
    float profitAux;// vai buscar
        // vidro - sem peliucla


    if (ui->comboBoxVidros->currentIndex() != 0 && ui->comboBoxPelicula->currentIndex() == 0){

        QString vidro = ui->comboBoxVidros->currentText();
        QString tipo = "temperado";

        price = BD.buscarNoBDprice(vidro,tipo);
        price = aux.calcularPreco(price,aux.metrage(largura,altura),quantInt);
        profit = BD.buscarNoBDprofit(vidro,tipo);
        profit = aux.calcularPreco(profit,aux.metrage(largura,altura),quantInt);

        metro = QString::number(largura)+ "x" + QString::number(altura) + "m " + vidro;

        // pelicula - sem vidro
    }else if (ui->comboBoxPelicula->currentIndex() != 0 && ui->comboBoxVidros->currentIndex() == 0){

        QString pelicula = ui->comboBoxPelicula->currentText();
        QString tipo = "pelicula";

        price = BD.buscarNoBDprice(pelicula,tipo);
        price = aux.calcularPreco(price,aux.metrage(largura,altura),quantInt);
        profit = BD.buscarNoBDprofit(pelicula,tipo);
        profit = aux.calcularPreco(profit,aux.metrage(largura,altura),quantInt);

        metro = QString::number(largura)+ "x" + QString::number(altura) + "m " + pelicula;

    } else {
        QString vidro = ui->comboBoxVidros->currentText();
        QString tipoV = "temperado";
        priceAux = BD.buscarNoBDprice(vidro,tipoV);
        price = aux.calcularPreco(priceAux,aux.metrage(largura,altura),quantInt);

        profitAux = BD.buscarNoBDprofit(vidro,tipoV);
        profit = aux.calcularPreco(profitAux,aux.metrage(largura,altura),quantInt);

        //pelicula
        QString pelicula = ui->comboBoxPelicula->currentText();
        QString tipoP = "pelicula";
        priceAux = BD.buscarNoBDprice(pelicula,tipoP);
        price += aux.calcularPreco(priceAux,aux.metrage(largura,altura),quantInt);

        profitAux = BD.buscarNoBDprofit(pelicula,tipoP);
        profit += aux.calcularPreco(profitAux,aux.metrage(largura,altura),quantInt);

        metro = QString::number(largura)+ "x" + QString::number(altura) + "m " + vidro + " com " + pelicula;
    }

    QString QSprice = QString::number(price); // vai buscar
    QString QSprofit = QString::number(profit);// vai buscar

    AdicionaisOBJ adicional(id,metro,quant,QSprice,QSprofit);

    listaDeAdicionais.push_back(adicional);

    mostrarAdicoes();
}

void AdicionaisRef::on_pushButtonADDaluminios_clicked()
{
    sqlDataBaseControl BD;
    AdicionaisOBJ aux;
    // pegar atributos
    QString comp = ui->lineEditComprimento->text();
    QString id = aux.geraID();
    QString nome = ui->comboBoxAluminio->currentText();
    QString prod = comp + "m "+ nome;
    QString tipo = "";
    int quant = ui->spinBox_Aluminio->text().toInt();
    QString QSquant = QString::number(quant);
    float comprimento = ui->lineEditComprimento->text().toFloat();
    // buscar no bd
    float price = BD.buscarNoBDprice(nome); // vai buscar
    float profit = BD.buscarNoBDprofit(nome);// vai buscar
    qDebug() << "Preco: "<<price;
    qDebug() << "Profit: "<<price;
    qDebug() << "Comprimento: "<<aux.comprimento(comprimento);

    price = (quant * (aux.comprimento(comprimento) * price));
    profit = (quant * (aux.comprimento(comprimento) * profit));

    qDebug() << "Preco + comp: "<<price;
    qDebug() << "Profit + comp: "<<price;

    QString QSprice = QString::number(price);
    QString QSprofit = QString::number(profit);
    // adicionar na list
    AdicionaisOBJ adicional(id,prod,QSquant,QSprice,QSprofit);
    listaDeAdicionais.push_back(adicional);
    // mostrar
    mostrarAdicoes();
}

void AdicionaisRef::on_pushButtonADDkit_clicked()
{
    sqlDataBaseControl BD;
    AdicionaisOBJ aux;
    // pegar atributos
    QString id = aux.geraID();
    QString nome = ui->comboBoxKit->currentText();

    int quant = ui->spinBox_kit->text().toInt();
    QString QSquant = QString::number(quant);

    // buscar no bd
    float price = BD.buscarNoBDprice(nome); // vai buscar
    float profit = BD.buscarNoBDprofit(nome);// vai buscar
    price = (quant * price);
    profit = (quant * profit);

    QString QSprice = QString::number(price);
    QString QSprofit = QString::number(profit);
    // adicionar na list
    AdicionaisOBJ adicional(id,nome,QSquant,QSprice,QSprofit);
    listaDeAdicionais.push_back(adicional);
    // mostrar
    mostrarAdicoes();

}

void AdicionaisRef::on_pushButtonADDfechadura_clicked()
{
    sqlDataBaseControl BD;
    AdicionaisOBJ aux;
    // pegar atributos
    QString id = aux.geraID();
    QString nome =ui->comboBoxFechadura->currentText();
    QString tipo = "fechadura";
    int quant = ui->spinBox_fechadura->text().toInt();
    QString QSquant = QString::number(quant);

    // buscar no bd
    float price = BD.buscarNoBDprice(nome,tipo); // vai buscar
    float profit = BD.buscarNoBDprofit(nome,tipo);// vai buscar
    price = (quant * price);
    profit = (quant * profit);

    QString QSprice = QString::number(price);
    QString QSprofit = QString::number(profit);
    // adicionar na list
    AdicionaisOBJ adicional(id,nome,QSquant,QSprice,QSprofit);
    listaDeAdicionais.push_back(adicional);
    // mostrar
    mostrarAdicoes();
}


void AdicionaisRef::on_pushButtonADDpuxador_clicked()
{
    sqlDataBaseControl BD;
    AdicionaisOBJ aux;
    // pegar atributos
    QString id = aux.geraID();
    QString nome =ui->comboBoxPuxador->currentText();
    QString tipo = "puxador";
    int quant = ui->spinBox_puxador->text().toInt();
    QString QSquant = QString::number(quant);

    // buscar no bd
    float price = BD.buscarNoBDprice(nome,tipo); // vai buscar
    float profit = BD.buscarNoBDprofit(nome,tipo);// vai buscar
    price = (quant * price);
    profit = (quant * profit);

    QString QSprice = QString::number(price);
    QString QSprofit = QString::number(profit);
    // adicionar na list
    AdicionaisOBJ adicional(id,nome,QSquant,QSprice,QSprofit);
    listaDeAdicionais.push_back(adicional);
    // mostrar
    mostrarAdicoes();
}


void AdicionaisRef::on_pushButtonADDtrinco_clicked()
{
    sqlDataBaseControl BD;
    AdicionaisOBJ aux;
    // pegar atributos
    QString id = aux.geraID();
    QString nome =ui->comboBoxTrinco->currentText();
    QString tipo = "trinco";
    int quant = ui->spinBox_trinco->text().toInt();
    QString QSquant = QString::number(quant);

    // buscar no bd
    float price = BD.buscarNoBDprice(nome,tipo); // vai buscar
    float profit = BD.buscarNoBDprofit(nome,tipo);// vai buscar
    price = (quant * price);
    profit = (quant * profit);

    QString QSprice = QString::number(price);
    QString QSprofit = QString::number(profit);
    // adicionar na list
    AdicionaisOBJ adicional(id,nome,QSquant,QSprice,QSprofit);
    listaDeAdicionais.push_back(adicional);
    // mostrar
    mostrarAdicoes();
}


// ************************************************
void AdicionaisRef::on_pushButtonIncluirNoOrcamentoRef_clicked()
{
    if (tipoTela != "Main"){
        price = ui->label_price->text();
        lucro = ui->label_profit->text();
        close();
    }else {
        QString produtos  ="";
        float price = 0.0;
        float profit = 0.0;

        for (const AdicionaisOBJ& adicional : listaDeAdicionais) {
            produtos += adicional.getName();
        }

        price = getSumPrice();
        profit = getSumProfit();

        QString QSprice = QString::number(price);
        QString QSprofit = QString::number(profit);

        telaSalvar = new DialogSalvar(this,produtos,QSprice,QSprofit);
        telaSalvar->exec();
    }
}


void AdicionaisRef::on_pushButtonADDrodana_clicked()
{
    sqlDataBaseControl BD;
    AdicionaisOBJ aux;
    // pegar atributos
    QString id = aux.geraID();
    QString nome =ui->comboBoxRodana->currentText();
    QString tipo = "rodana";
    int quant = ui->spinBox_Rodana->text().toInt();
    QString QSquant = QString::number(quant);

    // buscar no bd
    float price = BD.buscarNoBDprice(nome,tipo); // vai buscar
    float profit = BD.buscarNoBDprofit(nome,tipo);// vai buscar
    price = (quant * price);
    profit = (quant * profit);

    QString QSprice = QString::number(price);
    QString QSprofit = QString::number(profit);
    // adicionar na list
    AdicionaisOBJ adicional(id,nome,QSquant,QSprice,QSprofit);
    listaDeAdicionais.push_back(adicional);
    // mostrar
    mostrarAdicoes();
}


void AdicionaisRef::on_pushButtonAreaDePrecos_clicked()
{
    telaDePrecos = new DialogAreaPrecos;
    telaDePrecos->exec();
}

void AdicionaisRef::removerLinha()
{
    // Obtém a linha selecionada
    int linhaSelecionada = ui->tableWidget->currentRow();

    // Verifica se uma linha está selecionada
    if (linhaSelecionada >= 0)
    {
        // Obtém o código na primeira coluna da linha selecionada
        QString codigoParaRemover = ui->tableWidget->item(linhaSelecionada, 0)->text();

        // Remove o item da listaDeAdicionais com base no código
        auto it = std::remove_if(listaDeAdicionais.begin(), listaDeAdicionais.end(), [&](const AdicionaisOBJ& objeto) {
            return objeto.getId() == codigoParaRemover;
        });

        // Remove o item da listaDeAdicionais
        listaDeAdicionais.erase(it, listaDeAdicionais.end());

        // Remove a linha da tableWidget
        ui->tableWidget->removeRow(linhaSelecionada);
    }
    mostrarAdicoes();
}

void AdicionaisRef::on_pushButtonTodosOsAluminios_clicked()
{
    float altura = getAltura();
    int altu = static_cast<int>(altura * 100);

    while (altu % 5 != 0) {
        altu += 1;
    }

    float alturaCorrigida = altu / 100.0;

    //buscar no BD
    QString kitAluminio = getKitalum();

    QString pu = "PU 8";
    QString pu2 = "PU 10";
    QString vp = "VP 8";
    QString cad = "CAD 8";


    if (kitAluminio.contains("10")) {
        pu = "PU 10";
        pu2 = "PU 12";
        vp = "VP 10";
        cad = "CAD 10";
    }
    qDebug()<<"tipoTela :" << tipoTela;
    if (tipoTela.contains("2")){
        sqlDataBaseControl aux;
        float V_PU = aux.buscarNoBDprice(pu, "aluminio") * alturaCorrigida;
        float V_PU2 = aux.buscarNoBDprice(pu2, "aluminio") * alturaCorrigida;
        float V_VP = aux.buscarNoBDprice(vp, "aluminio") * alturaCorrigida;

        qDebug()<<"*** PRICE ***";
        qDebug()<<"V_PU"<<V_PU;
        qDebug()<<"V_PU2"<<V_PU2;
        qDebug()<<"V_VP"<<V_VP;

        qDebug()<<"\n";

        float L_PU = aux.buscarNoBDprofit(pu, "aluminio") * alturaCorrigida;
        float L_PU2 = aux.buscarNoBDprofit(pu2, "aluminio")* alturaCorrigida;
        float L_VP = aux.buscarNoBDprofit(vp, "aluminio")* alturaCorrigida;

        qDebug()<<"*** PROFIT ***";
        qDebug()<<"L_PU"<<L_PU;
        qDebug()<<"L_PU2"<<L_PU2;
        qDebug()<<"L_VP"<<L_VP;

        AdicionaisOBJ aux2;
        AdicionaisOBJ adicionalPU(aux2.geraID(), QString::number(alturaCorrigida)+ " m de "+ pu, "1", QString::number(V_PU), QString::number(L_PU));
        AdicionaisOBJ adicionalPU2(aux2.geraID(), QString::number(alturaCorrigida)+ " m de " + pu2, "1", QString::number(V_PU2), QString::number(L_PU2));
        AdicionaisOBJ adicionalVP(aux2.geraID(), QString::number(alturaCorrigida) + " m de " + vp, "1", QString::number(V_VP), QString::number(L_VP));

        listaDeAdicionais.push_back(adicionalPU);
        listaDeAdicionais.push_back(adicionalPU2);
        listaDeAdicionais.push_back(adicionalVP);

    } else {
        sqlDataBaseControl aux;
        float V_PU = aux.buscarNoBDprice(pu, "aluminio") * alturaCorrigida;
        float V_VP = aux.buscarNoBDprice(vp, "aluminio") * alturaCorrigida;
        float V_CAD = aux.buscarNoBDprice(cad, "aluminio") * alturaCorrigida;

        qDebug()<<"*** PRICE ***";
        qDebug()<<"V_PU"<<V_PU;
        qDebug()<<"V_VP"<<V_VP;
        qDebug()<<"V_CAD"<<V_CAD;

        float L_PU = aux.buscarNoBDprofit(pu, "aluminio") * alturaCorrigida;

        float L_VP = aux.buscarNoBDprofit(vp, "aluminio")* alturaCorrigida;
        float L_CAD = aux.buscarNoBDprice(cad, "aluminio") * alturaCorrigida;
        qDebug()<<"*** PROFIT ***";
        qDebug()<<"L_PU"<<L_PU;
        qDebug()<<"L_VP"<<L_VP;
        qDebug()<<"L_CAD"<<L_CAD;

        AdicionaisOBJ aux2;
        AdicionaisOBJ adicionalPU(aux2.geraID(), QString::number(alturaCorrigida)+ " m de " + pu, "2", QString::number(2*V_PU), QString::number(2*L_PU));
        AdicionaisOBJ adicionalVP(aux2.geraID(), QString::number(alturaCorrigida)+ " m de "+ vp, "2", QString::number(2*V_VP), QString::number(2*L_VP));
        AdicionaisOBJ adicionalCAD(aux2.geraID(), QString::number(alturaCorrigida)+ " m de " + cad, "1", QString::number(V_CAD), QString::number(L_CAD));

        listaDeAdicionais.push_back(adicionalPU);
        listaDeAdicionais.push_back(adicionalVP);
        listaDeAdicionais.push_back(adicionalCAD);
    }
    mostrarAdicoes();
}

