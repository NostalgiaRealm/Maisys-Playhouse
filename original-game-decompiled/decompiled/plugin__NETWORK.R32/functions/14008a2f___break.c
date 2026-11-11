
/* ==== __break @ 14008a2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2f-14008a2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


