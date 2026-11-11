
/* ==== __break @ 1401c14f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14f-1401c14f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


