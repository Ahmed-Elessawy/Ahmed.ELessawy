@echo off

FOR /F "tokens=1-4" %%G IN (
input.txt
) DO (

CALL HelloWorld.bat %%G %%H %%I %%J)

IF NOT EXIST TXTFiles (MKDIR TXTFiles)

FOR /R  %%G IN (*.txt) do copy %%G TXTFiles


IF NOT EXIST HeaderFiles (MKDIR HeaderFiles)
FOR /R  %%G IN (*.h) do copy %%G HeaderFiles

IF NOT EXIST SourceFiles (MKDIR SourceFiles)
FOR /R  %%G IN (*.c) do copy %%G SourceFiles
