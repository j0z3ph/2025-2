from PySide6.QtWidgets import QMainWindow, QMessageBox
from Ventanita_ui import *
from PySide6.QtGui import QKeyEvent
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.pushButton.clicked.connect(self.tocado)
        self.listWidget.addItems(["Cualquier cosa", "Tigre", "Vibora", "TRex", "Bronto"])
        self.listWidget.itemClicked.connect(self.seleccionado)
        
        
        self.tableWidget.setRowCount(2)
        self.tableWidget.setColumnCount(3)
        self.tableWidget.setHorizontalHeaderLabels(["ID", "Name", "Age"])
        
        self.tableWidget.setItem(0,0, QTableWidgetItem("1"))
        self.tableWidget.setItem(0,1, QTableWidgetItem("Alanbrito"))
        self.tableWidget.setItem(0,2, QTableWidgetItem("21"))
        
        self.tableWidget.setItem(1,0, QTableWidgetItem("2"))
        self.tableWidget.setItem(1,1, QTableWidgetItem("Dante"))
        self.tableWidget.setItem(1,2, QTableWidgetItem("20"))
        
        self.comboBox.addItems(["Cualquier cosa", "Tigre", "Vibora", "TRex", "Bronto"])
        
        
        self.actionSalir.triggered.connect(self.salir)
    
    def keyPressEvent(self, event: QKeyEvent):
        super().keyPressEvent(event)
        print(event.key())
        if event.key() == 65:
            p = self.pos()
            self.move(p.x()+10, p.y())
        
    def salir(self):
        self.close()
        
    def seleccionado(self, value: QListWidgetItem):
        print(value.text())
        
    def tocado(self):
        QMessageBox.information(self,"Titulo", self.lineEdit.text())
        #print(self.lineEdit.text())


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
