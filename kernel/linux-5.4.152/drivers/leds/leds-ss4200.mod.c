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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x85bd1608, "__request_region" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000027B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ACC74C59A379A64C84F1D00");
