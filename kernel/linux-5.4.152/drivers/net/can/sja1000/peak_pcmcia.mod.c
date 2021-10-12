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
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfbd14f15, "register_sja1000dev" },
	{ 0x4fb897b3, "alloc_sja1000dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbb46f0fd, "free_sja1000dev" },
	{ 0x1767383e, "unregister_sja1000dev" },
	{ 0x754d539c, "strlen" },
	{ 0x49ebd0d2, "sja1000_interrupt" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,sja1000");

MODULE_ALIAS("pcmcia:m0377c0001f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "7BFFB4958F48F2C1030723B");
