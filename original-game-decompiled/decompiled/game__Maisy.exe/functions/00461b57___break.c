
/* ==== __break @ 00461b57 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b57-00461b57
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


