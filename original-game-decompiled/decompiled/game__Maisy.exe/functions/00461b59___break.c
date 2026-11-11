
/* ==== __break @ 00461b59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b59-00461b59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


