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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x1f532510, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x85635ad0, "au8522_led_ctrl" },
	{ 0x38d4e6be, "au8522_writereg" },
	{ 0xcdb24b71, "au8522_readreg" },
	{ 0xc5850110, "printk" },
	{ 0xc87cf47a, "au8522_i2c_gate_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2738f904, "au8522_sleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd3bfa847, "au8522_analog_i2c_gate_ctrl" },
	{ 0x69b1fb66, "au8522_get_state" },
	{ 0xf60ecdac, "au8522_init" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "0C0FFE37ED9467EA0EDF7FF");
