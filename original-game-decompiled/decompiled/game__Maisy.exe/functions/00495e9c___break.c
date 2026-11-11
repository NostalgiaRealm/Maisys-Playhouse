
/* ==== __break @ 00495e9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00495e9c-00495e9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


