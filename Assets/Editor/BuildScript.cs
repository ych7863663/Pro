using System.Linq;
using UnityEditor;
using UnityEngine;

public class BuildScript
{
    public static void BuildWindows()
    {
        string outputPath = "Build/MyGame.exe";

        BuildPlayerOptions options = new BuildPlayerOptions();

        var scenes = EditorBuildSettings.scenes
    .Where(s => s.enabled)
    .Select(s => s.path)
    .ToArray();

        options.scenes = scenes;

        options.locationPathName = outputPath;

        options.target = BuildTarget.StandaloneWindows64;

        options.options = BuildOptions.None;

        BuildPipeline.BuildPlayer(options);

        Debug.Log("Build Success");
    }
}