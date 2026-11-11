
/* ==== __break @ 00458ffa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458ffa-00458ffa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


