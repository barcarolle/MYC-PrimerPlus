#ifndef STONEWT3_H_
#define STONEWT3_H_

class Stonewt {
  private:
    enum {Lbs_per_stn = 14};	// pounds per stone
	  int stone;					// whole stones
	  double pds_left;			// fractional pounds
	  double pounds;	
    
  public:
    Stonewt::Stonewt(int stn, double lbs);
    ostream & operator<<(ostream & os, const Stonewt & s);
 };
 
 #endif
