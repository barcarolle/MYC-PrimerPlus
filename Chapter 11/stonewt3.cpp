Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

ostream & operator<<(ostream & os, const Stonewt & s)
{
  cout << s.stone << " stones" << s.pounds << " pounds";
  
  return os;
}
