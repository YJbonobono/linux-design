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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3d5d6c8, "ieee802154_unregister_hw" },
	{ 0xeac25319, "ieee802154_free_hw" },
	{ 0xa81af661, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4817b006, "ieee802154_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9dd70d96, "ieee802154_xmit_complete" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x7e21bbe, "ieee802154_rx_irqsafe" },
	{ 0x241d32, "__pskb_copy_fclone" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");


MODULE_INFO(srcversion, "024AE708DF89050B1E07A1E");
