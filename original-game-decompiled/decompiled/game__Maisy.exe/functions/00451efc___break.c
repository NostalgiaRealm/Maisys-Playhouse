
/* ==== __break @ 00451efc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451efc-00451efc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


