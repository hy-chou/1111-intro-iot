all: compile upload monitor

compile:
	arduino-cli compile -b arduino:avr:uno LoRaDumpRegisters.ino
upload:
	arduino-cli upload -tp /dev/cu.usbmodem14101 LoRaDumpRegisters.ino
monitor:
	arduino-cli monitor -p /dev/cu.usbmodem14101
