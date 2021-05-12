git clone https://github.com/Unammed-Language-Project/Neo
cd Neo

$null = mkdir build
$scriptPath = split-path -parent $MyInvocation.MyCommand.Definition 

Write-Host "Successfully created build directory in $scriptPath/build"
cd build/
try {
  cmake --build . --config Release
}
catch {
  Write-Host "Failed to generate Neo executable. Please make sure you have CMake installed, as it is required by the script."
  Exit
}
Write-Host "Generated Neo executable in $scriptPath/build/Releases/main.exe."
