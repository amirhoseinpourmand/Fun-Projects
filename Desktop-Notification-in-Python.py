# I created a Desktop Notification to get a reminder to take a break after every hour. The message and alert can be
# anything you want. You can make a list of things to do for the day, week or month and give the app to remind you of
# them.

import time

from plyer import notification

if __name__ == "__main__":
    while True:
        notification.notify(
            title="! Alarum !",
            message="It has been an hour!",
            timeout=10
        )
        time.sleep(3600)

# ATTENTION ! : To do this, you need to install a Python library called : "Plyer", which is used to access the hardware
# components of your system. This library can be easily installed using : pip install pyler
