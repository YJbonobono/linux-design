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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xfd205417, "no_llseek" },
	{ 0x93082893, "misc_deregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x8eb423bd, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc5850110, "printk" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xf9575308, "stream_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00001535sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7F6D6717CFDD34C692A9865");
