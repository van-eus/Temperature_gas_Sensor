  float temp;
float vout;
float vout1;
int LED =13;
int piezo=7;
int gasSensor;

void  setup()
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(LED,OUTPUT);
  pinMode(piezo,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  vout= analogRead(A1);
  vout1= (vout-1023)*5000;
  temp=(vout1- 500)/10;
  gasSensor=analogRead(A0);
  if (temp>=80)
  {
    digitalWrite(LED,HIGH);  
  }
  else
  {
    digitalWrite(piezo,LOW);
  }
 
   if (gasSensor>=100)
  {
    digitalWrite(LED,HIGH);  
  }
  else
  {
    digitalWrite(piezo,LOW);
  }
  Serial.print("in DegreeC= " );
  Serial.print("");
  Serial.print(temp);
  Serial.print("\t");
  Serial.print("GasSensor= " );
  Serial.print("");
  Serial.print(gasSensor);
  Serial.println();
  delay(1000);
}


  
 
