[mTimeWeekCurrentTime]
Measure=Time

[mTimeWeek]
Measure=Calc
Formula=([mTimeWeekCurrentTime:Timestamp]%(60*60*24*7))/(60*60*24*7)

DynamicVariables=1

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]