
/* ==== __break @ 00472e4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00472e4c-00472e4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


