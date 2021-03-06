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
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8df0b0e5, "dmaengine_unmap_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x6256bc4, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xaf489f94, "dmaengine_get_unmap_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x917985f7, "__async_tx_find_channel" },
	{ 0x4d8f01c3, "async_tx_quiesce" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x83fd8b0f, "dma_ops" },
};

MODULE_INFO(depends, "async_tx,xor");


MODULE_INFO(srcversion, "9DB4B7810A4C806F8FEB2B0");
