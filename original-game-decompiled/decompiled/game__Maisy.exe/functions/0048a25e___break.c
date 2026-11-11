
/* ==== __break @ 0048a25e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a25e-0048a25e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


