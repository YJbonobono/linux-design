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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3daf8567, "hwmon_device_register_with_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x536822e3, "sfp_module_insert" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b413c9b, "sfp_link_down" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x91ae5fc9, "sfp_add_phy" },
	{ 0x8f1962bc, "mdiobus_scan" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc990b1cf, "hwmon_device_unregister" },
	{ 0x58def6ca, "sfp_module_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd33e6bc0, "phy_device_free" },
	{ 0x2e63ad82, "phy_device_remove" },
	{ 0x6129fb93, "sfp_remove_phy" },
	{ 0x46599119, "phy_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x149baafe, "sfp_register_socket" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x6d6d8b5f, "mdio_i2c_alloc" },
	{ 0xa073b060, "i2c_acpi_find_adapter_by_handle" },
	{ 0x5509f559, "__acpi_node_get_property_reference" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x35263d7d, "i2c_put_adapter" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x66b97421, "sfp_link_up" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xb6787346, "sfp_unregister_socket" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mdio-i2c");

MODULE_ALIAS("of:N*T*Csff,sff");
MODULE_ALIAS("of:N*T*Csff,sffC*");
MODULE_ALIAS("of:N*T*Csff,sfp");
MODULE_ALIAS("of:N*T*Csff,sfpC*");

MODULE_INFO(srcversion, "183CC3C4BB0418F0E1CB8DD");
