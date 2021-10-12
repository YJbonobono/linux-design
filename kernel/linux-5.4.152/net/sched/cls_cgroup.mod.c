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
	{ 0x6ea10bca, "unregister_tcf_proto_ops" },
	{ 0x7d862eba, "register_tcf_proto_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x43805d10, "tcf_em_tree_validate" },
	{ 0x6ae031cb, "tcf_exts_validate" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb2fa001e, "__tcf_em_tree_match" },
	{ 0x5f109ce8, "tcf_action_exec" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x73a64761, "task_cls_state" },
	{ 0x6006847, "current_task" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x596c50d1, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1f4de01f, "tcf_em_tree_destroy" },
	{ 0x7f3ec619, "tcf_exts_destroy" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xf5f24160, "tcf_exts_dump_stats" },
	{ 0x4d775452, "tcf_em_tree_dump" },
	{ 0x30aad184, "tcf_exts_dump" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2765DE0130AD429A710DE42");
