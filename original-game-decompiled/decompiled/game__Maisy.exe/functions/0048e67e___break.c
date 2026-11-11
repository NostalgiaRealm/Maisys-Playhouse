
/* ==== __break @ 0048e67e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048e67e-0048e67e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


