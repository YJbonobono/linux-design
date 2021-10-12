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
	{ 0x490cb404, "dfl_fpga_port_ops_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd25183e5, "__dfl_fpga_cdev_find_port" },
	{ 0x7d850ff2, "dfl_fpga_check_port_id" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd011fa6f, "fpga_bridge_register" },
	{ 0x57e0bcaf, "devm_fpga_bridge_create" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa4b16c1e, "dfl_fpga_port_ops_put" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x5177ee4a, "fpga_bridge_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl,fpga-bridge");


MODULE_INFO(srcversion, "873AAFD4B7E728D2C486716");
