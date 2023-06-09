[mTimeYearCurrentYear]
Measure=Time
Format=%Y

[mTimeYearNextYear]
Measure=Calc
Formula=[mTimeYearCurrentYear]+1

DynamicVariables=1

[mTimeYearStart]
Measure=Time
TimeStamp=[mTimeYearCurrentYear]-01-01
TimeStampFormat=%Y-%m-%d

DynamicVariables=1

[mTimeYearEnd]
Measure=Time
TimeStamp=[mTimeYearNextYear]-01-01
TimeStampFormat=%Y-%m-%d

DynamicVariables=1

[mTimeYear]
Measure=Calc
Formula=([mTimeYearCurrentYear:Timestamp]-[mTimeYearStart:Timestamp])/([mTimeYearEnd:Timestamp]-[mTimeYearStart:Timestamp])

DynamicVariables=1

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
