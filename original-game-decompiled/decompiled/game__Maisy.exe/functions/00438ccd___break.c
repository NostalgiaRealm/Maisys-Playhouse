
/* ==== __break @ 00438ccd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438ccd-00438ccd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


