Time operator+(const Time & a, const Time & b) const
{
  Time sum;
  sum.minutes = a.minutes + b.minutes;
  sum.hours = a.hours + b.hours + sum.minutes / 60;
  sum.minutes %= 60;
  return sum;
}

