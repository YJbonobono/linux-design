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
	{ 0xefd4ff6, "request_firmware_nowait" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0xa5ae1d00, "pci_rescan_bus" },
	{ 0x2930376, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xbb6afdb1, "pcim_iounmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x29361773, "complete" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000168Cd0000FF1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EFC60B738D2E3B49E129FAF");
