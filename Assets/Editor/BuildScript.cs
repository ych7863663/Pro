using UnityEditor;
using UnityEditor.Build.Reporting;
using UnityEngine;

public class BuildScript
{
    public static void BuildWindows()
    {
        Debug.Log("=== BUILD START ===");

        string[] scenes =
        {
            "Assets/Scenes/Main.unity"
        };

        BuildPlayerOptions options = new BuildPlayerOptions
        {
            scenes = scenes,
            locationPathName = "Build/MyGame.exe",
            target = BuildTarget.StandaloneWindows64,
            options = BuildOptions.None
        };

        BuildReport report = BuildPipeline.BuildPlayer(options);

        Debug.Log("Build Result: " + report.summary.result);

        if (report.summary.result != BuildResult.Succeeded)
        {
            throw new System.Exception("BUILD FAILED");
        }

        Debug.Log("BUILD SUCCESS");
    }
}