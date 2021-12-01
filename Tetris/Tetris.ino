int DS=2;//貨物
int DT=3;//出發
int SH=4;//上貨
int speaker = 5;
int bpm = 120;
#define A0  27
#define A0_ 29
#define B0  31
#define C1  33
#define C1_ 35
#define D1  37
#define D1_ 39
#define E1  41
#define F1  44
#define F1_ 46
#define G1  49
#define G1_ 52
#define A1  55
#define A1_ 58
#define B1  62
#define C2  65
#define C2_ 69
#define D2  73
#define D2_ 78
#define E2  82
#define F2  87
#define F2_ 93
#define G2  98
#define G2_ 104
#define A2  110
#define A2_ 117
#define B2  123
#define C3  131
#define C3_ 139
#define D3  147
#define D3_ 156
#define E3  165
#define F3  175
#define F3_ 185
#define G3  196
#define G3_ 208
#define A3  220
#define A3_ 233
#define B3  247
#define C4  262
#define C4_ 277
#define D4  294
#define D4_ 311
#define E4  330
#define F4  349
#define F4_ 370
#define G4  392
#define G4_ 415
#define A4  440
#define A4_ 466
#define B4  494
#define C5  523
#define C5_ 554
#define D5  587
#define D5_ 622
#define E5  659
#define F5  698
#define F5_ 740
#define G5  784
#define G5_ 831
#define A5  880
#define A5_ 932
#define B5  988
#define C6  1047
#define C6_ 1109
#define D6  1175
#define D6_ 1245
#define E6  1319
#define F6  1397
#define F6_ 1480
#define G6  1568
#define G6_ 1661
#define A6  1760
#define A6_ 1865
#define B6  1976
#define C7  2093
#define C7_ 2217
#define D7  2349
#define D7_ 2489
#define E7  2637
#define F7  2794
#define F7_ 2960
#define G7  3136
#define G7_ 3322
#define A7  3520
#define A7_ 3729
#define B7  3951
#define C8  4186
#define C8_ 4435
#define D8  4699
#define D8_ 4978

int melody[250] = {
  E6,B5,C6,D6,C6,B5,A5,A5,C6,E6,D6,C6,B5,C6,D6,E6,C6,A5,A5,
  D6,F6,A6,G6,F6,E6,C6,E6,D6,C6,B5,C6,D6,E6,C6,A5,A5,
  E6,B5,C6,D6,C6,B5,A5,A5,C6,E6,D6,C6,B5,C6,D6,E6,C6,A5,A5,
  D6,F6,A6,G6,F6,E6,C6,E6,D6,C6,B5,C6,D6,E6,C6,A5,A5,
  E6,C6,D6,B5,C6,A5,G5_,B5,E6,C6,D6,B5,C6,E6,A6,G6_,
  E6,F6,E6,B5,E6,F6,E6,B5,
  E6,F6,E6,A5,E6,F6,E6,A5,
  E6,F6,E6,B5,E6,F6,E6,B5,
  C6,A5,E6,A5,F6,E6,C6,A5,
  D6,F6,A6,G6,F6,E6,C6,E6,D6,C6,B5,C6,D6,E6,C6,A5,A5,
  E6,C6,D6,B5,C6,A5,G5_,B5,E6,C6,D6,B5,C6,E6,A6,G6_
  };
//2 是四分音符
float beats[250] = {
  2,1,1,2,1,1,2,1,1,2,1,1,3,1,2,2,2,2,5,
  2,1,2,1,1,3,1,2,1,1,3,1,2,2,2,2,4,
  2,1,1,2,1,1,2,1,1,2,1,1,3,1,2,2,2,2,5,
  2,1,2,1,1,3,1,2,1,1,3,1,2,2,2,2,4,
  4,4,4,4,4,4,4,4,4,4,4,4,2,2,4,8,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,1,
  1,1,1,1,1,1,1,3,
  2,1,2,1,1,3,1,2,1,1,3,1,2,2,2,2,4,
  4,4,4,4,4,4,4,4,4,4,4,4,2,2,4,8
};




void music(){
  for(int i = 0;i<153; i++){
    Serial.println(i);
    tone(speaker, melody[i]);
    delay((bpm/60)*100*beats[i]-35);
    noTone(speaker);
    delay(35);
  }
}

void setup() {

    Serial.begin(9600);
}

void loop() {  
  music();
}
