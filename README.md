# Godot Plugin for Play SDK

This repository contains the Godot Plugin for Play SDK, which allows developers to integrate Play SDK functionalities into their Godot Engine projects. The plugin supports Godot Engine versions 3 and 4 and facilitates development for both Android and iOS platforms.

## Usage

The included Godot project offers various demo scenes to help you get started. Below is a basic example demonstrating how to sign in and retrieve a user's display name.

```gdscript
func _ready():
    var configure_data = G_PlaySDKConfigurationData.new()
    configure_data.setAppId("YOUR_APP_ID")
    configure_data.setDevelopmentEnvironment()
    PlaySDKCore.initialize(self, configure_data, func():
        UserProfileModule.getProfileAsync_UserId(PlaySDKCore.getUserId(),
            func (userData):
                print("User display name is " : + userData.displayName)
        )
    )

func _process(_delta):
    PlaySDKCore.update()
```

To add this plugin to your project, follow these steps:
1. Download a release compatible with your version of Godot.
2. Copy the `addons/play_sdk` folder to your project.
3. For Android support, copy `android/plugins/play_sdk.aar` and `android/plugins/play_sdk.gdap` to your project, and enable the plugin in export settings. Also, don't forget to enable Internet permission in the Android Export settings.
4. For iOS support, copy the `ios/plugin/play_sdk` folder to your project, and enable the plugin in export settings.

## Building the Plugin

### Windows
```bash
scons version=4 platform=windows target=template_debug/template_release
```

### macOS
```bash
scons version=4 platform=osx target=template_debug/template_release
```

### Android
```bash
scons version=4 platform=android target=template_debug/template_release arch=arm64/armv7
```

### iOS
```bash
scons version=4 platform=ios target=template_debug/template_release
```

## Building the Android Plugin

1. Open the `plugin-android` folder in Android Studio.
2. Download `godot-lib.aar` from the official Godot site and copy it to `plugin-android/app/libs`.
3. Update the `build.gradle` file to include the copied AAR file:
   ```gradle
   compileOnly fileTree(dir: "libs", includes: ["YOUR_GODOTLIB_AAR_FILE_NAME.aar"])
   ```
4. Sync the Gradle file, build the project, and replace the built AAR in `YOUR_PROJECT/android/plugins/play_sdk.aar`.

## Building the iOS Plugin

In the `plugin-ios` folder, execute the following command:
```bash
./scripts/release_xcframework.sh 4.0
```

## Support and Issues
- For any issues encountered, refer to the `Issues` section of this repository.
- You can also contact Play SDK developers directly.

