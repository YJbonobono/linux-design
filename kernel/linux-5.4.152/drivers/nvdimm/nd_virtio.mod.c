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
	{ 0x968a4ef3, "fs_bio_set" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9b461326, "bio_alloc_bioset" },
	{ 0xc6e8543, "virtqueue_kick" },
	{ 0x28e28bd9, "virtqueue_get_buf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5493de45, "virtqueue_add_sgs" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13490dfa, "bio_chain" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x994dbb68, "submit_bio" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x7062c854, "bio_clone_blkg_association" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2328358D26A86DC7E686613");
