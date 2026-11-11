
/* ==== __break @ 00461b5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b5d-00461b5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


