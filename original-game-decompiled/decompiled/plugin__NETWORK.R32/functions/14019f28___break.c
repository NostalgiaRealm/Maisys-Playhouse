
/* ==== __break @ 14019f28 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f28-14019f28
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


