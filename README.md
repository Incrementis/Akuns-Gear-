# Akuns-Gear-
This is an item mod that contains 2 enchanted katanas and 1 armor for a Wizard Slayer.
All items are only equippable for the Wizard Slayer fighter subclass at level 4.

The items can be bought from the merchant Erdane in the Durlags Tower area(outside of Durlags Tower). The trader sells the items
directly from his stock (no dialogue options). Regular price is thousands of gold per item.

This mod is fanfiction.

# Supported Games
* BG:EE (Baldur's Gate:Enhanced Edition) tested version is 2.6.6.0

# Discussion
* [Beamdog Forums](https://forums.beamdog.com/discussion/87411/item-mod-akuns-gear)
* [G3 Forums](https://www.gibberlings3.net/forums/topic/36760-item-mod-bgee-akuns-gear/)

# Operating Systems
* Tested on Windows 11 and is likely to work on other operating systems

# Compatibility
* Installed SOD (Siege of Dragonspear) as DLC for BG:EE (see "Troubleshooting" here in readme to get things right)
* [EET](https://github.com/Gibberlings3/EET) (Enhanced Edition Trilogy) tested version is [13.4](https://github.com/Gibberlings3/EET/releases/tag/V13.4)
* [Project Infinity](https://github.com/ALIENQuake/ProjectInfinity) is untested as I don't use Project Infinity, 
but the Akun's Gear mod provides an INI file for PI as I realize PI has an active user group. 
I don't recommend using Project Infinity, because the source code is not open.
* Since it dynamically writes a new item category into the system, it is recommended to install this mod last. Otherwise, any mod that writes a hardcoded item category number will overwrite that mod item category (in general, hardcoding should be prevented, otherwise it may conflict with other mods).

# Languages
* English
* Deutsch

# Installation
1. Download the latest version, which you can find [here](https://github.com/Incrementis/Akuns-Gear-/releases)
2. Unzip the file e.g. "*Akuns-Gear--1.0.0.zip*"
3. Navigate into the unzipped folder until you see the "*akgear*" folder.
4. Copy the folder "*akgear*" and the file "*Setup-akgear.exe*" and paste them into your Baldur's Gate Enhanced Edition game folder.
5. Start "*Setup-akgear.exe*" and select the installation language.

# Troubleshooting
## There are known issues when installing SOD as DLC for BG:EE
Here is a solution:

* Before "Akun's Gear" is installed(If it is already installed, uninstall it before installing SOD by launching "*Setup-akgear.exe*".):
	1. SOD needs to be installed as BG:EE DLC 
	2. and after that [DLCmerger](https://github.com/Argent77/A7-DlcMerger/releases) needs to be installed.

Here is my [fast](https://github.com/Incrementis/Akuns-Gear-/blob/main/akgear/Fast_installation_of_DLCmergerEN.pdf) Win64 installation guide for DLCmerger, but possibly the [official](https://github.com/Argent77/A7-DlcMerger) installation guide is recommended.

## Installation of EET in combination with this mod
It seems, that the installation of EET and mods is not trivial.

Here is my [fast](https://github.com/Incrementis/Akuns-Gear-/blob/main/akgear/Fast_installation_of_EET.pdf) installation guide for EET, but possibly the [official](https://github.com/Gibberlings3/EET/blob/master/EET/readme-EET.html) installation guide is recommended.

# Content
## Armor "*Layers of Compassion*":

![Power Crave 3](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/Icons/II_Layers_of_Compassion.png)

  - 25% resistance to fire, cold, electricity, poison, acid and magical damage

## Katana "*Weave to Dust*":

![Weave to Dust image](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/Icons/II_Weave_to_Dust.png)

  - 20% chance to cast „*Dispel Magic*“ on its target after a successful hit

## Katana "*Power Crave*":

![Power Crave 0](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/Icons/II_Power_Crave.png)
![Power Crave 1](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/Icons/II_Power_Crave%2B1.png)
![Power Crave 2](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/Icons/II_Power_Crave%2B2.png)
![Power Crave 3](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/Icons/II_Power_Crave%2B3.png)
  - It has an individual grip and release sound and is internally defined as “Uncomfortable Hilt” (UHILT!_).
  - Main hand only
  - Increases the off-hands chance to hit as if it were equipped with the main hand while the weapon
is charged
  - Increases its magic level by +1 with each hit, up to a maximum of +3
  - +1 gives the wielder one chance to hit to increase to +2 for 1 rounds
  - +2 gives the wielder a chance of two hits, increasing to +3 for 2 rounds
  - +3 allows the wielder three attacks for 2 rounds, after which the sword reverts to its non-magical
state

The changes per power level are visible on the equipped character.
- +1 changes the blade to a bluish color
- +2 turns the blade red and glows in the outfitter's hand
- +3 turns the blade in the outfitter's hand into flames

# More Information
For more detailed information, please visit this [projects wiki](https://github.com/Incrementis/Akuns-Gear-/wiki/Modification).

![Halfling GIF](https://github.com/Incrementis/Infinity-Engine-Modding-Wiki-Content-/blob/main/AkunsGear/AnimatedImages/AkunsGear.gif)

# Special Thanks
Thanks to ["The Gibberlings 3"](https://www.gibberlings3.net/forums/) forum users and Infinity Engine discord server users who helped me with hints and information:
* CamDawg
* Graion Dilach
* jmerry
* subtledoctor
* kjeron
* AL|EN
* Endarire
* Jastey
* argent77
* Bubb
* suy
* The Artisan
* lynx
* Connelly

Thanks for offering code
* Ardanis [Toss your semi-useful WeiDU macros here](https://www.gibberlings3.net/forums/topic/28835-toss-your-semi-useful-weidu-macros-here/?do=findComment&comment=254219) (It has been heavily modified on my part)

# Copyright
The "*AkunsGear*" Project is not developed, supported, or endorsed by BioWare™, Interplay/BlackIsle, Beamdog, or Wizards of the Coast.

"*AkunsGear*" is licensed under a [Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/).