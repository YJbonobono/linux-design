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
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6059d873, "caif_enroll_dev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6b347276, "__module_get" },
	{ 0x40babbe0, "cfpkt_extr_head" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3fa84493, "cfpkt_add_head" },
	{ 0x329dbd06, "cfpkt_info" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "1DDE90A6066D4B3CD1B1AA6");
