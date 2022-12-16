all: compile upload monitor

compile:
	arduino-cli compile -b arduino:avr:uno accelerometer.ino
upload:
	arduino-cli upload -tp /dev/cu.usbmodem14101 accelerometer.ino
monitor:
	arduino-cli monitor -p /dev/cu.usbmodem14101
