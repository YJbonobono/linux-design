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
	{ 0x3030b46, "dst_error_recovery" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xe07cf238, "rdc_reset_state" },
	{ 0x7fc77453, "dst_wait_dst_ready" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x4e11ebe6, "dvb_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xda7c5499, "dst_error_bailout" },
	{ 0x43a983fd, "dst_check_sum" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x80ecb507, "read_dst" },
	{ 0x5dcfb0b9, "dst_comm_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13caabab, "noop_llseek" },
	{ 0x4133f033, "dst_pio_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x159c8690, "write_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "dst,dvb-core");


MODULE_INFO(srcversion, "0541CBBD4B33C784609C1C4");
