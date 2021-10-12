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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x54750daf, "devm_watchdog_register_device" },
	{ 0x4e133fc, "iTCO_vendor_check_noreboot_on" },
	{ 0xed2a3373, "iTCO_vendorsupport" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xc8930f32, "iTCO_vendor_pre_start" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75bec08d, "iTCO_vendor_pre_stop" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iTCO_vendor_support");


MODULE_INFO(srcversion, "823258CBD02032D0B0AE19A");
