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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d6d56f6, "i2c_setup_smbus_alert" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5220c255, "parport_claim_or_block" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x2d3e250, "parport_release" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfe88f371, "i2c_handle_smbus_alert" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,i2c-algo-bit,i2c-smbus");


MODULE_INFO(srcversion, "1E4873AD8A563AD197C5FCD");
