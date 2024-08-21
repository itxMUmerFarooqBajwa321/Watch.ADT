#ifndef WATCH_H
#define WATCH_H
#include "Date.h"
#include"Time.h"
class Watch
{
	Date watchDate;
	Time watchTime;
public:
	Watch();
	Watch(Date d, Time t);
	Watch(const Watch&);
	void setTime(Time t);
	void setDate(Date d);
	void setMinute(int m);
	void setSecond(int s);
	void setHour(int h);
	void setTime(int h, int m, int s);
	Date getDate() const;
	Time getTime() const;
	int getHour() const;
	int getMinute() const;
	int getSecond() const;
	void printTwentyFourHourFormat() const;
	void printTwelveHourFormat() const;
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void incSec(int inc = 1);
	void incMin(int inc = 1);
	void incHour(int inc = 1);
	void deccSec(int dec = 1);
	void decMin(int dec = 1);
	void decHour(int dec = 1);
	void incDay(int inc = 1);
	void incMonth(int inc = 1);
	void incYear(int inc = 1);
	void decDay(int dec = 1);
	void decMonth(int dec = 1);
	void decYear(int dec = 1);
};
#endif
