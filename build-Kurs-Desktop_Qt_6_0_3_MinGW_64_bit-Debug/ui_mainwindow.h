/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_History;
    QLabel *labelHistory;
    QListWidget *listWidget;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *word;
    QLabel *desc;
    QFrame *line_2;
    QLabel *examplesTitle;
    QLabel *examples;
    QLabel *translationTitle;
    QLabel *translation;
    QWidget *horizontalWidget_synant;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidget_Syn;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QListWidget *listWidget_Ant;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(399, 258);
        QPalette palette;
        QBrush brush(QColor(240, 240, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalLayout_History = new QVBoxLayout(verticalWidget);
        verticalLayout_History->setObjectName(QString::fromUtf8("verticalLayout_History"));
        labelHistory = new QLabel(verticalWidget);
        labelHistory->setObjectName(QString::fromUtf8("labelHistory"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        labelHistory->setFont(font);
        labelHistory->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_History->addWidget(labelHistory);

        listWidget = new QListWidget(verticalWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        verticalLayout_History->addWidget(listWidget);


        horizontalLayout->addWidget(verticalWidget);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setInputMask(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 257, 319));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        word = new QLabel(scrollAreaWidgetContents);
        word->setObjectName(QString::fromUtf8("word"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(24);
        word->setFont(font1);
        word->setAutoFillBackground(false);
        word->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(word);

        desc = new QLabel(scrollAreaWidgetContents);
        desc->setObjectName(QString::fromUtf8("desc"));
        QFont font2;
        font2.setPointSize(12);
        desc->setFont(font2);
        desc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(desc);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        examplesTitle = new QLabel(scrollAreaWidgetContents);
        examplesTitle->setObjectName(QString::fromUtf8("examplesTitle"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(12);
        font3.setBold(true);
        examplesTitle->setFont(font3);
        examplesTitle->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(examplesTitle);

        examples = new QLabel(scrollAreaWidgetContents);
        examples->setObjectName(QString::fromUtf8("examples"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(12);
        examples->setFont(font4);
        examples->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(examples);

        translationTitle = new QLabel(scrollAreaWidgetContents);
        translationTitle->setObjectName(QString::fromUtf8("translationTitle"));
        translationTitle->setFont(font3);
        translationTitle->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(translationTitle);

        translation = new QLabel(scrollAreaWidgetContents);
        translation->setObjectName(QString::fromUtf8("translation"));
        translation->setFont(font4);
        translation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(translation);

        horizontalWidget_synant = new QWidget(scrollAreaWidgetContents);
        horizontalWidget_synant->setObjectName(QString::fromUtf8("horizontalWidget_synant"));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_synant);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(horizontalWidget_synant);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        listWidget_Syn = new QListWidget(horizontalWidget_synant);
        listWidget_Syn->setObjectName(QString::fromUtf8("listWidget_Syn"));

        verticalLayout_3->addWidget(listWidget_Syn);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(horizontalWidget_synant);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        listWidget_Ant = new QListWidget(horizontalWidget_synant);
        listWidget_Ant->setObjectName(QString::fromUtf8("listWidget_Ant"));

        verticalLayout_4->addWidget(listWidget_Ant);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addWidget(horizontalWidget_synant);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 399, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelHistory->setText(QCoreApplication::translate("MainWindow", "Search history", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        word->setText(QCoreApplication::translate("MainWindow", "Thesaurus", nullptr));
        desc->setText(QCoreApplication::translate("MainWindow", "Everything you need for now", nullptr));
        examplesTitle->setText(QCoreApplication::translate("MainWindow", "Examples:", nullptr));
        examples->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Examples of <span style=\" font-weight:600;\">word </span>useage</p></body></html>", nullptr));
        translationTitle->setText(QCoreApplication::translate("MainWindow", "Translation", nullptr));
        translation->setText(QCoreApplication::translate("MainWindow", "Translation in russian", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Synonyms", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Antonyms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
