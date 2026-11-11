
/* ==== __break @ 0048b462 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b462-0048b462
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


