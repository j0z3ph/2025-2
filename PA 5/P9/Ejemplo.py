from PySide6.QtWidgets import QMainWindow, QMessageBox
from PySide6.QtGui import QKeyEvent
from Ventanita_ui import *
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.comboBox.addItems(["Opcion 1", "TRex", "Vibora", "Gato"])
        self.comboBox.currentIndexChanged.connect(self.etc)
        
        self.actionSalir.triggered.connect(self.salir)
        
        self.tableWidget.setRowCount(3)
        self.tableWidget.setColumnCount(3)
        
        self.tableWidget.setHorizontalHeaderLabels(["No.", "Nombre", "Edad"])
        
        
        self.tableWidget.setItem(0,0,QTableWidgetItem("1"))
        self.tableWidget.setItem(0,1,QTableWidgetItem("Tony"))
        self.tableWidget.setItem(0,2,QTableWidgetItem("19"))
        
        self.tableWidget.setItem(1,0,QTableWidgetItem("2"))
        self.tableWidget.setItem(1,1,QTableWidgetItem("Diana"))
        self.tableWidget.setItem(1,2,QTableWidgetItem("20"))
        
        self.tableWidget.setItem(2,0,QTableWidgetItem("3"))
        self.tableWidget.setItem(2,1,QTableWidgetItem("Memo"))
        self.tableWidget.setItem(2,2,QTableWidgetItem("21"))
        
        self.listWidget.addItems(["Opcion 1", "TRex", "Vibora", "Gato"])
        
        self.listWidget.itemClicked.connect(self.pushado)
        
        self.pushButton.clicked.connect(self.getValores)
        
        
    def etc(self, value):
        print(value)
        
    def keyPressEvent(self, event: QKeyEvent):
        super().keyPressEvent(event)  
        print(event.key())  
    
    
    def getValores(self):
        QMessageBox.information(self, "Mensaje", self.lineEdit.text())
        print(self.lineEdit.text())
        punto = self.pos()
        self.move(punto.x()+55, punto.y())
        
    def pushado(self, value: QListWidgetItem):
        print(value.text())    
    
    def salir(self):
        self.close()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
