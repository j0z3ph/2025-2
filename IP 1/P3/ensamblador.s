	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 13, 1
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ## -- Begin function main
LCPI0_0:
	.quad	0x400921ff2e48e8a7              ## double 3.1415999999999999
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	movsd	LCPI0_0(%rip), %xmm0            ## xmm0 = mem[0],zero
	movb	$1, %al
	callq	_printf
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__data
	.p2align	2                               ## @main.variableLocal
_main.variableLocal:
	.long	0x40b33333                      ## float 5.5999999

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"El valor de pi es %f\n"

	.comm	_variableGlobal,4,2             ## @variableGlobal
.subsections_via_symbols
