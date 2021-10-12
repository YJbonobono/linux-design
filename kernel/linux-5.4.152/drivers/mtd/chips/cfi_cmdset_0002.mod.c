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
	{ 0xae8c66fa, "cfi_merge_status" },
	{ 0xf872a26c, "cfi_read_pri" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xec15edfa, "cfi_build_cmd" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcc60dd6f, "cfi_fixup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x3f5f70b6, "cfi_send_gen_cmd" },
	{ 0xff9fa623, "cfi_udelay" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9ff4c8db, "cfi_qry_mode_off" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe024a80, "cfi_qry_mode_on" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x6b347276, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xf5f1e65a, "cfi_varsize_frob" },
};

MODULE_INFO(depends, "cfi_util");


MODULE_INFO(srcversion, "9A5D4910B0F453BE3B05A2E");
