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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x430143ad, "param_ops_byte" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb569aacc, "ffs_name_dev" },
	{ 0xcffdc4e7, "ffs_single_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdae59621, "usb_composite_probe" },
	{ 0x3dbe5861, "usb_remove_function" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ff9ac7e, "usb_add_function" },
	{ 0xa10d15d, "usb_get_function" },
	{ 0xc5850110, "printk" },
	{ 0xde7f3076, "usb_composite_overwrite_options" },
	{ 0xfb149c1f, "usb_add_config" },
	{ 0xedf1c8d2, "usb_string_ids_tab" },
	{ 0xbf98d4aa, "rndis_borrow_net" },
	{ 0x14bb514b, "gether_register_netdev" },
	{ 0xadaa7038, "gether_set_gadget" },
	{ 0xe0076790, "gether_set_dev_addr" },
	{ 0x4f7afd55, "gether_set_host_addr" },
	{ 0xdc62fc89, "gether_set_qmult" },
	{ 0x7441be4, "usb_get_function_instance" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1fa40bb, "usb_put_function_instance" },
	{ 0xf4f4dc9d, "usb_put_function" },
	{ 0x12bc2c70, "usb_composite_unregister" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb_f_fs,libcomposite,usb_f_rndis,u_ether");


MODULE_INFO(srcversion, "5A5A19DCA501474B6128BFD");
