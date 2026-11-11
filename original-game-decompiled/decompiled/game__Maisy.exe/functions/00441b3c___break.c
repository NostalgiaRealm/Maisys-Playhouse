
/* ==== __break @ 00441b3c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441b3c-00441b3c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


