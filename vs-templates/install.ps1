cd .\ContestProgrammingProj\
.\update-from-solution.ps1
cd ..

$vsPath = [Environment]::GetFolderPath("MyDocuments") + '\Visual Studio 2017\Templates\ProjectTemplates\Visual C++ Project\'

Copy-Item .\* $vsPath -Recurse -Force
Remove-Item ($vsPath + '*\*.ps1') -Force
Remove-Item ($vsPath + '*.ps1') -Force