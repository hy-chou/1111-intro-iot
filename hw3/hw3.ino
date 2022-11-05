#define PIN_DUST A0
#define PIN_LED 7
#define LED_ON_TIME1 280
#define LED_ON_TIME2 280
#define LED_OFF_TIME 280

void setup()
{
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_DUST, INPUT);
    Serial.begin(9600);
}

void loop()
{
    float dustVal;
    float AirQ;

    digitalWrite(PIN_LED, LOW);
    delayMicroseconds(LED_ON_TIME1);

    dustVal = analogRead(PIN_DUST);
    delayMicroseconds(LED_ON_TIME2);

    digitalWrite(PIN_LED, HIGH);
    delayMicroseconds(LED_OFF_TIME);
    delay(3000);

    AirQ = float((dustVal / 1024) - 0.0356) * 120000 * 0.035;
    Serial.println(AirQ);
}
