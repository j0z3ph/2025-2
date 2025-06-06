# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'imghsv.ui'
##
## Created by: Qt User Interface Compiler version 6.9.0
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QFrame, QGridLayout, QLabel,
    QMainWindow, QSizePolicy, QSlider, QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(610, 396)
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.gridLayout = QGridLayout(self.centralwidget)
        self.gridLayout.setObjectName(u"gridLayout")
        self.minSSlider = QSlider(self.centralwidget)
        self.minSSlider.setObjectName(u"minSSlider")
        self.minSSlider.setMaximum(255)
        self.minSSlider.setOrientation(Qt.Horizontal)
        self.minSSlider.setTickPosition(QSlider.TicksBelow)
        self.minSSlider.setTickInterval(10)

        self.gridLayout.addWidget(self.minSSlider, 2, 1, 1, 1)

        self.label_3 = QLabel(self.centralwidget)
        self.label_3.setObjectName(u"label_3")

        self.gridLayout.addWidget(self.label_3, 3, 0, 1, 1)

        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")

        self.gridLayout.addWidget(self.label, 1, 0, 1, 1)

        self.minVSlider = QSlider(self.centralwidget)
        self.minVSlider.setObjectName(u"minVSlider")
        self.minVSlider.setMaximum(255)
        self.minVSlider.setOrientation(Qt.Horizontal)
        self.minVSlider.setTickPosition(QSlider.TicksBelow)
        self.minVSlider.setTickInterval(10)

        self.gridLayout.addWidget(self.minVSlider, 3, 1, 1, 1)

        self.minHSlider = QSlider(self.centralwidget)
        self.minHSlider.setObjectName(u"minHSlider")
        self.minHSlider.setMinimum(0)
        self.minHSlider.setMaximum(179)
        self.minHSlider.setOrientation(Qt.Horizontal)
        self.minHSlider.setTickPosition(QSlider.TicksBelow)
        self.minHSlider.setTickInterval(10)

        self.gridLayout.addWidget(self.minHSlider, 1, 1, 1, 1)

        self.label_4 = QLabel(self.centralwidget)
        self.label_4.setObjectName(u"label_4")

        self.gridLayout.addWidget(self.label_4, 1, 2, 1, 1)

        self.label_2 = QLabel(self.centralwidget)
        self.label_2.setObjectName(u"label_2")

        self.gridLayout.addWidget(self.label_2, 2, 0, 1, 1)

        self.maxHSlider = QSlider(self.centralwidget)
        self.maxHSlider.setObjectName(u"maxHSlider")
        self.maxHSlider.setMaximum(179)
        self.maxHSlider.setValue(179)
        self.maxHSlider.setOrientation(Qt.Horizontal)
        self.maxHSlider.setTickPosition(QSlider.TicksBelow)
        self.maxHSlider.setTickInterval(10)

        self.gridLayout.addWidget(self.maxHSlider, 1, 3, 1, 1)

        self.lbl_image = QLabel(self.centralwidget)
        self.lbl_image.setObjectName(u"lbl_image")
        self.lbl_image.setFrameShape(QFrame.Box)

        self.gridLayout.addWidget(self.lbl_image, 0, 0, 1, 4)

        self.label_5 = QLabel(self.centralwidget)
        self.label_5.setObjectName(u"label_5")

        self.gridLayout.addWidget(self.label_5, 2, 2, 1, 1)

        self.label_6 = QLabel(self.centralwidget)
        self.label_6.setObjectName(u"label_6")

        self.gridLayout.addWidget(self.label_6, 3, 2, 1, 1)

        self.maxSSlider = QSlider(self.centralwidget)
        self.maxSSlider.setObjectName(u"maxSSlider")
        self.maxSSlider.setMaximum(255)
        self.maxSSlider.setValue(255)
        self.maxSSlider.setOrientation(Qt.Horizontal)
        self.maxSSlider.setTickPosition(QSlider.TicksBelow)

        self.gridLayout.addWidget(self.maxSSlider, 2, 3, 1, 1)

        self.maxVSlider = QSlider(self.centralwidget)
        self.maxVSlider.setObjectName(u"maxVSlider")
        self.maxVSlider.setMaximum(255)
        self.maxVSlider.setValue(255)
        self.maxVSlider.setOrientation(Qt.Horizontal)
        self.maxVSlider.setTickPosition(QSlider.TicksBelow)

        self.gridLayout.addWidget(self.maxVSlider, 3, 3, 1, 1)

        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"Imagen", None))
        self.label_3.setText(QCoreApplication.translate("MainWindow", u"Min Value", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"Min Hue", None))
        self.label_4.setText(QCoreApplication.translate("MainWindow", u"Max Hue", None))
        self.label_2.setText(QCoreApplication.translate("MainWindow", u"Min Saturation", None))
        self.lbl_image.setText("")
        self.label_5.setText(QCoreApplication.translate("MainWindow", u"Max Saturation", None))
        self.label_6.setText(QCoreApplication.translate("MainWindow", u"Max Value", None))
    # retranslateUi

