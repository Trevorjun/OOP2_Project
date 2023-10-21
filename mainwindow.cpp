#include "functions.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"

int turn=0, current_turn=3;
user_score usr1;
user_score usr2;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowIcon(QIcon(":/icon/images/icon.png"));
    setStyleSheet("background-color:blck");
    QMainWindow::setWindowFlags( Qt::WindowTitleHint |  Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint );
    ui->setupUi(this);
    ui -> oneonebutton -> setVisible(false);
    ui -> twoonebutton -> setVisible(false);
    ui -> threeonebutton -> setVisible(false);
    ui -> fouronebutton -> setVisible(false);
    ui -> fiveonebutton -> setVisible(false);
    ui -> sixonebutton -> setVisible(false);
    ui -> choiceonebutton -> setVisible(false);
    ui -> fkindonebutton -> setVisible(false);
    ui -> fullhouseonebutton -> setVisible(false);
    ui -> sstraightonebutton -> setVisible(false);
    ui -> lstraightonebutton -> setVisible(false);
    ui -> yahtzeeonebutton -> setVisible(false);
    ui -> totalone -> setVisible(false);
    ui -> onetwobutton -> setVisible(false);
    ui -> twotwobutton -> setVisible(false);
    ui -> threetwobutton -> setVisible(false);
    ui -> fourtwobutton -> setVisible(false);
    ui -> fivetwobutton -> setVisible(false);
    ui -> sixtwobutton -> setVisible(false);
    ui -> choicetwobutton -> setVisible(false);
    ui -> fkindtwobutton -> setVisible(false);
    ui -> fullhousetwobutton -> setVisible(false);
    ui -> sstraighttwobutton -> setVisible(false);
    ui -> lstraighttwobutton -> setVisible(false);
    ui -> yahtzeetwobutton -> setVisible(false);
    ui -> totaltwo -> setVisible(false);
    ui -> backbutton -> setVisible(false);
    ui -> reroll -> setVisible(false);
    ui -> keep1 -> setVisible(false);
    ui -> keep2 -> setVisible(false);
    ui -> keep3 -> setVisible(false);
    ui -> keep4 -> setVisible(false);
    ui -> keep5 -> setVisible(false);
    ui -> keep1b -> setVisible(false);
    ui -> keep2b -> setVisible(false);
    ui -> keep3b -> setVisible(false);
    ui -> keep4b -> setVisible(false);
    ui -> keep5b -> setVisible(false);
    ui -> backbutton -> setVisible(true);
    ui -> creditone -> setText("<a href=\"https://www.pngwing.com/en/free-png-sptdk/\">Program Title icon</a>");
    ui -> creditone -> setTextFormat(Qt::RichText);
    ui -> creditone -> setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui -> creditone -> setOpenExternalLinks(true);
    ui -> creditone -> setVisible(false);
    ui -> backbutton -> setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startbutton_clicked()
{
    bool flag = true;
    ui->gamestart->setVisible(false);
    ui->startbutton->setVisible(false);
    ui->howtobutton->setVisible(false);
    ui->creditsbutton->setVisible(false);
    ui->exitbutton->setVisible(false);
    ui -> oneonebutton -> setVisible(true);
    ui -> twoonebutton -> setVisible(true);
    ui -> threeonebutton -> setVisible(true);
    ui -> fouronebutton -> setVisible(true);
    ui -> fiveonebutton -> setVisible(true);
    ui -> sixonebutton -> setVisible(true);
    ui -> choiceonebutton -> setVisible(true);
    ui -> fkindonebutton -> setVisible(true);
    ui -> fullhouseonebutton -> setVisible(true);
    ui -> sstraightonebutton -> setVisible(true);
    ui -> lstraightonebutton -> setVisible(true);
    ui -> yahtzeeonebutton -> setVisible(true);
    ui -> totalone -> setVisible(true);
    ui -> totaltwo -> setVisible(true);
    ui -> reroll -> setVisible(true);
    ui -> keep1 -> setVisible(true);
    ui -> keep2 -> setVisible(true);
    ui -> keep3 -> setVisible(true);
    ui -> keep4 -> setVisible(true);
    ui -> keep5 -> setVisible(true);
    ui -> keep1b -> setVisible(true);
    ui -> keep2b -> setVisible(true);
    ui -> keep3b -> setVisible(true);
    ui -> keep4b -> setVisible(true);
    ui -> keep5b -> setVisible(true);

    if (turn == 27)
        final_score();

    turn++;
    if (turn % 2 == 1)
        ui->playingplayer->setText("Player 1 is in control...");
    else if (turn % 2 == 0)
        ui->playingplayer->setText("Player 2 is in control...");

    init_dice();

    ui -> lefttime -> setText("3 left");
    ui -> category -> setText("← Choose category");
}

void MainWindow::on_exitbutton_clicked()
{
    QCoreApplication::exit(0);
}


void MainWindow::on_creditsbutton_clicked()
{
    ui->playingplayer->setText("이 프로그램에 사용한 Open Source / Copyleft Source");
    ui->gamestart->setVisible(false);
    ui->startbutton->setVisible(false);
    ui->howtobutton->setVisible(false);
    ui->creditsbutton->setVisible(false);
    ui->exitbutton->setVisible(false);
    ui -> creditone -> setVisible(true);
    ui -> backbutton -> setVisible(true);
}

void MainWindow::on_backbutton_clicked()
{
    ui->gamestart->setVisible(true);
    ui->startbutton->setVisible(true);
    ui->howtobutton->setVisible(true);
    ui->creditsbutton->setVisible(true);
    ui->exitbutton->setVisible(true);
    ui->playingplayer->setText("");
    ui -> backbutton -> setVisible(false);
    ui -> creditone -> setVisible(false);
}

void MainWindow::on_oneonebutton_clicked()
{
    ui -> oneonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
    turn++;
    if (turn % 2 == 1)
        ui->playingplayer->setText("Player 1 is in control...");
    else if (turn % 2 == 0)
        ui->playingplayer->setText("Player 2 is in control...");
}


void MainWindow::on_twoonebutton_clicked()
{
    ui -> twoonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_threeonebutton_clicked()
{
    ui -> threeonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fouronebutton_clicked()
{
    ui -> fouronebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fiveonebutton_clicked()
{
    ui -> fiveonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_sixonebutton_clicked()
{
    ui -> sixonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_choiceonebutton_clicked()
{
    ui -> choiceonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fkindonebutton_clicked()
{
    ui -> fkindonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fullhouseonebutton_clicked()
{
    ui -> fullhouseonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_sstraightonebutton_clicked()
{
    ui -> sstraightonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_lstraightonebutton_clicked()
{
    ui -> lstraightonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_yahtzeeonebutton_clicked()
{
    ui -> yahtzeeonebutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_onetwobutton_clicked()
{
    ui -> onetwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_twotwobutton_clicked()
{
    ui -> twotwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_threetwobutton_clicked()
{
    ui -> threetwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fourtwobutton_clicked()
{
    ui -> fourtwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fivetwobutton_clicked()
{
    ui -> fivetwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_sixtwobutton_clicked()
{
    ui -> sixtwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_choicetwobutton_clicked()
{
    ui -> choicetwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fkindtwobutton_clicked()
{
    ui -> fkindtwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_fullhousetwobutton_clicked()
{
    ui -> fullhousetwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_sstraighttwobutton_clicked()
{
    ui -> sstraighttwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_lstraighttwobutton_clicked()
{
    ui -> lstraighttwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}


void MainWindow::on_yahtzeetwobutton_clicked()
{
    ui -> yahtzeetwobutton -> setVisible(false);
    ui -> oneone -> setText("0");
}

void MainWindow::init_dice()
{
    int dice[6];

    for (int i=0; i < 5; i++)
        dice[i] = dice_gen();

    QPixmap pix_one(":/dice/images/one.png");
    QPixmap pix_two(":/dice/images/two.png");
    QPixmap pix_three(":/dice/images/three.png");
    QPixmap pix_four(":/dice/images/four.png");
    QPixmap pix_five(":/dice/images/five.png");
    QPixmap pix_six(":/dice/images/six.png");
    if (dice[0] == 1)
        ui -> diceone -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[0] == 2)
        ui -> diceone -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[0] == 3)
        ui -> diceone -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[0] == 4)
        ui -> diceone -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[0] == 5)
        ui -> diceone -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[0] == 6)
        ui -> diceone -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
    if (dice[1] == 1)
        ui -> dicetwo -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[1] == 2)
        ui -> dicetwo -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[1] == 3)
        ui -> dicetwo -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[1] == 4)
        ui -> dicetwo -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[1] == 5)
        ui -> dicetwo -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[1] == 6)
        ui -> dicetwo -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));

    if (dice[2] == 1)
        ui -> dicethree -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[2] == 2)
        ui -> dicethree -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[2] == 3)
        ui -> dicethree -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[2] == 4)
        ui -> dicethree -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[2] == 5)
        ui -> dicethree -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[2] == 6)
        ui -> dicethree -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));

    if (dice[3] == 1)
        ui -> dicefour -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[3] == 2)
        ui -> dicefour -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[3] == 3)
        ui -> dicefour -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[3] == 4)
        ui -> dicefour -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[3] == 5)
        ui -> dicefour -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[3] == 6)
        ui -> dicefour -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));

    if (dice[4] == 1)
        ui -> dicefive -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[4] == 2)
        ui -> dicefive -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[4] == 3)
        ui -> dicefive -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[4] == 4)
        ui -> dicefive -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[4] == 5)
        ui -> dicefive -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
    else if (dice[4] == 6)
        ui -> dicefive -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
    for (int i=0; i<5; i++)
    {
        if (turn % 2 == 1)
            usr1.current_dice[i] = dice[i];
        else
            usr2.current_dice[i] = dice[i];
    }
}

void MainWindow::refresh_dice()
{
    int i, dice[5];

    if (turn % 2 == 1)
    {
        for (i=0; i < 5; i++)
        {
            if (usr1.check_keep[i] != "1")
                dice[i] = dice_gen();
            else
                dice[i] = usr1.current_dice[i];
        }
    }
    else
    {
        for (i=0; i < 5; i++)
        {
            if (usr2.check_keep[i] != "1")
                dice[i] = dice_gen();
            else
                dice[i] = usr2.current_dice[i];
        }
    }

    QPixmap pix_one(":/dice/images/one.png");
    QPixmap pix_two(":/dice/images/two.png");
    QPixmap pix_three(":/dice/images/three.png");
    QPixmap pix_four(":/dice/images/four.png");
    QPixmap pix_five(":/dice/images/five.png");
    QPixmap pix_six(":/dice/images/six.png");

    i = -1;
    while (dice[++i])
    {
        if (dice[i] == 0)
            continue;
        else
        {
            switch(i)
            {
            case 0:
                if (dice[0] == 1)
                    ui -> diceone -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[0] == 2)
                    ui -> diceone -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[0] == 3)
                    ui -> diceone -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[0] == 4)
                    ui -> diceone -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[0] == 5)
                    ui -> diceone -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[0] == 6)
                    ui -> diceone -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
                break;
            case 1:
                if (dice[1] == 1)
                    ui -> dicetwo -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[1] == 2)
                    ui -> dicetwo -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[1] == 3)
                    ui -> dicetwo -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[1] == 4)
                    ui -> dicetwo -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[1] == 5)
                    ui -> dicetwo -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[1] == 6)
                    ui -> dicetwo -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
                break;
            case 2:
                if (dice[2] == 1)
                    ui -> dicethree -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[2] == 2)
                    ui -> dicethree -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[2] == 3)
                    ui -> dicethree -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[2] == 4)
                    ui -> dicethree -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[2] == 5)
                    ui -> dicethree -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[2] == 6)
                    ui -> dicethree -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
                break;
            case 3:
                if (dice[3] == 1)
                    ui -> dicefour -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[3] == 2)
                    ui -> dicefour -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[3] == 3)
                    ui -> dicefour -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[3] == 4)
                    ui -> dicefour -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[3] == 5)
                    ui -> dicefour -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[3] == 6)
                    ui -> dicefour -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
                break;
            case 4:
                if (dice[4] == 1)
                    ui -> dicefive -> setPixmap(pix_one.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[4] == 2)
                    ui -> dicefive -> setPixmap(pix_two.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[4] == 3)
                    ui -> dicefive -> setPixmap(pix_three.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[4] == 4)
                    ui -> dicefive -> setPixmap(pix_four.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[4] == 5)
                    ui -> dicefive -> setPixmap(pix_five.scaled(50, 50, Qt::KeepAspectRatio));
                else if (dice[4] == 6)
                    ui -> dicefive -> setPixmap(pix_six.scaled(50, 50, Qt::KeepAspectRatio));
                break;
            }
        }
    }
    for (i=0; i<5; i++)
    {
        if (turn % 2 == 1)
            usr1.current_dice[i] = dice[i];
        else
            usr2.current_dice[i] = dice[i];
    }
}

void MainWindow::on_reroll_clicked()
{
    if (current_turn > 0)
    {
        string temp;
        refresh_dice();
        current_turn--;
        temp = to_string(current_turn) + " left";
        QString lefttime_qstr = QString::fromStdString(temp);
        ui -> lefttime -> setText(lefttime_qstr);
    }
}

void MainWindow::on_keep1b_clicked()
{
    ui -> keep1 -> setText("keep");
    ui -> keep1b -> setVisible(false);
    if (turn % 2 == 1)
    {
        usr1.check_keep[0] = "1";
    }
    else
    {
        usr2.check_keep[0] = "1";
    }
}


void MainWindow::on_keep2b_clicked()
{
    ui -> keep2 -> setText("keep");
    ui -> keep2b -> setVisible(false);
    if (turn % 2 == 1)
    {
        usr1.check_keep[1] = "1";
    }
    else
    {
        usr2.check_keep[1] = "1";
    }
}


void MainWindow::on_keep3b_clicked()
{
    ui -> keep3 -> setText("keep");
    ui -> keep3b -> setVisible(false);
    if (turn % 2 == 1)
    {
        usr1.check_keep[2] = "1";
    }
    else
    {
        usr2.check_keep[2] = "1";
    }
}


void MainWindow::on_keep4b_clicked()
{
    ui -> keep4 -> setText("keep");
    ui -> keep4b -> setVisible(false);
    if (turn % 2 == 1)
    {
        usr1.check_keep[3] = "1";
    }
    else
    {
        usr2.check_keep[3] = "1";
    }
}


void MainWindow::on_keep5b_clicked()
{
    ui -> keep5 -> setText("keep");
    ui -> keep5b -> setVisible(false);
    if (turn % 2 == 1)
    {
        usr1.check_keep[4] = "1";
    }
    else
    {
        usr2.check_keep[4] = "1";
    }
}

