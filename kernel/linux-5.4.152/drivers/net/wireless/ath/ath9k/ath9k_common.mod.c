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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xa4c7262, "relay_file_operations" },
	{ 0x7b2dc39a, "ath9k_hw_getchan_noise" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xdaf9c5b7, "ath9k_hw_setrxfilter" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xcf94f9cb, "relay_switch_subbuf" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd7724805, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3d9bdcbe, "relay_close" },
	{ 0xb428b020, "ath9k_hw_gettsf64" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x2dbfd70, "ath9k_hw_getrxfilter" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb4facf8b, "simple_open" },
	{ 0xa717ea11, "relay_buf_full" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x6d0f4e5e, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0xf0be9c9, "relay_open" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3023ef06, "ath_hw_keyreset" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdb51cd97, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "ath9k_hw,cfg80211,ath");


MODULE_INFO(srcversion, "FEC6B04BAFB317ED28E63CA");
