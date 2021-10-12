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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x9ee3af0f, "regmap_add_irq_chip" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rt8973a");
MODULE_ALIAS("of:N*T*Crichtek,rt8973a-muic");
MODULE_ALIAS("of:N*T*Crichtek,rt8973a-muicC*");

MODULE_INFO(srcversion, "BB96259B3153CB8181892C4");
