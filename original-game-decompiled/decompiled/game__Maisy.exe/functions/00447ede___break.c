
/* ==== __break @ 00447ede ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00447ede-00447ede
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


