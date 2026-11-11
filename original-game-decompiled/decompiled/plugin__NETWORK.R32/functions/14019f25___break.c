
/* ==== __break @ 14019f25 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f25-14019f25
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


