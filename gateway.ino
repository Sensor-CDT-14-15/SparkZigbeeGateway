char publishString[255];
char read[255];
int i=0;

void setup() {
  Serial.begin(9600);   // open serial over USB
  Serial1.begin(9600);  // Serial link to zigbee module
}


void publish() {

    if(read[0] = 'F') {
      sprintf(publishString, "fall: %s", read);
      Spark.publish("Fall", publishString);
    }
    else if(read[0] = 'S') {
      sprintf(publishString, "SensorBox: %s", read);
      Spark.publish("SensorBox", publishString);
    }
    else if(read[0] = 'A') {
      sprintf(publishString, "Acceleration: %s", read);
      Spark.publish("Accelerometer", publishString);
    }
    for(int j = 0; i < sizeof(read);  ++j ) read[j] = (char);
}

void loop() {
    char temp;
    if (Serial1.available()) {
        Serial.print(Serial1.read());
      //  read[i] = temp;
      //  i++;
  //  if(temp == ':'){
    //    i=0;
      //  publish();
    }
}
