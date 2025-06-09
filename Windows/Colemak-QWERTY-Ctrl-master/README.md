Colemak-QWERTY-Ctrl
===================

A Colemak version of the Mac OS X "Dvorak - QWERTY ⌘" keyboard layout, for Windows.

Includes support for using Caps Lock as Backspace.


Description
-----------

A keyboard layout for Windows which behaves the same as the Colemak
Simplified Keyboard for normal typing, but when `Ctrl` or `Win` is held down, it
behaves like a normal QWERTY layout. 

This project is heavily based on [@bradfeehan][1]'s work. View the original project which uses the Dvorak layout [here][2].

Using [Microsoft Keyboard Layout Creator (MSKLC)][3], I modified Brad's layout from Dvorak to Colemak, as well as included a separate layout which turns Caps Lock into Backspace without having to dig into the registry. Instead, it is baked into the layout itself meaning if you switch layouts, it will revert to its original behaviour. Read more about how to achieve this functionality with MSKLC [here][4].


Motivation
----------

I wanted to start learning the Colemak layout, while retaining the positions of shortcuts that use `Ctrl` or `Win` keys to ease the transition.


Installation
------------

Copy the full repo somewhere and run `Colemak-QWERTY-Ctrl/cvqwct/setup.exe`.

Or, for the version with Caps Lock as Backspace, run `Colemak-QWERTY-Ctrl-CapsBk/cvqwctbk/setup.exe`.


_**NOTE:** you can install both simultaneously and have them as separate layouts to switch between them as you wish._

- If you are on pre-Windows 10 computer, this will add the "Colemak (QWERTY-Ctrl)" or "Colemak (QWERTY-Ctrl) [Caps->Backspace]" layout in **Control Panel** >
  **Languages**.
  
- If on Windows 10, go to **Settings** > **Time & Language** >
  **Language** > **Prefered languages**, select **English** then click
  **Options**, under keyboard, you will see
  **Colemak (QWERTY-Ctrl)** or **Colemak (QWERTY-Ctrl) [Caps->Backspace]**.

Then log off or restart your computer to load the configuration.

[1]: <https://github.com/bradfeehan>
[2]: <https://github.com/bradfeehan/Dvorak-QWERTY-Ctrl>
[3]: <https://www.microsoft.com/en-us/download/details.aspx?id=102134>
[4]: <https://forum.colemak.com/topic/870-hacked-msklc-to-enable-remapping-capslock/>
