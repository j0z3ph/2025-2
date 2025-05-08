from PySide6.QtWidgets import QMainWindow
from Lento_ui import *
from PySide6.QtCore import QThread, Signal
import sys
import time

class MiHilo(QThread):
    nuevo_valor = Signal(int)
    
    def run(self):
        for i in range(100):
            self.nuevo_valor.emit(i+1)
            time.sleep(1)

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        self.pushButton.clicked.connect(self.boton)
        self.Lilo = MiHilo()
        self.Lilo.nuevo_valor.connect(self.otra_funcion)
        
    def boton(self):
        self.Lilo.start()
     
    def otra_funcion(self, value):
        self.lcdNumber.display(value)
        self.progressBar.setValue(value)
    def lento(self):
        for i in range(100):
            self.lcdNumber.display(i+1)
            self.progressBar.setValue(i+1)
            time.sleep(1)
        
if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
