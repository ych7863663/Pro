 using System.IO;
 using HybridCLR.Editor.Commands;
 using HybridCLR.Editor.Installer;
 
 public static class JenkinsHybridCLR
 {
     public static void InitHybridCLR()
     {
         var installer = new InstallerController();
         var deployDir = "HybridCLRData/LocalIl2CppData-WindowsEditor/il2cpp/build/deploy";
 
         if (!installer.HasInstalledHybridCLR() || !Directory.Exists(deployDir))
         {
             installer.InstallDefaultHybridCLR();
         }
     }
 
     public static void PrebuildHybridCLR()
     {
         PrebuildCommand.GenerateAll();
     }
 }