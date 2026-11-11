
/* ==== __break @ 00495e9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00495e9e-00495e9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


