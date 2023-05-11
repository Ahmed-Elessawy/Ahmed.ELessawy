# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'DioCfg.ui'
##
## Created by: Qt User Interface Compiler version 5.15.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide2.QtCore import (QCoreApplication, QMetaObject, QObject, QPoint,
    QRect, QSize, QUrl, Qt, SIGNAL)
from PySide2.QtGui import (QBrush, QColor, QConicalGradient, QFont,
    QFontDatabase, QIcon, QLinearGradient, QPalette, QPainter, QPixmap,
    QRadialGradient)
from PySide2.QtWidgets import *
import sys

class Ui_Form(object):
    def setupUi(self, Form):
        if not Form.objectName():
            Form.setObjectName(u"Form")
        Form.resize(549, 404)
        self.Pin0_Dir = QGroupBox(Form)
        self.Pin0_Dir.setObjectName(u"Pin0_Dir")
        self.Pin0_Dir.setGeometry(QRect(50, 110, 161, 151))
        self.Output_R = QRadioButton(self.Pin0_Dir)
        self.Output_R.setObjectName(u"Output_R")
        self.Output_R.setGeometry(QRect(10, 20, 82, 17))
        self.Output_R.setChecked(True)
        self.Input_R = QRadioButton(self.Pin0_Dir)
        self.Input_R.setObjectName(u"Input_R")
        self.Input_R.setGeometry(QRect(10, 120, 82, 17))
        self.Output_Config = QGroupBox(Form)
        self.Output_Config.setObjectName(u"Output_Config")
        self.Output_Config.setGeometry(QRect(290, 70, 161, 101))
        self.High_R = QRadioButton(self.Output_Config)
        self.High_R.setObjectName(u"High_R")
        self.High_R.setGeometry(QRect(10, 20, 82, 17))
        self.Low_R = QRadioButton(self.Output_Config)
        self.Low_R.setObjectName(u"Low_R")
        self.Low_R.setGeometry(QRect(10, 70, 82, 17))
        self.Input_Config = QGroupBox(Form)
        self.Input_Config.setObjectName(u"Input_Config")
        self.Input_Config.setGeometry(QRect(290, 200, 161, 101))
        self.Input_Config.setCheckable(False)
        self.Pull_Up_R = QRadioButton(self.Input_Config)
        self.Pull_Up_R.setObjectName(u"Pull_Up_R")
        self.Pull_Up_R.setGeometry(QRect(10, 20, 82, 21))
        self.High_Imp_R = QRadioButton(self.Input_Config)
        self.High_Imp_R.setObjectName(u"High_Imp_R")
        self.High_Imp_R.setGeometry(QRect(10, 70, 82, 17))
        self.Out_Path = QLineEdit(Form)
        self.Out_Path.setObjectName(u"Out_Path")
        self.Out_Path.setGeometry(QRect(40, 320, 231, 20))
        self.Gen = QPushButton(Form)
        self.Gen.setObjectName(u"Gen")
        self.Gen.setGeometry(QRect(330, 320, 81, 23))
        self.PinSelect = QComboBox(Form)
        self.PinSelect.addItem("PIN0")
        self.PinSelect.addItem("PIN1")
        self.PinSelect.addItem("PIN2")
        self.PinSelect.addItem("PIN3")
        self.PinSelect.addItem("PIN4")
        self.PinSelect.addItem("PIN5")
        self.PinSelect.addItem("PIN6")
        self.PinSelect.addItem("PIN7")
        self.PinSelect.setObjectName(u"PinSelect")
        self.PinSelect.setGeometry(QRect(330, 30, 69, 22))
        self.PortSelect = QComboBox(Form)
        self.PortSelect.addItem("PORTA")
        self.PortSelect.addItem("PORTB")
        self.PortSelect.addItem("PORTC")
        self.PortSelect.addItem("PORTD")
        self.PortSelect.setObjectName(u"comboBox_2")
        self.PortSelect.setGeometry(QRect(70, 30, 69, 22))
        self.label_2 = QLabel(Form)
        self.label_2.setObjectName(u"label_2")
        self.label_2.setGeometry(QRect(80, 10, 61, 16))
        self.label = QLabel(Form)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(340, 10, 47, 13))
        self.Load = QPushButton(Form)
        self.Load.setObjectName(u"Load")
        self.Load.setGeometry(QRect(330, 360, 81, 23))
        self.Save = QPushButton(Form)
        self.Save.setObjectName(u"Save")
        self.Save.setGeometry(QRect(450, 360, 81, 23))

        self.retranslateUi(Form)



        
        QObject.connect(self.Output_R, SIGNAL("clicked(bool)"), self.Input_Config.setDisabled )
        QObject.connect(self.Input_R, SIGNAL("clicked(bool)"), self.Output_Config.setDisabled )
        QObject.connect(self.Output_R, SIGNAL("clicked(bool)"), self.Output_Config.setEnabled )
        QObject.connect(self.Input_R, SIGNAL("clicked(bool)"), self.Input_Config.setEnabled )
        self.Gen.clicked.connect(self.Generate)
        self.Save.clicked.connect(self.SaveButton)
        self.Load.clicked.connect(self.LoadButton)
        self.PortSelect.highlighted.connect(self.UpdateConfig)
        self.PinSelect.highlighted.connect(self.UpdateConfig)
        self.PortSelect.currentIndexChanged.connect(self.Update)
        self.PinSelect.currentIndexChanged.connect(self.Update)
        
        
        
        
        
        

        QMetaObject.connectSlotsByName(Form)
    # setupUi

    def retranslateUi(self, Form):
        Form.setWindowTitle(QCoreApplication.translate("Form", u"Form", None))
        self.Pin0_Dir.setTitle(QCoreApplication.translate("Form", u"Mode", None))
        self.Output_R.setText(QCoreApplication.translate("Form", u"Output", None))
        self.Input_R.setText(QCoreApplication.translate("Form", u"Input", None))
        self.Output_Config.setTitle(QCoreApplication.translate("Form", u"Output_Config", None))
        self.High_R.setText(QCoreApplication.translate("Form", u"High", None))
        self.Low_R.setText(QCoreApplication.translate("Form", u"Low", None))
        self.Input_Config.setTitle(QCoreApplication.translate("Form", u"Input_Config", None))
        self.Pull_Up_R.setText(QCoreApplication.translate("Form", u"PulUp", None))
        self.High_Imp_R.setText(QCoreApplication.translate("Form", u"High_Imp", None))
        self.Gen.setText(QCoreApplication.translate("Form", u"Generate", None))
        self.PinSelect.setItemText(0, QCoreApplication.translate("Form", u"PIN0", None))
        self.PinSelect.setItemText(1, QCoreApplication.translate("Form", u"PIN1", None))
        self.PinSelect.setItemText(2, QCoreApplication.translate("Form", u"PIN2", None))
        self.PinSelect.setItemText(3, QCoreApplication.translate("Form", u"PIN3", None))
        self.PinSelect.setItemText(4, QCoreApplication.translate("Form", u"PIN4", None))
        self.PinSelect.setItemText(5, QCoreApplication.translate("Form", u"PIN5", None))
        self.PinSelect.setItemText(6, QCoreApplication.translate("Form", u"PIN6", None))
        self.PinSelect.setItemText(7, QCoreApplication.translate("Form", u"PIN7", None))

        self.PortSelect.setItemText(0, QCoreApplication.translate("Form", u"PORTA", None))
        self.PortSelect.setItemText(1, QCoreApplication.translate("Form", u"PORTB", None))
        self.PortSelect.setItemText(2, QCoreApplication.translate("Form", u"PORTC", None))
        self.PortSelect.setItemText(3, QCoreApplication.translate("Form", u"PORTD", None))

        self.label_2.setText(QCoreApplication.translate("Form", u"Select port", None))
        self.label.setText(QCoreApplication.translate("Form", u"Select pin", None))
        self.Load.setText(QCoreApplication.translate("Form", u"Load", None))
        self.Save.setText(QCoreApplication.translate("Form", u"Save", None))
    # retranslateUi
    
    #dictionaries that have configurations saved for every pins 
    PORTA={"PIN0":"DIO_PULL_UP\n","PIN1":"DIO_PULL_UP\n","PIN2":"DIO_PULL_UP\n","PIN3":"DIO_PULL_UP\n","PIN4":"DIO_PULL_UP\n","PIN5":"DIO_PULL_UP\n","PIN6":"DIO_PULL_UP\n","PIN7":"DIO_PULL_UP\n"}
    PORTB={"PIN0":"DIO_PULL_UP\n","PIN1":"DIO_PULL_UP\n","PIN2":"DIO_PULL_UP\n","PIN3":"DIO_PULL_UP\n","PIN4":"DIO_PULL_UP\n","PIN5":"DIO_PULL_UP\n","PIN6":"DIO_PULL_UP\n","PIN7":"DIO_PULL_UP\n"}
    PORTC={"PIN0":"DIO_PULL_UP\n","PIN1":"DIO_PULL_UP\n","PIN2":"DIO_PULL_UP\n","PIN3":"DIO_PULL_UP\n","PIN4":"DIO_PULL_UP\n","PIN5":"DIO_PULL_UP\n","PIN6":"DIO_PULL_UP\n","PIN7":"DIO_PULL_UP\n"}
    PORTD={"PIN0":"DIO_PULL_UP\n","PIN1":"DIO_PULL_UP\n","PIN2":"DIO_PULL_UP\n","PIN3":"DIO_PULL_UP\n","PIN4":"DIO_PULL_UP\n","PIN5":"DIO_PULL_UP\n","PIN6":"DIO_PULL_UP\n","PIN7":"DIO_PULL_UP\n"}
    PortDic = {"PORTA": ["DDRA", PORTA], "PORTB": ["DDRB", PORTB], "PORTC": ["DDRC", PORTC], "PORTD": ["DDRD", PORTD]}
    #writing configuartion in files function
    def Generate(self):
      self.UpdateConfig()
      if self.Out_Path.text() != '':
        DIO_H_Handler = open(self.Out_Path.text() + '\DIO.h', 'w')
        DIO_Handler = open(self.Out_Path.text() + '\DIO_config.h', 'w')
      else:
        DIO_Handler = open('DIO_config.h', 'w')
        DIO_H_Handler = open('DIO.h', 'w')
      
      DIO_H_Handler.write("#ifndef DIO_H\n")
      DIO_H_Handler.write("#define DIO_H\n\n\n")
      DIO_H_Handler.write("#define DIO_IN                   0\n")
      DIO_H_Handler.write("#define DIO_OUT                  1\n\n")
      DIO_H_Handler.write("#define DIO_PULL_UP              1\n")
      DIO_H_Handler.write("#define DIO_HIGH_IMPEDANCE       0\n\n")
      DIO_H_Handler.write("#define DIO_HIGH                 1\n")
      DIO_H_Handler.write("#define DIO_LOW                  0\n\n")
      DIO_H_Handler.write("#endif\n")
      DIO_H_Handler.close()
      
      DIO_Handler.write("#ifndef DIO_CFG_H\n")
      DIO_Handler.write("#define DIO_CFG_H\n\n\n")
      for port in PortDic:
        for pin in PortDic[port][1]:
          if PortDic[port][1][pin].strip() == "DIO_HIGH" or PortDic[port][1][pin].strip() == "DIO_LOW":
            DIO_Handler.write('#define DIO_'+PortDic[port][0]+'_'+pin+'      '+"DIO_OUT\n")
          else:
            DIO_Handler.write('#define DIO_'+PortDic[port][0]+'_'+pin+'      '+"DIO_IN\n")
      
      DIO_Handler.write('\n\n\n')
      
      for port in PortDic:
        for pin in PortDic[port][1]:
            DIO_Handler.write('#define DIO_'+port+'_'+pin+'     '+PortDic[port][1][pin])
      
      DIO_Handler.write("\n\n#endif\n")
      DIO_Handler.close()
      return

    #writing saved confgiauration after loading it 
    def SaveButton(self):
      self.UpdateConfig()
      if self.Out_Path.text() != '':
        ConfigFileName = self.Out_Path.text()
      else:
        ConfigFileName = 'DefaultConfig.txt'
      SaveFile = open(ConfigFileName, 'w')
      SaveFile.write("#ifndef DIO_CFG_H\n")
      SaveFile.write("#define DIO_CFG_H\n\n\n")
      
      for port in PortDic:
        for pin in PortDic[port][1]:
          if PortDic[port][1][pin].strip() == "DIO_HIGH" or PortDic[port][1][pin].strip() == "DIO_LOW":
            SaveFile.write('#define DIO_'+PortDic[port][0]+'_'+pin+'      '+"DIO_OUT\n")
          else:
            SaveFile.write('#define DIO_'+PortDic[port][0]+'_'+pin+'      '+"DIO_IN\n")
            
      SaveFile.write('\n\n\n\n\n\n')      
      
      for port in PortDic:
        for pin in PortDic[port][1]:
          SaveFile.write('#define DIO_'+port+'_'+pin+'     '+PortDic[port][1][pin])
      SaveFile.write("\n\n#endif\n")    
      SaveFile.close()
      return

    #parsing configuartion and saving it in cinfiguaration dictionaries
    def LoadButton(self):
      if self.Out_Path.text() != '':
        ConfigFileName = self.Out_Path.text()
      else:
        return
      LoadFile = open(ConfigFileName, 'r')
      for line in LoadFile:
        configList = list(line.split(" "))
        if len(configList) == 8:
            ll=list(configList[1].split("_"))
            if ll[1]=='PORTA' or ll[1]=='PORTB' or ll[1]=='PORTC' or ll[1]=='PORTD':
                PortDic[ll[1]][1][ll[2]] = configList[7]
      self.Update()
      LoadFile.close()
      return
      
    #checking which configuartion is selected for each button
    def Update(self):
      if (PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()].strip() == "DIO_HIGH"):
        self.Output_R.setChecked(True)
        self.Input_Config.setDisabled(True)
        self.Output_Config.setEnabled(True)
        self.High_R.setChecked(True)
      
      elif (PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()].strip() == "DIO_LOW"):
        self.Output_R.setChecked(True)
        self.Input_Config.setDisabled(True)
        self.Output_Config.setEnabled(True)
        self.Low_R.setChecked(True)
        
      elif (PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()].strip() == "DIO_HIGH_IMPEDANCE"):
        self.Input_R.setChecked(True)
        self.Input_Config.setEnabled(True)
        self.Output_Config.setDisabled(True)
        self.High_Imp_R.setChecked(True)
      
      else:
        self.Input_R.setChecked(True)
        self.Input_Config.setEnabled(True)
        self.Output_Config.setDisabled(True)
        self.Pull_Up_R.setChecked(True)
      return

    #updating configuartion in dictionaries based on changes made in update function
    def UpdateConfig(self): 
      if self.Output_R.isChecked():
        if self.High_R.isChecked():
          PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()] = "DIO_HIGH\n"
        else:
          PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()] = "DIO_LOW\n"

      else:
        if self.Pull_Up_R.isChecked():
          PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()] = "DIO_PULL_UP\n"
        else:
          PortDic[self.PortSelect.currentText()][1][self.PinSelect.currentText()] = "DIO_HIGH_IMPEDANCE\n"
      return









app = QApplication(sys.argv)
Widget = QWidget()
Form = Ui_Form()
Form.setupUi(Widget)
Widget.show()
sys.exit(app.exec_())