@echo off

endlocal
setlocal

cd Python-3.10.1



call PCbuild\build.bat
if %ERRORLEVEL% GEQ 1 (
    echo "Problem with prepare configuration"
    EXIT /B 1
)

XCOPY /F PCbuild\amd64\* ../python-bin-windows

IF EXIST ..\python-bin-windows\ RMDIR /S /Q ..\python-bin-windows\

MKDIR ..\python-bin-windows\

XCOPY /K /D /Y /H PCbuild\amd64\* ..\python-bin-windows\
