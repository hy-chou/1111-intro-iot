all: compile upload monitor

compile:
	arduino-cli compile -b arduino:avr:uno rf95_client.ino --library ../RadioHead
upload:
	arduino-cli upload -tp /dev/cu.usbmodem14201 rf95_client.ino
monitor:
	arduino-cli monitor -p /dev/cu.usbmodem14201
