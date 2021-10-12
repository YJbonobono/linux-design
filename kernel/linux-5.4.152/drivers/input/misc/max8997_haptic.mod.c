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
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3f827a7d, "max8997_write_reg" },
	{ 0x53ca4226, "input_free_device" },
	{ 0x5b35232, "input_ff_destroy" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xea8e2574, "input_ff_create_memless" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x9e6c47a8, "regulator_get" },
	{ 0xb2faa7c2, "pwm_apply_state" },
	{ 0xc2c6b78c, "pwm_request" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd05ef65f, "input_allocate_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa156a6d8, "pwm_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x963d3287, "regulator_put" },
	{ 0xabb11fa6, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("platform:max8997-haptic");

MODULE_INFO(srcversion, "89D2B1C4E6877F327917C8A");
