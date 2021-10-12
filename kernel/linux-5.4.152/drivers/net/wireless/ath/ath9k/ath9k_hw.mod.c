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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd7724805, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6dce23b7, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x833425ed, "ath_hw_cycle_counters_update" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xc5d5b0c1, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "860EC7E899353226BDA3505");
