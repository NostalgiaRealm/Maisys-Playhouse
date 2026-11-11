
/* ==== __break @ 00481273 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481273-00481273
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


