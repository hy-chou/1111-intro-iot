from os import system
from signal import pause
from time import time_ns

from gpiozero import Button


def pressed():
    ts = time_ns()
    system(f'libcamera-jpeg -o image{ts}.jpg -t 1')


btn = Button(23)  # 'BOARD16'
btn.when_pressed = pressed

pause()
