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
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc049fc33, "usb_ep_autoconfig_reset" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xde7f3076, "usb_composite_overwrite_options" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdae59621, "usb_composite_probe" },
	{ 0x7ff9ac7e, "usb_add_function" },
	{ 0xb0a33ad1, "usb_gadget_wakeup" },
	{ 0xf4f4dc9d, "usb_put_function" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12bc2c70, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa10d15d, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xedf1c8d2, "usb_string_ids_tab" },
	{ 0x32fad71a, "usb_add_config_only" },
	{ 0x7441be4, "usb_get_function_instance" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x83b05a16, "param_ops_uint" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "96AB8942FB3B6B42A4D4425");
