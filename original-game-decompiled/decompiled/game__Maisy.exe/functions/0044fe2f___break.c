
/* ==== __break @ 0044fe2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044fe2f-0044fe2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


