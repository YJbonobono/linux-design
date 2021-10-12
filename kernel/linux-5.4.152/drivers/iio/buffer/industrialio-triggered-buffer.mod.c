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
	{ 0xe93e49c3, "devres_free" },
	{ 0x4bb1240c, "iio_kfifo_allocate" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0x428e987c, "devm_iio_device_match" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x6009b351, "iio_device_attach_buffer" },
	{ 0xf5f515cb, "devres_release" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0x5a4a7fe5, "iio_kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x99d21882, "iio_alloc_pollfunc" },
	{ 0x4951a206, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "22C108E890DC32A58054AC2");
