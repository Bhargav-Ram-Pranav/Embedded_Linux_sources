savedcmd_/home/pranav/Documents/LINUX_DEVICE_DRIVERS/DRIVERS_PROGRAMS/DEVICE_FILE_STATIC/my_device.mod := printf '%s\n'   my_device.o | awk '!x[$$0]++ { print("/home/pranav/Documents/LINUX_DEVICE_DRIVERS/DRIVERS_PROGRAMS/DEVICE_FILE_STATIC/"$$0) }' > /home/pranav/Documents/LINUX_DEVICE_DRIVERS/DRIVERS_PROGRAMS/DEVICE_FILE_STATIC/my_device.mod