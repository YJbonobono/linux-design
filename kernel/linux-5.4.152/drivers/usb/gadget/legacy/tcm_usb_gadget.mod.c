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
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7441be4, "usb_get_function_instance" },
	{ 0xde7f3076, "usb_composite_overwrite_options" },
	{ 0xfb149c1f, "usb_add_config" },
	{ 0xedf1c8d2, "usb_string_ids_tab" },
	{ 0xdae59621, "usb_composite_probe" },
	{ 0x7ff9ac7e, "usb_add_function" },
	{ 0xa10d15d, "usb_get_function" },
	{ 0xf4f4dc9d, "usb_put_function" },
	{ 0x12bc2c70, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "F55EA63AF6CB41433218EA4");
