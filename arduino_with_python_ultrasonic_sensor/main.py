import vpython as v
import serial

data = serial.Serial('/dev/ttyACM0', 9600)

rod1 = v.cylinder(length = 6, color = v.color.orange, radius = 5, pos = v.vector(-3, 0, 0))
rod2 = v.cylinder(length = 6, color = v.color.orange, radius = 5, pos = v.vector(-3, 0, -15))

label1 = v.label(text = "Target distance is: ")

while (True):
	if (data.inWaiting() > 0):
		temp1 = data.readline()
		temp1 = float(temp1)
		print(temp1)
		rod1.length = temp1
		rod2.length = temp1
		
