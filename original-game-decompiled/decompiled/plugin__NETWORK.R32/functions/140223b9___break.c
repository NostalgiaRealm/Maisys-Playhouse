
/* ==== __break @ 140223b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223b9-140223b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


