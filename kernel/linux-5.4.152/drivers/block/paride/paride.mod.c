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
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0x73a9e66e, "parport_put_port" },
	{ 0x966ddcc1, "parport_find_base" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0x2d3e250, "parport_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "16C6142BD6E9F0CF84F9428");
