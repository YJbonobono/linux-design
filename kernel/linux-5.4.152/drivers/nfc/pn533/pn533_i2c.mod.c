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
	{ 0xa2486ae3, "pn533_recv_frame" },
	{ 0x285eb6dd, "pn533_finalize_setup" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x55682175, "pn533_unregister_device" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xc2ceeac5, "pn533_register_device" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pn533");

MODULE_ALIAS("i2c:pn533_i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2cC*");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2cC*");

MODULE_INFO(srcversion, "C85399C30382F91047D7F35");
