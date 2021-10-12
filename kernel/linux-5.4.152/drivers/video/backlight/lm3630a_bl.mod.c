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
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x2e160fd2, "devm_pwm_get" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xddff5a51, "devm_backlight_device_register" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xb2faa7c2, "pwm_apply_state" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3630a_bl");

MODULE_INFO(srcversion, "71107A037536B54B893EC56");
