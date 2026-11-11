
/* ==== __break @ 00473769 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00473769-00473769
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


