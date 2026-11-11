
/* ==== __break @ 00438cc9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438cc9-00438cc9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


