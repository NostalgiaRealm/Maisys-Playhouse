
/* ==== __break @ 004695bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695bc-004695bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


