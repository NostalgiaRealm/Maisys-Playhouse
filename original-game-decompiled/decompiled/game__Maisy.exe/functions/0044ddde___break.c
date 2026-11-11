
/* ==== __break @ 0044ddde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ddde-0044ddde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


