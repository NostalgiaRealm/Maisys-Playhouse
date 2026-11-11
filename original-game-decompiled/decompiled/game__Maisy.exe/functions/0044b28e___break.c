
/* ==== __break @ 0044b28e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b28e-0044b28e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


