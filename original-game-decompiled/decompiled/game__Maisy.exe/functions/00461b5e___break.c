
/* ==== __break @ 00461b5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00461b5e-00461b5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


