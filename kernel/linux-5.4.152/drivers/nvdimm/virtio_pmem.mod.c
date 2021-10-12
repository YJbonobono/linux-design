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
	{ 0xd201139b, "unregister_virtio_driver" },
	{ 0x3b78d396, "register_virtio_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab1d6a02, "nvdimm_pmem_region_create" },
	{ 0xdc9882fe, "async_pmem_flush" },
	{ 0x1721b875, "nvdimm_bus_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6c8f4364, "virtio_pmem_host_ack" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdc41982d, "nvdimm_bus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nd_virtio");

MODULE_ALIAS("virtio:d0000001Bv*");

MODULE_INFO(srcversion, "DC507C06EB09A0A9515F563");
