
int get_val;

int sure = 2; 
#define aIN1 2 
#define aIN2 3 
#define aIN3 4 
#define aIN4 5 

#define bIN1 6 
#define bIN2 7 
#define bIN3 8 
#define bIN4 9 

#define cIN1 10 
#define cIN2 11 
#define cIN3 12 
#define cIN4 13 

void setup() {
  Serial.begin(9600);

  pinMode(aIN1, OUTPUT); 
  pinMode(aIN2, OUTPUT); 
  pinMode(aIN3, OUTPUT); 
  pinMode(aIN4, OUTPUT); 
  pinMode(bIN1, OUTPUT);
  pinMode(bIN2, OUTPUT); 
  pinMode(bIN3, OUTPUT); 
  pinMode(bIN4, OUTPUT); 
  pinMode(cIN1, OUTPUT); 
  pinMode(cIN2, OUTPUT); 
  pinMode(cIN3, OUTPUT); 
  pinMode(cIN4, OUTPUT); 
}
void loop() {

  if (Serial.available()>0) 
  {
   get_val = Serial.read(); //Read what we receive
   Serial.println(get_val);
  }

  if(get_val==1)
  {
    ayon_1();
  }
  else if(get_val==2)
  {
    ayon_2();
  }
  
  
  
  else if(get_val==4)
  {
    byon_1();
  }
  else if(get_val==5)
  {
    byon=2();
  }
  
  
  else if(get_val==6)
  {
    cyon_1();
  }
  else if(get_val==7)
  {
    cyon_2();
  }

  
  else if(get_val==3)
  {
    
  }
  
}

void ayon_1()
{
  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);

  digitalWrite(IN2,1);
  delay(10);
  digitalWrite(IN2,0);

  digitalWrite(IN3,1);
  delay(10);
  digitalWrite(IN3,0);

  digitalWrite(IN4,1);
  delay(10);
  digitalWrite(IN4,0);
}

void ayon_2()
{
  digitalWrite(IN4,1);
  delay(10);
  digitalWrite(IN4,0);

  digitalWrite(IN3,1);
  delay(10);
  digitalWrite(IN3,0);

  digitalWrite(IN2,1);
  delay(10);
  digitalWrite(IN2,0);

  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);
}





void byon_1()
{
  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);

  digitalWrite(IN2,1);
  delay(10);
  digitalWrite(IN2,0);

  digitalWrite(IN3,1);
  delay(10);
  digitalWrite(IN3,0);

  digitalWrite(IN4,1);
  delay(10);
  digitalWrite(IN4,0);
}

void byon_2()
{
  digitalWrite(IN4,1);
  delay(10);
  digitalWrite(IN4,0);

  digitalWrite(IN3,1);
  delay(10);
  digitalWrite(IN3,0);

  digitalWrite(IN2,1);
  delay(10);
  digitalWrite(IN2,0);

  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);
}






void cyon_1()
{
  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);

  digitalWrite(IN2,1);
  delay(10);
  digitalWrite(IN2,0);

  digitalWrite(IN3,1);
  delay(10);
  digitalWrite(IN3,0);

  digitalWrite(IN4,1);
  delay(10);
  digitalWrite(IN4,0);
}

void cyon_2()
{
  digitalWrite(IN4,1);
  delay(10);
  digitalWrite(IN4,0);

  digitalWrite(IN3,1);
  delay(10);
  digitalWrite(IN3,0);

  digitalWrite(IN2,1);
  delay(10);
  digitalWrite(IN2,0);

  digitalWrite(IN1,1);
  delay(10);
  digitalWrite(IN1,0);
}
