
/* ==== __break @ 0042c12c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042c12c-0042c12c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


