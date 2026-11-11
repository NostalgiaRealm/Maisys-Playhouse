
/* ==== __break @ 14008a7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7f-14008a7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


