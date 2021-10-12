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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x8b1161dc, "rt2x00lib_resume" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x491661e8, "pci_set_mwi" },
	{ 0xbe43d05d, "rt2x00lib_remove_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x336d1bb2, "pci_ioremap_bar" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x9bb0dee8, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x7f7a5f7f, "pci_choose_state" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xd8f4c316, "rt2x00lib_probe_dev" },
	{ 0xe76f58d4, "rt2x00lib_suspend" },
	{ 0xd8f1dfb6, "pci_save_state" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "C0CFF0F20CF7B9E0650CCCB");
