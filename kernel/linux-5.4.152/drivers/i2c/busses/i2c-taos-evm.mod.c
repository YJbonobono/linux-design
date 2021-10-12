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
	{ 0x7b3e315b, "serio_unregister_driver" },
	{ 0xfe603e90, "__serio_register_driver" },
	{ 0x99a00c20, "i2c_new_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc500f45a, "serio_open" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x64b0469f, "serio_close" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr34id*ex*");

MODULE_INFO(srcversion, "3F5A3BBF7246C243ACC1E38");
