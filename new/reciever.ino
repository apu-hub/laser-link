int sensorPin = A0;
int DE = 200;
int sensorValue = 0;
long a = 0, x = 0, y = 0;
int count = 0, i = 0, j = 0;
void setup()
{
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}
void loop()
{
    sensorValue = digitalRead(sensorPin);
    if (sensorValue == 1)
    {
        count = count + 1;
    }
    else
    {
        if (count == 0)
        {
            if (x)
            {
                print_later(x);
                x = 0;
            }
        }
        x = x * 10 + count;
        count = 0;
    }
    delay(DE);
}

void print_later(long int x)
{
    switch (x)
    {
    case 12:
        Serial.print("A");
        break;
    case 2111:
        Serial.print("B");
        break;
    case 2121:
        Serial.print("C");
        break;
    case 211:
        Serial.print("D");
        break;
    case 1:
        Serial.print("E");
        break;
    case 1121:
        Serial.print("F");
        break;
    case 221:
        Serial.print("G");
        break;
    case 1111:
        Serial.print("H");
        break;
    case 11:
        Serial.print("I");
        break;
    case 1222:
        Serial.print("J");
        break;
    case 212:
        Serial.print("K");
        break;
    case 1211:
        Serial.print("L");
        break;
    case 22:
        Serial.print("M");
        break;
    case 21:
        Serial.print("N");
        break;
    case 222:
        Serial.print("O");
        break;
    case 1221:
        Serial.print("P");
        break;
    case 2212:
        Serial.print("Q");
        break;
    case 121:
        Serial.print("R");
        break;
    case 111:
        Serial.print("S");
        break;
    case 2:
        Serial.print("T");
        break;
    case 112:
        Serial.print("U");
        break;
    case 1112:
        Serial.print("V");
        break;
    case 122:
        Serial.print("W");
        break;
    case 2112:
        Serial.print("X");
        break;
    case 2122:
        Serial.print("Y");
        break;
    case 2211:
        Serial.print("Z");
        break;
    case 111111:
        Serial.print("_");
        break;
    case 222222:
        Serial.println();
        break;
    }
}