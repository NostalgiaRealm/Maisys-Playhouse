
/* ==== __break @ 00486aad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00486aad-00486aad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


