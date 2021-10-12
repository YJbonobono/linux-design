#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9902df7, "matroxfb_g450_setpll_cond" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x2bc250d2, "matroxfb_vgaHWrestore" },
	{ 0x142ee3ad, "matroxfb_vgaHWinit" },
	{ 0xf5c1a9c7, "g450_mnp2f" },
	{ 0x2f5c814b, "matroxfb_DAC_out" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfa0350f, "matroxfb_DAC_in" },
	{ 0x25cf8049, "matroxfb_PLL_calcclock" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x919ac360, "matroxfb_g450_setclk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "g450_pll,matroxfb_misc");


MODULE_INFO(srcversion, "54FC625E16ACFC1924E90D8");
