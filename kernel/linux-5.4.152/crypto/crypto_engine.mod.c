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
	{ 0xf9a482f9, "msleep" },
	{ 0xfa378eeb, "crypto_dequeue_request" },
	{ 0x7eee721c, "kthread_destroy_worker" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa4ec17e4, "crypto_enqueue_request" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa7da0c9e, "kthread_queue_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfb7543f9, "sched_setscheduler" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x41ddd40e, "kthread_create_worker" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DD08937568657F7F49E0BA3");
