
/* ==== __break @ 00436edd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436edd-00436edd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


