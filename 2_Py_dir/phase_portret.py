import numpy as np
from scipy import signal
import matplotlib.pyplot as plt

#-----Input data of signal-------#
fd0 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_154.220450.txt', 'r')
fd1 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_159.000000.txt', 'r')
fd2 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_165.000000.txt', 'r')
fd3 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_163.000000.txt', 'r')
fd4 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_170.000000.txt', 'r')
fd5 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_180.000000.txt', 'r')
fd6 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_120.000000.txt', 'r')
fd7 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_100.000000.txt', 'r')
fd8 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_140.000000.txt', 'r')
fd9 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_137.000000.txt', 'r')
fd10 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_147.000000.txt', 'r')
fd11 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_144.000000.txt', 'r')
fd12 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_148.000000.txt', 'r')
fd13 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_149.000000.txt', 'r')


#fd2 = open('C:/Users/user/Downloads/Telegram Desktop/MM_TF_1.txt', 'r')
inputSignal_0 = fd0.readlines()
inputSignal_1 = fd1.readlines()
inputSignal_2 = fd2.readlines()
inputSignal_3 = fd3.readlines()
inputSignal_4 = fd4.readlines()
inputSignal_5 = fd5.readlines()
inputSignal_6 = fd6.readlines()
inputSignal_7 = fd7.readlines()
inputSignal_8 = fd8.readlines()
inputSignal_9 = fd9.readlines()
inputSignal_10 = fd10.readlines()
inputSignal_11 = fd11.readlines()
inputSignal_12 = fd12.readlines()
inputSignal_13 = fd13.readlines()



fd0.close()
fd1.close()
fd2.close()
fd3.close()
fd4.close()
fd5.close()
fd6.close()
fd7.close()
fd8.close()
fd9.close()
fd10.close()
fd11.close()
fd12.close()
fd13.close()


inputSignal_0 = [float(i) for i in inputSignal_0]
inputSignal_1 = [float(i) for i in inputSignal_1]
inputSignal_2 = [float(i) for i in inputSignal_2]
inputSignal_3 = [float(i) for i in inputSignal_3]
inputSignal_4 = [float(i) for i in inputSignal_4]
inputSignal_5 = [float(i) for i in inputSignal_5]
inputSignal_6 = [float(i) for i in inputSignal_6]
inputSignal_7 = [float(i) for i in inputSignal_7]
inputSignal_8 = [float(i) for i in inputSignal_8]
inputSignal_9 = [float(i) for i in inputSignal_9]
inputSignal_10 = [float(i) for i in inputSignal_10]
inputSignal_11 = [float(i) for i in inputSignal_11]
inputSignal_12 = [float(i) for i in inputSignal_12]
inputSignal_13 = [float(i) for i in inputSignal_13]



inputSignal_dot = [];
#print(len(inputSignal))
#print(type(len(inputSignal)))

for i in range(1, len(inputSignal)):
    inputSignal_dot.append((inputSignal[i]-inputSignal[i-1])/0.01)
#inputSignal_dot = (inputSignal[1:]-inputSignal[0:])/0.01

time = np.arange(len(inputSignal_dot))


plt.figure
plt.title('inputSignal')
plt.plot(inputSignal_0[1:], inputSignal_0[0:len(inputSignal_0)-1], 'g')
plt.plot(inputSignal_1[1:], inputSignal_1[0:len(inputSignal_1)-1], 'r--')
plt.plot(inputSignal_2[1:], inputSignal_2[0:len(inputSignal_2)-1], 'c--')
plt.plot(inputSignal_3[1:], inputSignal_3[0:len(inputSignal_3)-1], 'k--')

plt.plot(inputSignal_4[1:], inputSignal_4[0:len(inputSignal_4)-1], 'r--')
plt.plot(inputSignal_5[1:], inputSignal_5[0:len(inputSignal_5)-1], 'r--')
plt.plot(inputSignal_6[1:], inputSignal_6[0:len(inputSignal_6)-1], 'r--')
plt.plot(inputSignal_7[1:], inputSignal_7[0:len(inputSignal_7)-1], 'r--')
plt.plot(inputSignal_8[1:], inputSignal_8[0:len(inputSignal_8)-1], 'r--')
plt.plot(inputSignal_9[1:], inputSignal_9[0:len(inputSignal_9)-1], 'r--')
plt.plot(inputSignal_10[1:], inputSignal_10[0:len(inputSignal_10)-1], 'r--')
plt.plot(inputSignal_11[1:], inputSignal_11[0:len(inputSignal_11)-1], 'r--')
plt.plot(inputSignal_12[1:], inputSignal_12[0:len(inputSignal_12)-1], 'r--')
plt.plot(inputSignal_13[1:], inputSignal_13[0:len(inputSignal_13)-1], 'r--')


plt.legend(('inputSignal'), loc='best')
plt.grid(True)
plt.show()

sizes = [3, 5, 4, 8, 9, 0, 2]
biases = [np.random.randn(y, 1) for y in sizes[1:]]
weights = [np.random.randn(y, x) for x, y in zip(sizes[:-1], sizes[1:])]
test = list(zip(sizes[:-1], sizes[1:]))
print(weights)
print()
print(biases)
print()
print(sizes[:-1])
print(sizes[1:])
print(test)