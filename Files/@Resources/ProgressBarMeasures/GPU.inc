[mGPURAW]
Measure=Plugin
Plugin=UsageMonitor

Alias=GPU

[mGPU]
Measure=Calc
Formula=[mGPURAW:]/100

DynamicVariables=1

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]
