#include "Wire.h"

// MPU6050 must be installed as libraries, or else the .cpp/.h files must be in
// the include path of your project
#include "MPU6050.h"

MPU6050 accelgyro;

void setup()
{
	Wire.begin();

	Serial.begin(9600);

	// initialize device
	Serial.println("Initializing I2C devices...");
	accelgyro.initialize();

	// verify connection
	Serial.println("Testing device connections...");
	Serial.println(accelgyro.testConnection() ? "MPU6050 connection successful" : "MPU6050 connection failed");

	delay(1000);
	Serial.print("\nAcceleration(g)\nX\tY\tZ\n");
}

void loop()
{
	int16_t ax, ay, az;

	accelgyro.getAcceleration(&ax, &ay, &az);

	Serial.print((double)ax / 16384);
	Serial.print("\t");
	Serial.print((double)ay / 16384);
	Serial.print("\t");
	Serial.print((double)az / 16384);
	Serial.print("\n");
}
