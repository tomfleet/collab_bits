void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Serial GO");
  //while (!Serial)
  //  ;;
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  testPrint(23);
  testPrint(13);
  testPrint(9);
  while (1)
    ;;
}

void testPrint(int hour)
{
  int hours, hrs;

  hours = hour;
  //toms bits
  hrs = (hours > 12) ? hours - 12 : hours;
  Serial.print("Hours = ");
  Serial.println(hours);
  Serial.print("hrs = ");
  Serial.println(hrs);
  String h = String(hrs);
  Serial.println("hrs String = " + h);
  Serial.println();
}
