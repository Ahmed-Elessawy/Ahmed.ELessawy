rem DriverFilesCraetor v1.0
rem Author : Ahmed Elessawy
rem data: 16/01/2023






@echo on

rem set DriverLayerCount=DriverLayerCount.txt
set DriverLayer=%2
set DriverName=%1
set DriverCount=DriverCount.txt
IF "%~1"=="" (
echo you must enter driver name you want to create
goto after
)

rem set PreD=0
rem set EndD=-
rem set IndexD=%PreD%%COUNTD%%EndD%
rem set NameD=%IndexD%%DriverLayer%

if exist %DriverLayer% (
      cd %DriverLayer%
      
) else (

      mkdir %DriverLayer%
      cd %DriverLayer%
)



 
if NOT EXIST %DriverCount% (
set /A COUNT=0 
ECHO ^0>>%DriverCount% 
GOTO AFTERFILE1 )

(set /P COUNT=<%DriverCount%)2>nul || set COUNT=0
set /A COUNT+=1
echo:%COUNT%>%DriverCount%

:AFTERFILE1

set Pre=0
set End=-
set Index=%Pre%%COUNT%%End%
set Name=%Index%%DriverName%


if exist %Name% (
      cd %Name%
) else (
    
    mkdir %Name%
    cd %Name%
)

if exist 01-Source (
    cd 01-Source
) else (
    mkdir 01-Source
    cd 01-Source
) 
set Progc=_Prog.c
set PROG=%DriverName%%Progc%
echo //Author : Ahmed Elessawy>%PROG%  
cd ..


if exist 02-Include (
    cd 02-Include
) else (
    mkdir 02-Include
    cd 02-Include
)

 
set Interface=_Interface.h
set Interfaceh=%DriverName%%Interface%
echo //Author : Ahmed Elessawy>%Interfaceh% 
 
set Config=_Config.h
set Configuration=%DriverName%%Config%
echo //Author : Ahmed Elessawy>%Configuration%  


set Priv=_Private.h
set Private=%DriverName%%Priv%
echo //Author : Ahmed Elessawy>%Private% 

cd ..
cd ..
cd ..
:after
