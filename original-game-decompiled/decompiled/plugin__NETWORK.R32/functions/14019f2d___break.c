
/* ==== __break @ 14019f2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2d-14019f2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


