
/* ==== __break @ 00472e4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472e4d-00472e4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


