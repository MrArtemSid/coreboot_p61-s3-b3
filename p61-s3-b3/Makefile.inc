bootblock-y += early_init.c
bootblock-y += gpio.c
ramstage-$(CONFIG_MAINBOARD_USE_LIBGFXINIT) += gma-mainboard.ads
romstage-y += early_init.c
romstage-y += gpio.c
