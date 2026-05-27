 using HybridCLR.Editor.Commands;
 using HybridCLR.Editor.Installer;
 
 public static class JenkinsHybridCLR
 {
     public static void InitHybridCLR()
     {
         var installer = new InstallerController();
         if (!installer.HasInstalledHybridCLR())
         {
             installer.InstallDefaultHybridCLR();
         }
     }
 
     public static void PrebuildHybridCLR()
     {
         PrebuildCommand.GenerateAll();
     }
 }