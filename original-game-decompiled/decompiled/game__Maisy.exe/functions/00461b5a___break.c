
/* ==== __break @ 00461b5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b5a-00461b5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


