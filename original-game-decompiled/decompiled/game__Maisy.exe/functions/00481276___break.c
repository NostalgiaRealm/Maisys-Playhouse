
/* ==== __break @ 00481276 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481276-00481276
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


