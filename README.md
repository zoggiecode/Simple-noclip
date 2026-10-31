# Simple Noclip (source project)

Targets Geometry Dash 2.2081 and Geode SDK v5.0.0. Your cracked game may report a different Android app version; compatibility is unverified. The loader must be compatible with this SDK. No compiled .geode file is included.

## Build using GitHub Actions
1. Create a GitHub repository. Extract the zip and upload ALL files preserving their paths. Include the hidden .github/workflows/build.yml file. GitHub's phone website can make hidden files awkward, so use a file manager that shows hidden files.
2. Open Actions > Build Android mod. The workflow also runs on upload. Select the latest run and wait for both builds.
3. Download the SimpleNoclip-Android32 or SimpleNoclip-Android64 artifact for the game architecture. Extract its downloaded zip to obtain the .geode file. You do not need both artifacts on one phone.
4. Copy the .geode file to /storage/emulated/0/Android/media/com.geode.launcher/game/geode/mods/ and restart Geode. See https://docs.geode-sdk.org/getting-started/create-mod/.
5. Open Geode > Installed > Simple Noclip > settings to turn Noclip and its indicator on or off. Re-enter the level to refresh the indicator.

The indicator reports only this mod's noclip setting, not Eclipse's settings or other cheats. This mod does not register with or directly alter Eclipse. It is NOT proven to avoid Eclipse's indicator or automatic safe mode. It blocks the usual death callback, not every possible collision or death. It has not been compiled or tested. Avoid treating assisted runs as legitimate; this simple prototype does not prevent progress or rewards from being saved. Back up your save first.
