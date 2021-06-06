// Define pins for ultrasonic and buzzer
int const motorPin = 2;
int const buzzPin = 3;
int const echoPin = 9;
int const trigPin = 10;

void setup()
{
    pinMode(motorPin, OUTPUT); // motor pin is output to run the dcmotor
    pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering
    pinMode(trigPin, OUTPUT); // trig pin will have pulses output
    pinMode(echoPin, INPUT); // echo pin should be input to get pulse width
}

void loop()
{
    // Duration will be the input pulse width and distance will be the distance to the obstacle in centimeters
    int duration, distance;
    
    digitalWrite(trigPin, HIGH);
    delay(1);
    digitalWrite(trigPin, LOW);
    
    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;
    
    if (distance <= 100 && distance >= 0) {
        digitalWrite(motorPin, LOW);
        digitalWrite(buzzPin, HIGH);
    } else {
        digitalWrite(motorPin, HIGH);
        digitalWrite(buzzPin, LOW);
    }
    // Doesn't hurt to wait.
    delay(250);
}