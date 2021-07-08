class BYJ48 {
  int pin1;
  int pin2;
  int pin3;
  int pin4;
  int Speed;
  
  public:
    BYJ48(int pin1, int pin2, int Pin3, int Pin4);
    void begin();
    void FullStep(int Delay);
    void HalfStep(int Delay);
    void SetSpeed(int Speed);
    int  GetSpeed();
    void Stop();
    
  private:
 
};
