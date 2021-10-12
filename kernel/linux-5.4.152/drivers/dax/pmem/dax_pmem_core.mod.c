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
	{ 0x155c4b36, "__devm_create_dev_dax" },
	{ 0x77358855, "iomem_resource" },
	{ 0x1cc56130, "nvdimm_namespace_common_probe" },
	{ 0xf998715e, "devm_nsio_disable" },
	{ 0x9be56d3a, "alloc_dax_region" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x966bdd5d, "devm_nsio_enable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7ffa7205, "dax_region_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a8de30f, "nvdimm_setup_pfn" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5ea4673e, "to_nd_dax" },
	{ 0x7c7e727f, "to_nd_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B48A802BC85C0EA54B5E69");
