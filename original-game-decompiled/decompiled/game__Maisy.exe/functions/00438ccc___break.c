
/* ==== __break @ 00438ccc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438ccc-00438ccc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


