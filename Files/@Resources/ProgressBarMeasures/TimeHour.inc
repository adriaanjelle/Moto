[mTimeHourCurrentTime]
Measure=Time

[mTimeHour]
Measure=Calc
Formula=([mTimeHourCurrentTime:Timestamp]%(60*60))/(60*60)

DynamicVariables=1

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
