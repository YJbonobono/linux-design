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
	{ 0xb4a318cd, "pm_relax" },
	{ 0x96848186, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x64264946, "device_property_read_string" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x87e5e4e2, "gpiod_set_debounce" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5387a716, "gpiod_is_active_low" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x658e8c93, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x4824868, "devm_request_any_context_irq" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa4decd96, "pm_stay_awake" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0xf8c679e2, "input_event" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AEB794702F49A782EE87AD6");
