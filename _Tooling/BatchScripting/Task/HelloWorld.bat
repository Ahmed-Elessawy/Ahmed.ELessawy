@ECHO off
if [%4]==[] GOTO INVALIDINPUT
REM get the arguments inside internal variables
SETLOCAL EnableDelayedExpansion

SET output_folder=%1
SET output_file1=%2
SET output_file2=%3
SET output_file3=%4 
REM Create output directory if it does not already exist
IF EXIST %output_folder% ( GOTO AFTERDIRECTORY )
MKDIR %output_folder%
:AFTERDIRECTORY
CD %output_folder%
REM removing read only attribute from the file to write to
attrib -r %output_file1%>nul
attrib -r %output_file2%>nul
attrib -r %output_file3%>nul
REM writing output text in the output file
if NOT EXIST %output_file1% ( 
ECHO ^0>>%output_file1% 
GOTO AFTERFILE1 )

(set /P COUNT=<%output_file1%)2>nul || set COUNT=0
set /A COUNT+=1
echo:%COUNT%>%output_file1%

:AFTERFILE1

if NOT EXIST %output_file2% ( 
ECHO ^0>>%output_file2%
GOTO AFTERFILE2 )



(set /P COUNT_=<%output_file2%)2>nul || set COUNT_=0
set /A COUNT_+=1
echo:%COUNT_%>%output_file2%

:AFTERFILE2

if NOT EXIST %output_file3% ( 
ECHO ^0>>%output_file3%
GOTO AFTERFILE3 )



(set /P COUNT__=<%output_file3%)2>nul || set COUNT__=0
set /A COUNT__+=1
echo:%COUNT__%>%output_file3%

:AFTERFILE3
REM adding read only attribute from the file to write to

attrib +r %output_file1%
attrib +r %output_file2%
attrib +r %output_file3%
rem CD..
goto END
:INVALIDINPUT
echo "invalid input"
:END