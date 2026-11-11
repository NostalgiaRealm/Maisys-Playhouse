
/* ==== __break @ 14008a09 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a09-14008a09
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


