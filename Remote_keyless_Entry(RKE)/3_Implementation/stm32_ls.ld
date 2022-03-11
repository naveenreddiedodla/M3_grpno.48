ENTRY(Reset_Handler)

MEMORY
{
	FLASH(rx):ORIGIN =0x08000000,LENGTH =1024k
	SRAM(rwx):ORIGIN =0x20000000,LENGTH =128k
}

SECTIONS
{
.text :
{
	*(.isr_vector)
	*(.text)
	*(.rodata)
	_etext = .;
}> FLASH
_la_data = LOADADDR(.data);
.data :
{
	_sdata = .;
	*(.data)
	_edata = .;
}> SRAM AT> FLASH

.bss :
{
	_sbss = .;
	*(.bss)
	_ebss = .;
}> SRAM

}










