@echo off


rem echo "please enter 3 text value , out text and out folder "
set text_value=%1


set out_file=%~f2

set out_folder=%3


IF "%~3"=="" (
echo "invalid input"
goto after
)

if exist TXT (
    cd TXT
) else (
    mkdir TXT
    cd TXT
)

if exist %out_folder% (
    cd %out_folder%
) else (
    mkdir %out_folder%
    cd %out_folder%
)
echo %text_value%>%out_file%    
cd ../..

:after




