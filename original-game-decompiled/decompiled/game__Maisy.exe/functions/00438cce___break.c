
/* ==== __break @ 00438cce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438cce-00438cce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


