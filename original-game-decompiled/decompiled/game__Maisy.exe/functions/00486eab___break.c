
/* ==== __break @ 00486eab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486eab-00486eab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


