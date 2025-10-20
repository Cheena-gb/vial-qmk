I2C_DRIVER_REQUIRED = yes
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c

# see info.json for bootmagic, command, console, extra key, mouse key, nkro

BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow


CUSTOM_MATRIX = lite

SRC += matrix.c