[mTimeMonthCurrentMonth]
Measure=Time
Format=%#m

[mTimeMonthNextMonth]
Measure=Calc
Formula=Max(([mTimeMonthCurrentMonth]+1)%13, 1)

DynamicVariables=1

[mTimeMonthCurrentYear]
Measure=Time
Format=%Y

[mTimeMonthNextYear]
Measure=Calc
Formula=[mTimeMonthCurrentYear]+([mTimeMonthNextMonth]<[mTimeMonthCurrentMonth] ? 1 : 0)

DynamicVariables=1

[mTimeMonthStart]
Measure=Time
TimeStamp=[mTimeMonthCurrentYear]-[mTimeMonthCurrentMonth]-1
TimeStampFormat=%Y-%#m-%#d

DynamicVariables=1

[mTimeMonthEnd]
Measure=Time
TimeStamp=[mTimeMonthNextYear]-[mTimeMonthNextMonth]-1
TimeStampFormat=%Y-%#m-%#d

DynamicVariables=1

[mTimeMonth]
Measure=Calc
Formula=([mTimeMonthCurrentMonth:Timestamp]-[mTimeMonthStart:Timestamp])/([mTimeMonthEnd:Timestamp]-[mTimeMonthStart:Timestamp])

DynamicVariables=1

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
