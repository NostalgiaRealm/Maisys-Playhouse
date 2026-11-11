
/* ==== __break @ 00438cc2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438cc2-00438cc2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


