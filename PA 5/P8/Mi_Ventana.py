from PySide6.QtWidgets import QMainWindow
from Ventana_ui import *
import sys

class MainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self, *args, **kwargs):
        QMainWindow.__init__(self, *args, **kwargs)
        self.setupUi(self)
        
        self.Boton.clicked.connect(self.pusheado)
        
    def pusheado(self):
        print("Me pushearon T-T")

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
