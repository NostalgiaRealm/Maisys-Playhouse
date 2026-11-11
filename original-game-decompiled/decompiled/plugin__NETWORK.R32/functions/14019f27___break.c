
/* ==== __break @ 14019f27 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f27-14019f27
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


