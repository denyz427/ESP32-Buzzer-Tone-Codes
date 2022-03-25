#Coded By denyz427 on 25th March 2022 find me at https://github.com/denyz427

//defining frequency of the Current_notes for music player
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//defining pin for buzzer
#define BUZZER_PIN 25
#define BUZZER_CHANNEL 0

// You can write your own song by modifying the melody array below with the following format
// int melody[][2]= {   {Note_1,duration in millisecond for Note_1 to be played}   ,   {Note_2,duration in millisecond for Note_2 to be played}   , ...}
// 0 means rest (no sound)
//The Avengers theme song source: https://musescore.com/user/22961056/scores/5533145 https://musescore.com/user/16878501/scores/4369966
int melody[][2]= {
                    {NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,250},{0,250},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,250},{0,250},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0}
                   ,{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_E5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0}
                   ,{NOTE_F5,125},{0,0},{NOTE_F5,125},{0,0},{NOTE_F5,250},{0,250},{NOTE_F5,125},{0,0},{NOTE_F5,125},{0,0},{NOTE_E5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0}
                   ,{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{NOTE_AS4,250},{0,250},{NOTE_C5,250},{0,250}
                   ,{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,250},{0,250},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,250},{0,250},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0},{NOTE_D5,125},{0,0}
                   ,{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_E5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0}
                   ,{NOTE_F5,125},{0,0},{NOTE_F5,125},{0,0},{NOTE_F5,250},{0,250},{NOTE_F5,125},{0,0},{NOTE_F5,125},{0,0},{NOTE_E5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0}
                   ,{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{0,0},{NOTE_DS5,250},{0,250},{NOTE_DS5,125},{0,0},{NOTE_DS5,125},{NOTE_AS4,250},{0,250},{NOTE_C5,250},{0,250}
                   ,{NOTE_G4,2000},{0,0}
                   ,{NOTE_D5,500},{0,0},{NOTE_C5,500},{0,0},{NOTE_AS4,500},{0,0},{NOTE_C5,500},{0,0}
                   ,{NOTE_D5,500},{0,0},{NOTE_G4,1500},{0,0}
                   ,{NOTE_D5,500},{0,0},{NOTE_C5,500},{0,0},{NOTE_AS4,500},{0,0},{NOTE_A4,500},{0,0}
                   ,{NOTE_G4,2000},{0,0}
                   ,{NOTE_D5,500},{0,0},{NOTE_C5,500},{0,0},{NOTE_AS4,500},{0,0},{NOTE_C5,500},{0,0}
                   ,{NOTE_D5,500},{0,0},{NOTE_G4,1500},{0,0}
                   ,{NOTE_D5,500},{0,0},{NOTE_C5,500},{0,0},{NOTE_AS4,500},{0,0},{NOTE_A4,500},{0,0}
                   ,{NOTE_G4,2000},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_C6,500},{0,0},{NOTE_AS5,500},{0,0},{NOTE_C6,500},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_G5,1500},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_C6,500},{0,0},{NOTE_AS5,500},{0,0},{NOTE_A5,500},{0,0}
                   ,{NOTE_G5,2000},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_C6,500},{0,0},{NOTE_AS5,500},{0,0},{NOTE_C6,500},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_G5,1500},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_C6,500},{0,0},{NOTE_AS5,500},{0,0},{NOTE_A5,500},{0,0}
                   ,{NOTE_E5,500},{NOTE_G4,500},{0,0},{NOTE_G5,1000},{0,0}
                   ,{NOTE_G5,1000},{0,0},{NOTE_C5,1000},{0,0}
                   ,{NOTE_D5,250},{0,0},{NOTE_AS4,250},{0,0},{NOTE_G4,500},{0,0},{NOTE_G5,1000},{0,0}
                   ,{NOTE_GS5,1000},{0,0},{NOTE_G5,1000},{0,0}
                   ,{NOTE_A5,500},{NOTE_C5,500},{0,0},{NOTE_C6,1000}
                   ,{NOTE_C6,1000},{0,0},{NOTE_F6,750},{0,0},{NOTE_C6,250},{0,0}
                   ,{NOTE_D6,500},{0,0},{NOTE_D5,500},{0,0},{NOTE_D6,1000}
                   ,{NOTE_D6,500},{0,0},{NOTE_B4,500},{0,0},{NOTE_B5,1000},{0,0}   
                   ,{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,500}
                   ,{NOTE_E5,500},{0,0},{NOTE_E5,500},{0,0},{NOTE_E5,750},{0,0},{NOTE_B5,250},{0,0}
                   ,{NOTE_A5,2000},{0,0} 
                   ,{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_G5,250},{0,0}
                   ,{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,500}
                   ,{NOTE_E5,500},{0,0},{NOTE_E5,500},{0,0},{NOTE_E5,750},{0,0},{NOTE_B5,250},{0,0}
                   ,{NOTE_A5,2000},{0,0}
                   ,{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_G5,250},{0,0},{NOTE_E5,250},{0,0},{NOTE_E5,500},{0,0}
                   ,{NOTE_E5,750},{0,0},{NOTE_D5,125},{0,0},{NOTE_E5,125},{0,0},{NOTE_FS5,1000},{0,0}
                   ,{NOTE_D5,250},{0,0},{NOTE_E5,250},{0,500},{NOTE_E5,250},{0,0},{NOTE_FS5,250},{0,500}
                   ,{NOTE_E5,2000},{0,0}
                   ,{NOTE_E5,500},{0,0},{NOTE_E5,500},{0,0},{NOTE_E5,750},{0,0},{NOTE_B5,250},{0,0}
                   ,{NOTE_A5,2000},{0,0}
                   ,{NOTE_G5,1000},{0,0},{NOTE_FS5,1000},{0,0}
                   ,{NOTE_E5,2000}
                   ,{NOTE_E5,500},{0,0},{NOTE_E5,500},{0,0},{NOTE_E5,750},{0,0},{NOTE_B5,250},{0,0}
                   ,{NOTE_CS6,1000},{0,0},{NOTE_A5,1000},{0,0}
                   ,{NOTE_B5,2000},{0,0}
                   ,{NOTE_E5,2000}
                   ,{NOTE_E5,500},{0,0},{NOTE_E5,500},{0,0},{NOTE_E5,750},{0,0},{NOTE_B5,250},{0,0}
                   ,{NOTE_A5,2000},{0,0}
                   ,{NOTE_G5,1000},{0,0},{NOTE_FS5,1000},{0,0}
                   ,{NOTE_D5,250},{0,0},{NOTE_E5,250},{0,500},{NOTE_E5,250},{0,0},{NOTE_FS5,250},{0,500}
                   ,{NOTE_E5,2000},{0,0}
                 };
                 
//to modify playing speed
float music_speed_multiplier = 1;

unsigned int Current_note=0, MaxIndex;
unsigned long DurationTime=0;

void setup() {
  MaxIndex=sizeof(melody)/sizeof(melody[0])-1;
  }

void loop() {
  if (millis()>=DurationTime){
    DurationTime=millis()+melody[Current_note][1]*music_speed_multiplier;
    if(melody[Current_note][0]==0){
      ledcDetachPin(BUZZER_PIN);
    }
    else{
      ledcAttachPin(BUZZER_PIN, BUZZER_CHANNEL);
      ledcWriteTone(BUZZER_CHANNEL, melody[Current_note][0]);
    }
    
    if (Current_note==MaxIndex){
      Current_note=0;
      
      //delay for 1.5 second after music ends
      delay(1500);
    }else{
      Current_note++;
    }
  }
}
