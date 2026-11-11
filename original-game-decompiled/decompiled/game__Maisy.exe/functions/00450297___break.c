
/* ==== __break @ 00450297 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450297-00450297
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


