
/* ==== __break @ 00451eeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451eeb-00451eeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


