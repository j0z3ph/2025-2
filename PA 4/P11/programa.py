from PySide6.QtWidgets import QMainWindow, QMessageBox
from untitled_ui import *
from PySide6.QtGui import QKeyEvent
from PySide6.QtCore import QThread, Signal
import sys
import time

class MiLilo(QThread):
    cuenta = Signal(int)
    def run(self):
        for i in range(101):
            self.cuenta.emit(i)
            time.sleep(1)


class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.pushButton.clicked.connect(self.lenta)
        self.mi_hilo = MiLilo()
        self.mi_hilo.cuenta.connect(self.muestra)
        
    def muestra(self, valor):
        self.lcdNumber.display(valor)
        self.progressBar.setValue(valor)
            
    def lenta(self):
        self.mi_hilo.start()
        #for i in range(101):
        #    self.lcdNumber.display(i)
        #    self.progressBar.setValue(i)
        #    time.sleep(1)
            
        
if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
