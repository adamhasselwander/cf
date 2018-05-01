$vsPath =  ${env:ProgramFiles(x86)} + '/Microsoft Visual Studio/**/include'
$vsIncludePaths = Get-ChildItem -Path $vsPath -Recurse -Filter "include" -Directory

Foreach ($includePath in $vsIncludePaths) {
	Copy-Item -Recurse -Force .\bits $includePath.FullName
	echo $includePath.FullName
}