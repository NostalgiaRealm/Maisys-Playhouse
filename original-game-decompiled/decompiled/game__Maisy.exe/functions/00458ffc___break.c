
/* ==== __break @ 00458ffc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458ffc-00458ffc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


