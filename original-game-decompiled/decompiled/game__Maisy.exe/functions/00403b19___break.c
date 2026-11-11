
/* ==== __break @ 00403b19 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00403b19-00403b19
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


