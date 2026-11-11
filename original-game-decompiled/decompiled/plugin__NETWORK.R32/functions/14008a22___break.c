
/* ==== __break @ 14008a22 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a22-14008a22
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


