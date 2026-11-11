
/* ==== __break @ 00447edd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447edd-00447edd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


