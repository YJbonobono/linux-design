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
	{ 0x66d230ae, "param_ops_string" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x27b25842, "kfree_skb_list" },
	{ 0x13fe66a1, "skb_segment" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xd72baae5, "bpf_prog_destroy" },
	{ 0x60b57019, "bpf_prog_free" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x8f43d000, "skb_add_rx_frag" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x78381292, "init_net" },
	{ 0x179e014c, "bpf_prog_select_runtime" },
	{ 0x6da5d1a7, "bpf_prog_alloc" },
	{ 0xb96bb606, "bpf_prog_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5FEF4F6B7E72CBA03008DE");
