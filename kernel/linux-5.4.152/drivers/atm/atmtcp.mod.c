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
	{ 0x7ab3bef5, "deregister_atm_ioctl" },
	{ 0x526ce9a2, "register_atm_ioctl" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6b347276, "__module_get" },
	{ 0x9d7c6971, "atm_init_aal5" },
	{ 0xc2607da9, "vcc_insert_socket" },
	{ 0x7dca0a01, "atm_dev_lookup" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9b553753, "skb_pull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb07eb8b6, "atm_alloc_charge" },
	{ 0x9a74bbc8, "atm_dev_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb832485a, "consume_skb" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6006847, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xfdb3a88, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "ECC5DDD7DE84CDDC8771242");
