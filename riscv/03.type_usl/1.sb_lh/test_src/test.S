	.text			# Define beginning of text section
	.global	_start		# Define entry _start

_start:
	li x3, 0xffff0f0b	# int x6 = 0xffffffab
	li x4, 0x0000f0ab	# int x6 = 0xffffffab
	la x5, _array		# char *x5 = &(array[0])
	sb x3, 0(x4)		# char x4 = *x5
	sb x4, 4(x5)		# char x4 = *(x5+4)
	lb x6, 0(x5)
	lb x7, 4(x5)
	li x26, 1
	li x27, 1
_array:	
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00

	.end			# End of file
