
/* ==== __break @ 0049959e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049959e-0049959e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


