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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x361fe89f, "device_destroy" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x52977a3a, "__class_create" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xb21ba07d, "pi_unregister_driver" },
	{ 0x32a71a50, "pi_release" },
	{ 0xacdcb0b3, "pi_init" },
	{ 0x4267110a, "pi_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4d755ad5, "pi_read_block" },
	{ 0x2feb0ecd, "pi_write_block" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3ec64586, "pi_disconnect" },
	{ 0x27d9835a, "pi_read_regr" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xad970554, "pi_write_regr" },
	{ 0x8412b3d0, "pi_connect" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "paride");


MODULE_INFO(srcversion, "1C9E55D3EFD5B7EC0B76144");
