[mTimeDayCurrentTime]
Measure=Time

[mTimeDay]
Measure=Calc
Formula=([mTimeDayCurrentTime:Timestamp]%(60*60*24))/(60*60*24)

DynamicVariables=1

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
