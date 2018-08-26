# kimai-widget

Rainmeter skin for [Kimai](http://www.kimai.org/), the open source self hosted timetracker.

Rainmeter is a desktop customization tool for Windows. More info and download: [rainmeter.net](https://www.rainmeter.net/)

This skin uses my kimai-cmd program. The executable included in the .rmskin package, but the source code of that project is here: [kimai-cmd](https://github.com/infeeeee/kimai-cmd).

To use this widget you have to install Kimai first on a server!

More info on Kimai:
* [kimai.org](http://www.kimai.org/)
* [github](https://github.com/kimai/kimai)

## Features

* SSL support
* List all projects, activities
* Show currently active project and activity
* Start/stop a project and activity
* Automatically stop timer when nobody uses the computer or when user logs off

## Installing

* Prerequisites: [Kimai](http://www.kimai.org/), [Rainmeter](https://www.rainmeter.net/)
* Download rmskin package from [releases](https://github.com/infeeeee/kimai-widget/releases/latest)
* Just doubleclick to install it
* You have to rename and edit settings.ini to connect to your kimai server! If you use the default install paths of rainmeter it should be here: `Documents\Rainmeter\Skins\kimai-widget\kimai\kimai-cmd\settings.ini.example`
Just rename it to `settings.ini`, than edit with notepad or with your favourite text editor.
* [Optional] Automatic stop of the current timer when the PC is idle, via task scheduler: edit kimaiStop.xml in \bat. In the `<exec>` section change the path to your kimai-cmd.exe. Run installTask.bat to install the scheduled task for stop when idle or logoff. To remove the task, run removeTask.bat


## Variants

There are two variants in the skin: 
* kimai-default, looks like the default kimai webui.

![kimai-default](@Resources/Screenshots/kimai-default.png?raw=true "kimai-default")

* infinimal, looks like my hardware monitor skin [infinimal](https://github.com/infeeeee/infinimal)

![infinimal](@Resources/Screenshots/infinimal.png?raw=true "infinimal")

## Usage

* First click the reload 🔄 button. It reads the current timers and available projects and tasks from the server. If it's not showing correctly, check the settings.ini file. 
* Click on the name of a the current project or the task to show the list of available projects and tasks. If there is no current timer, you should click on the 'No project' or 'No task' text. 
* After you selected the project and the task, click on the play ▶️ button.
* To stop the current timer, click on the stop ⏹️ button. 
* Any time the skin shows wrong data, just click on the reload 🔄 button. It happens when rainmeter loads.
* If you click on the Kimai logo, it opens your kimai homepage in your default browser

### Logging

If something goes wrong, you can enable logging. Rightclick on the skin, edit skin, search for the word LOGGING. 
Uncomment the following lines to enable verbose logging, and comment out the parameter value above
 

## Authors

infeeeee - gyetpet@gmail.com

## License

This project is licensed under the terms of the MIT license.
