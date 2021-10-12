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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0x581cf443, "skb_push" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0x361f38c, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xd33d7771, "llc_sap_close" },
	{ 0xb6e182c4, "llc_build_and_send_ui_pkt" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "DFF4361E04DF5209DA25910");
