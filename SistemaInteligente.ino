void setup() {

  Serial.begin(9600);
  Serial.println("¡Bienvenido!");
}

float linearRegretionMotor(float shimer,float HNR,float RDPE ){
  return (shimer*-1.30563501) + (HNR*-0.29031104) + (RDPE*4.40475491) + 25.674;
}

float linearRegretionTotal(float shimer,float HNR,float RDPE ){
  return (shimer* -3.43584199) + (HNR*-0.4036477) + (RDPE*9.65389245) + 33.690;
}

void loop() {
float shimmer;
float hnr;
float rpde;


  if (Serial.available() >0){
    
    shimmer = Serial.parseFloat();
    hnr = Serial.parseFloat();
    rpde = Serial.parseFloat();
    
    Serial.println(linearRegretionMotor(shimmer,hnr,rpde));
    Serial.println(linearRegretionTotal(shimmer,hnr,rpde));
    
  }

}