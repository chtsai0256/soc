MEMORY 
{
    ROM(ro): ORIGIN = 0x00000000, LENGTH = 2M 
	RAM(rx): ORIGIN = 0x80000000, LENGTH = 128M 
}

SECTIONS
{
	.text :
	{ 
	*(.text)
	} >ROM

	.data :
	{ 
	*(.data)
	} >RAM

	.bss :
	{ 
	*(.bss)
	} >RAM
}
ENTRY(_start)