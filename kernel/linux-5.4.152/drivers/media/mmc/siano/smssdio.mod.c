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
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0xaaee8f30, "smscore_start_device" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x2cade94, "smscore_set_board_id" },
	{ 0xebd3886d, "smscore_register_device" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x7ba076d3, "smscore_getbuffer" },
	{ 0x84650868, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x92b01861, "smscore_unregister_device" },
	{ 0x5538f38d, "smscore_putbuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "smsmdtv");

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "57CB2AF9EB419F35741F95E");
