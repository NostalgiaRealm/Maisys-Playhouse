
/* ==== __break @ 00455edd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00455edd-00455edd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


