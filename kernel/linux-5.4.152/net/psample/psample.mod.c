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
	{ 0xef932dcc, "genl_register_family" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x2b75e98a, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B8E13D45A801980229DD95");
