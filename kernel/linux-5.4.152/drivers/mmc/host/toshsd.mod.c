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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d75c109, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x95ee7d3a, "mmc_alloc_host" },
	{ 0xd20e0112, "mmc_free_host" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xed46adb4, "mmc_remove_host" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xb9a3671e, "mmc_detect_change" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0xc5534d64, "ioread16" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0xe7363a56, "mmc_request_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001179d00000805sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78995BCC0E7461C33DD6301");
