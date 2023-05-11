@echo off
set DriverCount=progress.txt

if NOT EXIST %DriverCount% (
set /A COUNT=0 
ECHO ^0>>%DriverCount% 
GOTO AFTERFILE1 )

(set /P COUNT=<%DriverCount%)2>nul || set COUNT=0
set /A COUNT+=1
echo:%COUNT%>%DriverCount%

:AFTERFILE1