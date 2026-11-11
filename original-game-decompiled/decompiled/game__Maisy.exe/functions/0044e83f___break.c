
/* ==== __break @ 0044e83f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e83f-0044e83f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


