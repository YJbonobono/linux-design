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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x47c4e08f, "glue_xts_crypt_128bit_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcbd5a928, "simd_unregister_skciphers" },
	{ 0x187d644b, "simd_unregister_aeads" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xaa5b91e6, "skcipher_walk_done" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x21aa7a73, "simd_register_skciphers_compat" },
	{ 0x105ceace, "glue_xts_req_128bit" },
	{ 0x5d4e17a4, "skcipher_walk_virt" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7cd7a6f6, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0xbca46633, "simd_register_aeads_compat" },
	{ 0x37a0cba, "kfree" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0x829589e5, "crypto_unregister_alg" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "glue_helper,crypto_simd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");

MODULE_INFO(srcversion, "E0E09617B4A2388642F8EBF");
