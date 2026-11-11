
/* ==== __break @ 00461b5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b5c-00461b5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


