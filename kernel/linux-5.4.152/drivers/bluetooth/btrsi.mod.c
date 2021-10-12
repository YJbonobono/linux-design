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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb194e058, "hci_register_dev" },
	{ 0x5c883ca1, "hci_recv_frame" },
	{ 0xe3fb0df5, "hci_unregister_dev" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x1ff6d818, "hci_alloc_dev" },
	{ 0x581cf443, "skb_push" },
	{ 0x9b553753, "skb_pull" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7fe4af54, "hci_free_dev" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7F6D30AB7271586419B7871");
