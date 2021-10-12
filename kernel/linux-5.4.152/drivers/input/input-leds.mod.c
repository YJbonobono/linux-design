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
	{ 0xacb79a88, "input_unregister_handler" },
	{ 0x5bed47f8, "input_register_handler" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x296ffbbb, "input_open_device" },
	{ 0xbb32703c, "input_register_handle" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xa39da423, "input_inject_event" },
	{ 0x22d97b29, "input_unregister_handle" },
	{ 0x50b5ad26, "input_close_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*11,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "88B38FB779492C9AEC9736A");
