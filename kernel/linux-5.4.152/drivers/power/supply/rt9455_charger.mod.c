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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x31d47ed8, "devm_usb_get_phy" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xd0b081d6, "devm_regmap_field_alloc" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe7612615, "regmap_field_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7bc9f415, "regmap_field_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:RT945500:*");
MODULE_ALIAS("of:N*T*Crichtek,rt9455");
MODULE_ALIAS("of:N*T*Crichtek,rt9455C*");
MODULE_ALIAS("i2c:rt9455-charger");

MODULE_INFO(srcversion, "2B06ED7E5764CB3449CDEB5");
