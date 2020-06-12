# -*- coding: utf-8 -*-
#import math
import xlrd
import numpy as np
import matplotlib.pyplot as plt
import sklearn.neural_network as nn

NN = nn.MLPRegressor();
x = np.linspace(-3, 3, 100);
y = np.power(x, 5);

plt.plot(x, y, 'r-');
plt.grid();
plt.show();


def open_file(path):
    MAX_COUNT_ROWS = 260 # max count rows in on sheet
    MAX_ROWS = 270; # max value of rows in on sheet
    MAX_COLS = 50.;  # max value of cols in on sheet
    rb = xlrd.open_workbook('AZS_01.xls', formatting_info=True)
    sheet = rb.sheet_by_index(4)
    axis_x = np.arange(MAX_COUNT_ROWS);
    axis_y = np.zeros(shape=(1,1));
    #print(axis_x)
    #print(axis_y)
    
    for rownum in reversed(range(sheet.nrows)):
        #row = sheet.row_values(rownum)
        #print(row)

        #axis_x = sheet.cell(rownum,0) #№
        #axis_y = sheet.cell(rownum,1) #m3
        #axis_dy = sheet.cell(rownum,2)#dm3
        
        #print(axis_x.value, axis_y.value, axis_dy.value)
        cell = sheet.cell(rownum, 1)
        axis_y = np.insert(axis_y, 1, cell.value)
        #print(axis_y)
    
    fig = plt.figure()
    ax = fig.gca()
    ax.set_xticks(np.arange(0, MAX_ROWS, 20))
    ax.set_yticks(np.arange(0, MAX_COLS, (MAX_COLS/10)))
    plt.plot(axis_x, axis_y, 'b-');
    plt.grid()
    plt.show()

open_file("AZS_01.xls")


