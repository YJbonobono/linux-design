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
	{ 0x99a00c20, "i2c_new_device" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x270ac3e, "irq_set_chip_and_handler_name" },
	{ 0xb8bd1db6, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xd82577e1, "__irq_domain_add" },
	{ 0xda4a11d8, "irq_domain_simple_ops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbb94b060, "rt_mutex_lock" },
	{ 0xb9394b78, "rt_mutex_trylock" },
	{ 0xf7837028, "rt_mutex_unlock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe59971bb, "irq_domain_remove" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:cht_wcove_ext_chgr");

MODULE_INFO(srcversion, "3A6F096B4C20455787F3BFB");
