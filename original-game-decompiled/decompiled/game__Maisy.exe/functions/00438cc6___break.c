
/* ==== __break @ 00438cc6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438cc6-00438cc6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


