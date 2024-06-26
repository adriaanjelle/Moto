[Variables]
WeatherLocation=Amsterdam
; Just enter your city's name or your address here or whatever. Anything should work here.
; TIP: Check Rainmeter's log to see what location it got.

WeatherUnits=Metric
; The units of the weather info. Valid values are "Metric" and "Imperial".

Language=[&mSystemLocale]
; Set the language of the weather information and names of the days.
; See https://learn.microsoft.com/nl-nl/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c for valid values under the 'language tag' column.
; Not all values may work properly.
; NOTE: use "[&mSystemLocale]" to let it use the currently set system language.

24HourTime=True
; Enable or disable 24-hour time format. Valid values are "True" and "False".

ProgressBarMeasure=TimeHour
; The measure used for the progress bar. Valid values are:
; TimeMinute, TimeHour, TimeDay, TimeWeek, TimeMonth, TimeYear
; Battery, RAM, CPU, GPU, Disk

DiskLetter=C
; The letter of the drive you want to use.

; ================================================

Scale=1.00
; The size multiplier. Please stick with multiples of 0.25 (e.g. 1.25, 1.5, 1.75, etc.) as much as you can.
; If you need finer control, refer to the options below.

Size=320
; The size of the skin in pixels, excluding the progress bar (and gap).

ProgressBarThickness=4
; The thickness of the progress bar in pixels.

ProgressBarGap=0
; The gap between the skin background and the progress bar.

WeatherIconSize=24
; The size of the weather icon in pixels.

WeatherTemperatureSize=15
; The size of the temperature text in pixels.

TimeSize=96
; The size of the time text in pixels.

MonthDaySize=15
; The size of the month and (week)day text in pixels.

DateSize=20
; The size of the date text in pixels.

HideProgressBarBackground=True
; Hide the bakground of the progress bar or not.
; Valid values are "True" and "False".

; ================================================

Font=Roboto Flex Normal
; The font used in the skin.

ForegroundColor=255, 255, 255
; The color of the text and the weather icon.
; Valid values are formatted "RRR, GGG, BBB" with values of 0-255.

BackgroundColor=0, 0, 0
; The color of the background.
; Valid values are formatted "RRR, GGG, BBB" with values of 0-255.
