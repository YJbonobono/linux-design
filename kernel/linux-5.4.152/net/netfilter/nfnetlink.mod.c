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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x1dc0dc58, "netlink_has_listeners" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7c077736, "nlmsg_notify" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x59c4dd2c, "netlink_kernel_release" },
	{ 0xd51adaf8, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf45855f7, "netlink_ack" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x48e17653, "netlink_set_err" },
	{ 0x7c3896cb, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0x814c7f79, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39F861964563C9FDFFC98DE");
