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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xb76e050c, "__quota_error" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x6f915a45, "dqstats" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1c3a311, "make_kprojid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x75a2897d, "mark_info_dirty" },
	{ 0x7ce18c9f, "from_kqid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9B8BD109C39A45755D09835");
