#
# Makefile for the kernel mmc core.
#

ifeq ($(CONFIG_MMC_DEBUG),y)
	EXTRA_CFLAGS		+= -DDEBUG
endif

obj-$(CONFIG_MMC)		+= mmc_core.o
mmc_core-y			:= core.o bus.o host.o \
				   mmc.o mmc_ops.o sd.o sd_ops.o \
				   sdio.o sdio_ops.o sdio_bus.o \
<<<<<<< HEAD
				   sdio_cis.o sdio_io.o sdio_irq.o \
				   quirks.o
=======
				   sdio_cis.o sdio_io.o sdio_irq.o
>>>>>>> 69ad303ab8321656d6144d13b2444a5595bb6581

mmc_core-$(CONFIG_DEBUG_FS)	+= debugfs.o
