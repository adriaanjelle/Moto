[mBattery]
Measure=Plugin
Plugin=PowerPlugin

PowerState=Percent

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
