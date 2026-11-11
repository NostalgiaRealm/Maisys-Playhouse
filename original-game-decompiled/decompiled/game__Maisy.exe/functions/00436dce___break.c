
/* ==== __break @ 00436dce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436dce-00436dce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


