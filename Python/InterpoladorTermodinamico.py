# -*- coding: utf-8 -*-
"""
Created on Wed Oct 16 11:41:10 2019

@author: Jose Luis Hdz. C.
"""
import PySimpleGUI as sg
import numpy as np

layout = [
        [sg.Text('Interpolador: Ingresa los valores para realizar el cálculo')],
        [sg.Input(key='dato1',size=[15,1]),sg.Input(key='dato4',size=[15,1])],
        [sg.Input(key='dato2',size=[15,1]),sg.Input(key='resultado',size=[15,1], disabled=True),sg.Button('Calcular',size=(10,1))],
        [sg.Input(key='dato3',size=[15,1]),sg.Input(key='dato5',size=[15,1]),sg.Button('Limpiar',size=(10,1))]
        
        ]

ventana = sg.Window(title='Interpolador by JLHC',
                  layout=layout
                  ).Finalize()
while True:
    event,values=ventana.Read()
    print('###',event,'###')
    print(values)
    
    
    
    if event is None:
        ventana.Close()
        break
    elif event is 'Calcular':
        dat1 = float(values['dato1'])
        dat2 = float(values['dato2'])
        dat3 = float(values['dato3'])
        dat4 = float(values['dato4'])
        dat5 = float(values['dato5'])
        res = (dat2-dat1) / (dat3-dat1)
        print(res)
        res *= (dat5-dat4)
        res += dat4
        print(res)
        ventana.FindElement('resultado').Update(res)
    elif event is 'Limpiar':
        ventana.FindElement('dato1').Update('')
        ventana.FindElement('dato2').Update('')
        ventana.FindElement('dato3').Update('')
        ventana.FindElement('dato4').Update('')
        ventana.FindElement('dato5').Update('')
        ventana.FindElement('resultado').Update('')
        
        
        