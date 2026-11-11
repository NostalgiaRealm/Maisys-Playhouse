
/* ==== __break @ 00474b5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00474b5f-00474b5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


