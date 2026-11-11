
/* ==== __break @ 00403b1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00403b1f-00403b1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


