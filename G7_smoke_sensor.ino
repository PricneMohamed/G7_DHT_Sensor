#define Threshold 300 // متغير معرف فيه القيمة يا دكتور
#define MQ2pin A0 // متغير معرف فيه رقم pin analog
float sensorValue; // متغير بيتخزم فيه القيمة الي بيقرأها السينسور
void setup() {
 Serial.begin(9600); // الربط بين الاردوينو و اللاب علي منفذ التسلسلي 9600
 Serial.println("MQ2 warming up!"); // MQ2 warming up بيطبع كلمة
 delay(20000); // بيعمل تأخير 20 ثانية
}
void loop() {
 sensorValue = analogRead(MQ2pin); // بيقرأ قيمة الدخل الانالوج 
 Serial.print("Sensor Value: ");// Sensor Value: بيطبع كلمة
 Serial.print(sensorValue);// بيطبع القيمة الي قرأها السينسور

 if (sensorValue > Threshold) // ده شرط بقوله لو القيمة الي قرأها السينسور اكبر من قيمة المتغير الي اسمه Threshold الي هي 300 هتعمل ايه؟
 {
   Serial.print(" | Smoke detected!"); // هطبعلك حملة | Smoke detected!
 }

 Serial.println(""); // بيطبع مسافة 
 delay(2000); // بيتأخر ثانيتين
}
