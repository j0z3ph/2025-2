from PySide6.QtWidgets import QMainWindow
from Dial_ui import *
import simplecontroller as sc
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.dial.valueChanged.connect(self.brisho)
    
    def brisho(self, value):
        tarjeta.analogWrite(2, value/255.0)
        
if __name__ == "__main__":
    tarjeta = sc.Board("COM7")
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
