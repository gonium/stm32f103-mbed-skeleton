# Installing mbed and gcc

First, install virtualenv, create a new environment.:
````
$ brew install python  # use homebrew version on a mac
$ virtualenv-2.7 virtenv
$ source ./virtenv/bin/activate
````

````
$ pip install mbed
$ brew install caskroom/cask/gcc-arm-embedded
````

````
$ mbed new firmware
[mbed] Creating new program "firmware" (git)
[mbed] Adding library "mbed-os" from "https://github.com/ARMmbed/mbed-os" at branch latest
[mbed] Updating reference "mbed-os" -> "https://github.com/ARMmbed/mbed-os/#cc7556a92fb9320f4bebb190c6e1315af116c50c"
[mbed] Auto-installing missing Python modules...
[mbed] WARNING: Unable to auto-install required Python modules.
---
[mbed] WARNING: -----------------------------------------------------------------
[mbed] WARNING: The mbed OS tools in this program require the following Python modules: colorama, pyserial, prettytable, jinja2, intelhex, junit_xml, pyyaml, requests, mbed_ls, mbed_host_tests, mbed_greentea, beautifulsoup4, fuzzywuzzy
[mbed] WARNING: You can install all missing modules by running "pip install -r requirements.txt" in "/Users/md/Projects/stm32f103-mbed-skeleton/firmware/mbed-os"
[mbed] WARNING: On Posix systems (Linux, Mac, etc) you might have to switch to superuser account or use "sudo"
---

````

````
pip install -r firmware/mbed-os/requirements.txt
````

````
$ brew install stlink
````

````
mbed compile -t GCC_ARM -m NUCLEO_F103RB
st-flash write BUILD/NUCLEO_F103RB/GCC_ARM/firmware.bin 0x08000000 
````
