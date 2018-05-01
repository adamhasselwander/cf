param([Parameter(Mandatory=$true)][String]$v)

$oldVer = '<WindowsTargetPlatformVersion>.*</WindowsTargetPlatformVersion>';
$newVer = '<WindowsTargetPlatformVersion>' + $v + '</WindowsTargetPlatformVersion>';

# $file = 'Template.vcxproj';
$files = Get-ChildItem -Path $path -Recurse -Filter "*.vcxproj"

Foreach ($file in $files) {
	(Get-Content $file.FullName) -replace $oldVer, $newVer | Set-Content $file.FullName
}

