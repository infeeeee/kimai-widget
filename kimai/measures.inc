; ----------------------------------
; MEASURES return some kind of value
; ----------------------------------

[MeasureStart]
Measure=Plugin
Plugin=RunCommand
Program=#CURRENTPATH#kimai-cmd\kimai-cmd.exe
Parameter=-r start "#activeProject#" "#activeTask#"
StartInFolder=#CURRENTPATH#kimai-cmd
DynamicVariables=1
State=Hide

[MeasureStop]
Measure=Plugin
Plugin=RunCommand
Program=#CURRENTPATH#kimai-cmd\kimai-cmd.exe
Parameter=stop
StartInFolder=#CURRENTPATH#kimai-cmd
State=Hide
FinishAction=[!SetVariable stopHidden 1][!SetVariable startHidden 0]

[MeasureReload]
Measure=Plugin
Plugin=RunCommand
Program=#CURRENTPATH#kimai-cmd\kimai-cmd.exe
Parameter=-r list
StartInFolder=#CURRENTPATH#kimai-cmd
State=Hide
FinishAction=[!showmeter meterRefreshButton]

; -------
; LOGGING 
; -------

; Uncomment the following lines to enable verbose logging
; Please comment out the previous parameter value above
 
;Parameter=-rv list
;OutputFile=#CURRENTPATH#kimai-cmd\log.txt
;OutputType=UTF8
