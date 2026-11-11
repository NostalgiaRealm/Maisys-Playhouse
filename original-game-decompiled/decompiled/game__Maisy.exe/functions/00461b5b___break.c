
/* ==== __break @ 00461b5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b5b-00461b5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


