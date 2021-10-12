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
	{ 0xf2563de2, "matroxfb_unregister_driver" },
	{ 0x9360c067, "matroxfb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ce620ed, "i2c_new_probed_device" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2f5c814b, "matroxfb_DAC_out" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdfa0350f, "matroxfb_DAC_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15cf5f8d, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matroxfb_base,matroxfb_misc,i2c-algo-bit");


MODULE_INFO(srcversion, "195B9B482FF34FFD38CC906");
