%SystemDrive%\cygwin\bin\which.exe bash
if errorlevel 1 set PATH=%SystemDrive%\cygwin\bin;%PATH%
cmd /c
if exist "%CONFIGURATIONBUILDDIR%\buildfailed" grep XX%PROJECTNAME%XX "%CONFIGURATIONBUILDDIR%\buildfailed"
if errorlevel 1 exit 1
echo XX%PROJECTNAME%XX > "%CONFIGURATIONBUILDDIR%\buildfailed"

mkdir 2>NUL "%CONFIGURATIONBUILDDIR%\obj%PlatformArchitecture%\WebKit\%PROJECTNAME%"
bash "%WEBKIT_LIBRARIES%\tools\scripts\auto-version.sh" "%INTDIR%"
