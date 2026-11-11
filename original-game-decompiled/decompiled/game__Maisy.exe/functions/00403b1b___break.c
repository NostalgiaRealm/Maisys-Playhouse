
/* ==== __break @ 00403b1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00403b1b-00403b1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


