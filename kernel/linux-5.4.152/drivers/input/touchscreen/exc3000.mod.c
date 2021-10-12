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
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x94fb90fa, "touchscreen_report_pos" },
	{ 0x466e2fb6, "input_mt_report_slot_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x8b29215e, "input_mt_init_slots" },
	{ 0x332f1f5e, "touchscreen_parse_properties" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf8c679e2, "input_event" },
	{ 0x9b53b2d5, "input_mt_sync_frame" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:exc3000");

MODULE_INFO(srcversion, "28456CB0A22A2269C188547");
