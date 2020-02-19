; Script generated by the Inno Script Studio Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Ricochet Refresh"
#define MyAppVersion "1.1.4"
#define MyAppPublisher "Blueprint for Free Speech"
#define MyAppURL "https://blueprint-freespeech.github.io/refresh-site/"
#define MyAppExeName "ricochet-refresh.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{0D70245F-CF5A-40DE-B33E-8791E0B7BEE6}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={userdesktop}\{#MyAppName}
DefaultGroupName={#MyAppName}
AllowNoIcons=yes
LicenseFile=D:\dev\ricochet-refresh\LICENSE
OutputBaseFilename=ricochet-refresh_win32
Compression=lzma2/ultra64
InternalCompressLevel=ultra64
SolidCompression=yes
PrivilegesRequired=lowest
;this is a portable app
Uninstallable=no

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "D:\dev\ricochet-refresh\release\deploy\ricochet-refresh.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\d3dcompiler_47.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libcrypto-1_1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libeay32.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libEGL.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libevent_core-2-0-5.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libevent_core-2-1-6.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libevent_extra-2-0-5.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libevent_extra-2-1-6.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libevent-2-0-5.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libevent-2-1-6.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libgcc_s_sjlj-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libGLESV2.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libgmp-10.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libssl-1_1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libssp-0.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\libwinpthread-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\opengl32sw.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Core.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Gui.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Multimedia.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5MultimediaQuick.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Network.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Qml.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Quick.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Svg.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\Qt5Widgets.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\ricochet-refresh.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\ssleay32.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\tor.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\vc_redist.x86.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\zlib1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\dev\ricochet-refresh\release\deploy\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent
