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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0xfb149c1f, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0xce967b73, "fsg_common_set_cdev" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0xde7f3076, "usb_composite_overwrite_options" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdae59621, "usb_composite_probe" },
	{ 0x7ff9ac7e, "usb_add_function" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0xf4f4dc9d, "usb_put_function" },
	{ 0x12bc2c70, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa10d15d, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xedf1c8d2, "usb_string_ids_tab" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x7441be4, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x83b05a16, "param_ops_uint" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite");


MODULE_INFO(srcversion, "51D1B92D97DA701767BB272");
