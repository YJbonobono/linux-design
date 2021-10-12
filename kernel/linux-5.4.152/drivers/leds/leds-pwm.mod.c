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
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x35ef946a, "device_get_child_node_count" },
	{ 0x4c33e73e, "device_get_next_child_node" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x4df26511, "fwnode_property_read_string" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2e160fd2, "devm_pwm_get" },
	{ 0xe4b8a68d, "devm_led_classdev_register_ext" },
	{ 0x7993b1e, "devm_fwnode_pwm_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2faa7c2, "pwm_apply_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-leds");
MODULE_ALIAS("of:N*T*Cpwm-ledsC*");

MODULE_INFO(srcversion, "D15D707CE976D411C6D612B");
