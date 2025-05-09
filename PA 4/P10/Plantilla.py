from PySide6.QtWidgets import QMainWindow, QMessageBox
from Dial_ui import *
from PySide6.QtGui import QKeyEvent
import simplecontroller as sc
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.dial.valueChanged.connect(self.cambiado)
    def cambiado(self, valor):
        esp32.analogWrite(2,valor/255.0)
        #print(valor)
        
if __name__ == "__main__":
    esp32 = sc.Board("COM7")
    
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
