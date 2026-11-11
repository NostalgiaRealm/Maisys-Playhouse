
/* ==== __break @ 00451ecd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ecd-00451ecd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


