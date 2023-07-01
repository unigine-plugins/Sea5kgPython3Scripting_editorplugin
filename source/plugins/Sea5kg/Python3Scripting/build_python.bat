@echo off

endlocal
setlocal

cd Python-3.10.1




call PCbuild\build.bat -c Release -p x64
if %ERRORLEVEL% GEQ 1 (
    echo "Problem compilation debug"
    EXIT /B 1
)

rem call PCbuild\build.bat -c Debug -p x64
rem if %ERRORLEVEL% GEQ 1 (
rem     echo "Problem compilation debug"
rem     EXIT /B 1
rem )

XCOPY /F PCbuild\amd64\* ../python-bin-windows

IF EXIST ..\python-bin-windows\ RMDIR /S /Q ..\python-bin-windows\

MKDIR ..\python-bin-windows\

XCOPY /K /D /Y /H PCbuild\amd64\* ..\python-bin-windows\

XCOPY /K /D /Y /H PCbuild\amd64\*.dll ..\..\..\..\..\bin\


IF EXIST ..\..\..\..\..\bin\plugins\Sea5kg\Python3Scripting\Python3Home RMDIR /S /Q ..\..\..\..\..\bin\plugins\Sea5kg\Python3Scripting\Python3Home

MKDIR ..\..\..\..\..\bin\plugins\Sea5kg\Python3Scripting\Python3Home

XCOPY /K /S /D /Y /H .\Lib ..\..\..\..\..\bin\plugins\Sea5kg\Python3Scripting\Python3Home\Lib\
