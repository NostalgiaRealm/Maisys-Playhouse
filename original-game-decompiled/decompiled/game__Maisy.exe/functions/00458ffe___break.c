
/* ==== __break @ 00458ffe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458ffe-00458ffe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


