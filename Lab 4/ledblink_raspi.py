import RPI.GIPO as GIPO
import time

GIPO.setmode(GIPO.BOARD)
GIPO.setup(3, GIPO.OUT)
GIPO.output(3, True)

while True:
    GIPO.output(3, True)
    time.sleep(1)
    GIPO.output(3, False)
    time.sleep(1)
