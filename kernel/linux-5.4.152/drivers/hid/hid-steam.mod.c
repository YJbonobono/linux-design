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
	{ 0x7d1bfe34, "param_get_bool" },
	{ 0xca7229f7, "hid_unregister_driver" },
	{ 0x542a5355, "__hid_register_driver" },
	{ 0x62e68a9e, "hid_hw_open" },
	{ 0x1749a360, "hid_add_device" },
	{ 0x890efe67, "hid_hw_start" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9958798, "hid_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf739c30c, "hid_open_report" },
	{ 0xd6f06d40, "power_supply_powers" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x6d15e3f6, "hid_hw_stop" },
	{ 0xbe66444d, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8135f4a4, "hid_destroy_device" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xf8c679e2, "input_event" },
	{ 0x155a6f99, "hid_input_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42b9086f, "param_set_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa0cbd462, "hid_alloc_report_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x3cb1a279, "input_alloc_absinfo" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x74bfc54c, "hid_parse_report" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "804883F5D4454DC3CB418B1");
