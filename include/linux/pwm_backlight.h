/*
 * Generic PWM backlight driver data - see drivers/video/backlight/pwm_bl.c
 */
#ifndef __LINUX_PWM_BACKLIGHT_H
#define __LINUX_PWM_BACKLIGHT_H

<<<<<<< HEAD
#include <linux/backlight.h>

=======
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
struct platform_pwm_backlight_data {
	int pwm_id;
	unsigned int max_brightness;
	unsigned int dft_brightness;
<<<<<<< HEAD
	unsigned int lth_brightness;
=======
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
	unsigned int pwm_period_ns;
	int (*init)(struct device *dev);
	int (*notify)(struct device *dev, int brightness);
	void (*exit)(struct device *dev);
<<<<<<< HEAD
	int (*check_fb)(struct device *dev, struct fb_info *info);
=======
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581
};

#endif
