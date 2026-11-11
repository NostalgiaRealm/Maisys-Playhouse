
/* ==== __break @ 0048a33e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a33e-0048a33e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


