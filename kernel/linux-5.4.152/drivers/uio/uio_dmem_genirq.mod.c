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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb4fe5e64, "__uio_register_device" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x37a0cba, "kfree" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0xa8c9a5f7, "uio_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "9FBD4582A6C26FD39CB18DA");
