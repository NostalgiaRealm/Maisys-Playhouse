
/* ==== __break @ 00495158 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00495158-00495158
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


