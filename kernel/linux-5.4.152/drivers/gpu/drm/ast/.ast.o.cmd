cmd_drivers/gpu/drm/ast/ast.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/gpu/drm/ast/ast.o drivers/gpu/drm/ast/ast_drv.o drivers/gpu/drm/ast/ast_main.o drivers/gpu/drm/ast/ast_mode.o drivers/gpu/drm/ast/ast_ttm.o drivers/gpu/drm/ast/ast_post.o drivers/gpu/drm/ast/ast_dp501.o
